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





