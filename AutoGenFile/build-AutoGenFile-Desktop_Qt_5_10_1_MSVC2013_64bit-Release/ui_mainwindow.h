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
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *widget;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lE_DirNum;
    QPushButton *btnSelLoc;
    QPushButton *btnGenDir;
    QSpacerItem *verticalSpacer;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_2;
    QLineEdit *lE_FileNum;
    QPushButton *btnSelFile;
    QPushButton *btnGenFile;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_3;
    QLineEdit *lE_FileNameLen;
    QRadioButton *radioBtn_txt;
    QRadioButton *radioBtn_jpeg;
    QPushButton *btnSelLocForFileNameLen;
    QPushButton *btnGenFile_NameLen;
    QSpacerItem *verticalSpacer_3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_4;
    QLineEdit *lE_FileFixSize;
    QPushButton *btnSelLocForFileSize;
    QPushButton *btnGenFile_FileFixSize;
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
        widget = new QWidget(centralWidget);
        widget->setObjectName(QStringLiteral("widget"));
        widget->setGeometry(QRect(20, 30, 521, 211));
        verticalLayout = new QVBoxLayout(widget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(widget);
        label->setObjectName(QStringLiteral("label"));

        horizontalLayout->addWidget(label);

        lE_DirNum = new QLineEdit(widget);
        lE_DirNum->setObjectName(QStringLiteral("lE_DirNum"));

        horizontalLayout->addWidget(lE_DirNum);

        btnSelLoc = new QPushButton(widget);
        btnSelLoc->setObjectName(QStringLiteral("btnSelLoc"));

        horizontalLayout->addWidget(btnSelLoc);

        btnGenDir = new QPushButton(widget);
        btnGenDir->setObjectName(QStringLiteral("btnGenDir"));

        horizontalLayout->addWidget(btnGenDir);


        verticalLayout->addLayout(horizontalLayout);

        verticalSpacer = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        label_2 = new QLabel(widget);
        label_2->setObjectName(QStringLiteral("label_2"));

        horizontalLayout_2->addWidget(label_2);

        lE_FileNum = new QLineEdit(widget);
        lE_FileNum->setObjectName(QStringLiteral("lE_FileNum"));

        horizontalLayout_2->addWidget(lE_FileNum);

        btnSelFile = new QPushButton(widget);
        btnSelFile->setObjectName(QStringLiteral("btnSelFile"));

        horizontalLayout_2->addWidget(btnSelFile);

        btnGenFile = new QPushButton(widget);
        btnGenFile->setObjectName(QStringLiteral("btnGenFile"));

        horizontalLayout_2->addWidget(btnGenFile);


        verticalLayout->addLayout(horizontalLayout_2);

        verticalSpacer_2 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        label_3 = new QLabel(widget);
        label_3->setObjectName(QStringLiteral("label_3"));

        horizontalLayout_3->addWidget(label_3);

        lE_FileNameLen = new QLineEdit(widget);
        lE_FileNameLen->setObjectName(QStringLiteral("lE_FileNameLen"));

        horizontalLayout_3->addWidget(lE_FileNameLen);

        radioBtn_txt = new QRadioButton(widget);
        radioBtn_txt->setObjectName(QStringLiteral("radioBtn_txt"));

        horizontalLayout_3->addWidget(radioBtn_txt);

        radioBtn_jpeg = new QRadioButton(widget);
        radioBtn_jpeg->setObjectName(QStringLiteral("radioBtn_jpeg"));

        horizontalLayout_3->addWidget(radioBtn_jpeg);

        btnSelLocForFileNameLen = new QPushButton(widget);
        btnSelLocForFileNameLen->setObjectName(QStringLiteral("btnSelLocForFileNameLen"));

        horizontalLayout_3->addWidget(btnSelLocForFileNameLen);

        btnGenFile_NameLen = new QPushButton(widget);
        btnGenFile_NameLen->setObjectName(QStringLiteral("btnGenFile_NameLen"));

        horizontalLayout_3->addWidget(btnGenFile_NameLen);


        verticalLayout->addLayout(horizontalLayout_3);

        verticalSpacer_3 = new QSpacerItem(20, 80, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout->addItem(verticalSpacer_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        label_4 = new QLabel(widget);
        label_4->setObjectName(QStringLiteral("label_4"));

        horizontalLayout_4->addWidget(label_4);

        lE_FileFixSize = new QLineEdit(widget);
        lE_FileFixSize->setObjectName(QStringLiteral("lE_FileFixSize"));

        horizontalLayout_4->addWidget(lE_FileFixSize);

        btnSelLocForFileSize = new QPushButton(widget);
        btnSelLocForFileSize->setObjectName(QStringLiteral("btnSelLocForFileSize"));

        horizontalLayout_4->addWidget(btnSelLocForFileSize);

        btnGenFile_FileFixSize = new QPushButton(widget);
        btnGenFile_FileFixSize->setObjectName(QStringLiteral("btnGenFile_FileFixSize"));

        horizontalLayout_4->addWidget(btnGenFile_FileFixSize);


        verticalLayout->addLayout(horizontalLayout_4);

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
        btnSelLoc->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\344\275\215\347\275\256", nullptr));
        btnGenDir->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\346\225\260\351\207\217\357\274\232", nullptr));
        btnSelFile->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\346\226\207\344\273\266", nullptr));
        btnGenFile->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\220\215\351\225\277\345\272\246\357\274\232", nullptr));
        radioBtn_txt->setText(QApplication::translate("MainWindow", "txt", nullptr));
        radioBtn_jpeg->setText(QApplication::translate("MainWindow", "jpeg", nullptr));
        btnSelLocForFileNameLen->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\344\275\215\347\275\256", nullptr));
        btnGenFile_NameLen->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "\346\226\207\344\273\266\345\244\247\345\260\217(MB)\357\274\232", nullptr));
        btnSelLocForFileSize->setText(QApplication::translate("MainWindow", "\351\200\211\346\213\251\344\275\215\347\275\256", nullptr));
        btnGenFile_FileFixSize->setText(QApplication::translate("MainWindow", "\347\224\237\346\210\220", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
