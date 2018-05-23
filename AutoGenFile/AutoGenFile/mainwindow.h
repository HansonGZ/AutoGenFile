#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "autogendirfile.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    int GetTargetDirLayerNum();
    int GetNeedGenFileNum();
    int GetFileNameLength();
    int GetFileFixSize();

private slots:
    void GenSomeDir();
    void SelTargetLoc();
    void SelTargetFile();
    void GenSomeFile();
    void GenOneFile();
    void RadioBtnTXT_Clicked();
    void RadioBtnJPEG_Clicked();
    void GenOneFileWithFixSize();
    void ChecklEDirNumValid();
    void ChecklEFileNumNumValid();
    void ChecklEFileNameLenValid();
    void ChecklEFileFixSizeValid();

private:
    Ui::MainWindow *ui;
    QString qTargetDir;
    QString qTargetFile;
    AutoGenDirFile *autoGenTool;
    QString qSuffix;
};

#endif // MAINWINDOW_H
