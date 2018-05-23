#include "mainwindow.h"
#include <QApplication>
#include <QIcon>
#include <qdebug.h>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QString strPath = QApplication::applicationDirPath();
    qDebug() << "strPath = " << strPath;
    strPath += "/myapp.ico";
    a.setWindowIcon(QIcon(strPath));
    MainWindow w;
    w.show();

    return a.exec();
}
