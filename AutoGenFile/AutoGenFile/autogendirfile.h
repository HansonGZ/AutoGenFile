#ifndef AUTOGENDIRFILE_H
#define AUTOGENDIRFILE_H

#include <QString>
#include <QDir>
#include <QDebug>
#include <QFileInfo>
#include <QFile>
#include <QIODevice>

class AutoGenDirFile
{
public:
    AutoGenDirFile();
    ~AutoGenDirFile();
    bool AutoGenSomeDir(QString dir, int count, QString filename);
    void AutoGenSomeFile(int count, QString orgFileName);
    bool AutoGenOneFile(QString dir, QString filename);
    bool AutoGenOneFileWithFixSize(QString dir, int size);
};

#endif // AUTOGENDIRFILE_H
