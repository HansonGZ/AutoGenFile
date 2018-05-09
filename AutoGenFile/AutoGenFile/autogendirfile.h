#ifndef AUTOGENDIRFILE_H
#define AUTOGENDIRFILE_H

#include <QString>
#include <QDir>
#include <QDebug>
#include <QFileInfo>
#include <QFile>

class AutoGenDirFile
{
public:
    AutoGenDirFile();
    ~AutoGenDirFile();
    bool AutoGenSomeDir(QString dir, int count, QString filename);
    void AutoGenSomeFile(int count, QString orgFileName);
};

#endif // AUTOGENDIRFILE_H
