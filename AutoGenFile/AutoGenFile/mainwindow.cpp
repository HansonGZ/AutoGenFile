#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "autogendirfile.h"
#include <QFileDialog>
#include <qdebug.h>
#include <QDir>
#include <QMessageBox>
#include <QIntValidator>
#include <QFile>
#include <QFileInfo>
#include <QTime>

#define AUTOGEN_DIR_NAME    "tmp"
#define DEFAULT_DIR_PATH    "C:/"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("文件自动生成工具");

    //static
    connect(this->ui->btnGenDir,SIGNAL(clicked(bool)),this,SLOT(GenSomeDir()));
    connect(this->ui->btnSelLoc,SIGNAL(clicked(bool)),this,SLOT(SelTargetLoc()));
    connect(this->ui->lE_DirNum,SIGNAL(textChanged(QString)),this,SLOT(ChecklEDirNumValid()));
    this->ui->lE_DirNum->setPlaceholderText("number smaller than 10000");


    connect(this->ui->btnSelFile,SIGNAL(clicked(bool)),this,SLOT(SelTargetFile()));
    connect(this->ui->btnGenFile,SIGNAL(clicked(bool)),this,SLOT(GenSomeFile()));
    connect(this->ui->lE_FileNum,SIGNAL(textChanged(QString)),this,SLOT(ChecklEFileNumNumValid()));
    this->ui->lE_FileNum->setPlaceholderText("number smaller than 10000");

    connect(this->ui->btnGenFile_NameLen,SIGNAL(clicked(bool)),this,SLOT(GenOneFile()));
    connect(this->ui->btnSelLocForFileNameLen,SIGNAL(clicked(bool)),this,SLOT(SelTargetLoc()));
    connect(this->ui->lE_FileNameLen,SIGNAL(textChanged(QString)),this,SLOT(ChecklEFileNameLenValid()));
    connect(this->ui->radioBtn_txt,SIGNAL(clicked(bool)),this,SLOT(RadioBtnTXT_Clicked()));
    connect(this->ui->radioBtn_jpeg,SIGNAL(clicked(bool)),this,SLOT(RadioBtnJPEG_Clicked()));
    this->ui->lE_FileNameLen->setPlaceholderText("number smaller than 255");

    connect(this->ui->btnSelLocForFileSize,SIGNAL(clicked(bool)),this,SLOT(SelTargetLoc()));
    connect(this->ui->btnGenFile_FileFixSize,SIGNAL(clicked(bool)),this,SLOT(GenOneFileWithFixSize()));
    this->ui->lE_FileFixSize->setPlaceholderText("number smaller than 10240");
    connect(this->ui->lE_FileFixSize,SIGNAL(textChanged(QString)),this,SLOT(ChecklEFileFixSizeValid()));

    //default value;init value
    qSuffix = ".txt";
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::ChecklEDirNumValid()
{
    QIntValidator *intvalid = new QIntValidator(0,10000,NULL);  //check valid
    this->ui->lE_DirNum->setValidator(intvalid);
}

void MainWindow::ChecklEFileNumNumValid()
{
    QIntValidator *intvalid = new QIntValidator(0,10000,NULL);  //check valid
    this->ui->lE_FileNum->setValidator(intvalid);
}

void MainWindow::ChecklEFileNameLenValid()
{
    QIntValidator *intvalid = new QIntValidator(0,255,NULL);  //check valid
    this->ui->lE_FileNameLen->setValidator(intvalid);
}

void MainWindow::ChecklEFileFixSizeValid()
{
    QIntValidator *intvalid = new QIntValidator(0,10240,NULL);  //check valid
    this->ui->lE_FileFixSize->setValidator(intvalid);
}

int MainWindow::GetTargetDirLayerNum()
{
    bool ok;
    return this->ui->lE_DirNum->text().toInt(&ok,10);
}

int MainWindow::GetNeedGenFileNum()
{
    bool ok;
    return this->ui->lE_FileNum->text().toInt(&ok,10);
}

int MainWindow::GetFileNameLength()
{
    bool ok;
    return this->ui->lE_FileNameLen->text().toInt(&ok,10);
}

int MainWindow::GetFileFixSize()
{
    bool ok;
    return this->ui->lE_FileFixSize->text().toInt(&ok,10);
}

void MainWindow::SelTargetLoc()
{
    qTargetDir = QFileDialog::getExistingDirectory(this,tr("选择保存路径"),DEFAULT_DIR_PATH);
    qDebug() << "Save File Dir is " << qTargetDir;
}

void MainWindow::SelTargetFile()
{
    qTargetFile = QFileDialog::getOpenFileName(this,tr("选择要复制的文件"),DEFAULT_DIR_PATH,tr("*.*"));
    qDebug() << qTargetFile;
}

void MainWindow::GenSomeDir()
{
    if(this->ui->lE_DirNum->text().isEmpty())
    {
        QMessageBox::warning(NULL,"警告","输入框内容不能为空！",QMessageBox::Ok,QMessageBox::NoButton);
        return;
    }

    int layerNum = GetTargetDirLayerNum();
    qDebug() << "hanson:GenSomeDir,count = " << layerNum;

    autoGenTool->AutoGenSomeDir(qTargetDir,layerNum,AUTOGEN_DIR_NAME);
}

void MainWindow::GenSomeFile()
{
    if(this->ui->lE_FileNum->text().isEmpty())
    {
        QMessageBox::warning(NULL,"警告","输入框内容不能为空！",QMessageBox::Ok,QMessageBox::NoButton);
        return;
    }

    int Num = GetNeedGenFileNum();
    qDebug() << "GenSomeFile,Num = " << Num;

    autoGenTool->AutoGenSomeFile(Num,qTargetFile);
}

QString GetRandStringName(int length)
{
    QString tmp = QString("0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ_abcdefghjklmnopqrstuvwxyz");
    QString str = QString();
    QTime t;
    t= QTime::currentTime();
    qsrand(t.msec()+t.second()*1000);
    for(int i=0; i< length; i++)
    {
        int ir = qrand()%(tmp.length());
        str[i] = tmp.at(ir);
    }
    qDebug() << "GetRandStringName: str = " << str;
    return str;
}

void MainWindow::GenOneFile()
{
    if(this->ui->lE_FileNameLen->text().isEmpty())
    {
        QMessageBox::warning(NULL,"警告","输入框内容不能为空！",QMessageBox::Ok,QMessageBox::NoButton);
        return;
    }

    QString filename = GetRandStringName(GetFileNameLength());
    qDebug() << "GenOneFile: filename = " << filename << "qSuffix = " << qSuffix;

    if(!autoGenTool->AutoGenOneFile(qTargetDir,filename + qSuffix))
    {
        int Maxlen = 255 - qSuffix.length();
        QString str1 = "文件长度过大，请不要超过";
        QString str2 = QString::number(Maxlen, 10);
        QString warningmes = str1 + str2;
        QMessageBox::warning(NULL,"警告",warningmes,QMessageBox::Ok,QMessageBox::NoButton);
    }
}

void MainWindow::RadioBtnJPEG_Clicked()
{
    qSuffix = ".jpeg";
}

void MainWindow::RadioBtnTXT_Clicked()
{
    qSuffix = ".txt";
}

void MainWindow::GenOneFileWithFixSize()
{
    if(this->ui->lE_FileFixSize->text().isEmpty())
    {
        QMessageBox::warning(NULL,"警告","输入框内容不能为空！",QMessageBox::Ok,QMessageBox::NoButton);
        return;
    }

    autoGenTool->AutoGenOneFileWithFixSize(qTargetDir,GetFileFixSize()*1024*1024);
}
