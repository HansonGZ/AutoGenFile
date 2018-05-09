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

#define AUTOGEN_DIR_NAME    "tmp"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    //static
    connect(this->ui->btnGenDir,SIGNAL(clicked(bool)),this,SLOT(GenSomeDir()));
    connect(this->ui->btnSelLoc,SIGNAL(clicked(bool)),this,SLOT(SelTargetLoc()));
    connect(this->ui->btnSelFile,SIGNAL(clicked(bool)),this,SLOT(SelTargetFile()));
    connect(this->ui->btnGenFile,SIGNAL(clicked(bool)),this,SLOT(GenSomeFile()));
}

MainWindow::~MainWindow()
{
    delete ui;
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

void MainWindow::SelTargetLoc()
{
    qTargetDir = QFileDialog::getExistingDirectory(this,tr("选择保存路径"),"");
    qDebug() << "Save File Dir is " << qTargetDir;
}

void MainWindow::SelTargetFile()
{
    qTargetFile = QFileDialog::getOpenFileName(this,tr("选择要复制的文件"),"E:/QTWorkSpace/AutoGenFile/TestFile/",tr("*.*"));
    qDebug() << qTargetFile;
}

void MainWindow::GenSomeDir()
{
    QIntValidator *intvalid = new QIntValidator(0,10000,NULL);  //check valid
    this->ui->lE_DirNum->setValidator(intvalid);

    if(this->ui->lE_DirNum->text().isEmpty())
        QMessageBox::warning(NULL,"警告","输入框内容不能为空！",QMessageBox::Ok,QMessageBox::NoButton);

    int layerNum = GetTargetDirLayerNum();
    qDebug() << "hanson:GenSomeDir,count = " << layerNum;

    autoGenTool->AutoGenSomeDir(qTargetDir,layerNum,AUTOGEN_DIR_NAME);
}

void MainWindow::GenSomeFile()
{
    QIntValidator *intvalid = new QIntValidator(0,10000,NULL);  //check valid
    this->ui->lE_FileNum->setValidator(intvalid);

    if(this->ui->lE_FileNum->text().isEmpty())
        QMessageBox::warning(NULL,"警告","输入框内容不能为空！",QMessageBox::Ok,QMessageBox::NoButton);

    int Num = GetNeedGenFileNum();
    qDebug() << "GenSomeFile,Num = " << Num;

    autoGenTool->AutoGenSomeFile(Num,qTargetFile);
}
