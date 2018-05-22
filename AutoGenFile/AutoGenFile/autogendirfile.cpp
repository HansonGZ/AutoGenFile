#include "autogendirfile.h"

AutoGenDirFile::AutoGenDirFile()
{

}

AutoGenDirFile::~AutoGenDirFile()
{

}

bool AutoGenDirFile::AutoGenSomeDir(QString dir, int count, QString filename)
{
    bool ret = false;
    QDir *tmpqdir = new QDir();
    if(tmpqdir->exists(dir))
    {
        //qDebug() << "This Dir is already Exist!";
        if(tmpqdir->cd(dir))
        {
            for(int i = 0; i < count; i++)
            {
                tmpqdir->mkdir(filename);
                tmpqdir->cd(filename);
            }
            ret = true;
        }
    }
    else
    {
        qDebug() << "This Dir is Not Exist, please check again!";
    }

    return ret;
}

void AutoGenDirFile::AutoGenSomeFile(int count, QString orgFileName)
{
    QFileInfo *fileinfo = new QFileInfo(orgFileName);
    QString fileSuffer = fileinfo->completeSuffix();
    QString nameNoSuffer = fileinfo->baseName();
    QString dirpath = fileinfo->dir().path();

    //qDebug() << "hanson:GenSomeFile, fileSuffer = " << fileSuffer;
    //qDebug() << "hanson:GenSomeFile, nameNoSuffer =  " << nameNoSuffer;

    for(int i = 1; i <= count; i++)
    {
        QString newName = dirpath + "/" + nameNoSuffer + "_" + QString::number(i,10) + "." + fileSuffer;
        //qDebug() << "hanson:GenSomeFile, newName =  " << newName;
        QFile::copy(orgFileName,newName);
    }
}


bool AutoGenDirFile::AutoGenOneFile(QString dir, QString filename)
{
    QFile qfile;
    qDebug() << "hanson:AutoGenOneFile, dir =  " << dir << "filename = " << filename;
    QDir::setCurrent(dir);

    if(QFile::exists(filename))
    {
        qDebug() << "hanson:AutoGenOneFile, File is already exist !";
        return true;
    }
    qfile.setFileName(filename);
    if(!qfile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Can't open the file!" << endl;
        return false;
    }
    //qfile.resize(10000);
    qfile.close();

    return true;
}

bool AutoGenDirFile::AutoGenOneFileWithFixSize(QString dir, int size)
{
    qDebug() << "hanson:AutoGenOneFileWithFixSize, dir =  " << dir << "size = " << size;
    QFile qfile;
    QDir::setCurrent(dir);
    qfile.setFileName("Test.jpeg");
    if(!qfile.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug() << "Can't open the file!" << endl;
        return false;
    }
    qfile.resize(size);
    qfile.close();

    return true;
}


