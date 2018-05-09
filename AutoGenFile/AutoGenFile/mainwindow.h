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

private slots:
    void GenSomeDir();
    void SelTargetLoc();
    void SelTargetFile();
    void GenSomeFile();

private:
    Ui::MainWindow *ui;
    QString qTargetDir;
    QString qTargetFile;
    AutoGenDirFile *autoGenTool;
};

#endif // MAINWINDOW_H
