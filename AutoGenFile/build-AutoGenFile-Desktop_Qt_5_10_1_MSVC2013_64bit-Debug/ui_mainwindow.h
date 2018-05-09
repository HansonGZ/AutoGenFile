/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QLabel *label;
    QLineEdit *lE_DirNum;
    QPushButton *btnGenDir;
    QPushButton *btnSelLoc;
    QLabel *label_2;
    QLineEdit *lE_FileNum;
    QPushButton *btnSelFile;
    QPushButton *btnGenFile;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(606, 385);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 30, 91, 16));
        lE_DirNum = new QLineEdit(centralWidget);
        lE_DirNum->setObjectName(QStringLiteral("lE_DirNum"));
        lE_DirNum->setGeometry(QRect(100, 30, 113, 20));
        btnGenDir = new QPushButton(centralWidget);
        btnGenDir->setObjectName(QStringLiteral("btnGenDir"));
        btnGenDir->setGeometry(QRect(460, 30, 75, 23));
        btnSelLoc = new QPushButton(centralWidget);
        btnSelLoc->setObjectName(QStringLiteral("btnSelLoc"));
        btnSelLoc->setGeometry(QRect(370, 30, 75, 23));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 70, 91, 16));
        lE_FileNum = new QLineEdit(centralWidget);
        lE_FileNum->setObjectName(QStringLiteral("lE_FileNum"));
        lE_FileNum->setGeometry(QRect(100, 70, 113, 20));
        btnSelFile = new QPushButton(centralWidget);
        btnSelFile->setObjectName(QStringLiteral("btnSelFile"));
        btnSelFile->setGeometry(QRect(370, 70, 75, 23));
        btnGenFile = new QPushButton(centralWidget);
        btnGenFile->setObjectName(QStringLiteral("btnGenFile"));
        btnGenFile->setGeometry(QRect(460, 70, 75, 23));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 606, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QApplication::translate("MainWindow", "\347\233\256\345\275\225\345\261\202\347\272\247\346\225\260\345\200\274\357\274\232", nullptr));
        btnGenDir->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220", nullptr));
        btnSelLoc->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\345\255\230\345\202\250\344\275\215\347\275\256", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\346\225\260\345\200\274\357\274\232", nullptr));
        btnSelFile->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        btnGenFile->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
