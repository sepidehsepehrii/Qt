/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionFileButton;
    QAction *actionEdit_Button;
    QAction *actionCut;
    QAction *actionNew_File;
    QAction *actionQuit;
    QAction *actionSave;
    QAction *actionPaste;
    QAction *actionUndo;
    QAction *actionRedo;
    QAction *actionSave_As;
    QAction *actionAbout_Notepad;
    QWidget *centralWidget;
    QGridLayout *gridLayout;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menuEdit;
    QMenu *menuAbout;
    QMenu *menuFile;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(809, 344);
        actionFileButton = new QAction(MainWindow);
        actionFileButton->setObjectName(QStringLiteral("actionFileButton"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/newpics/open-file-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionFileButton->setIcon(icon);
        actionEdit_Button = new QAction(MainWindow);
        actionEdit_Button->setObjectName(QStringLiteral("actionEdit_Button"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/newpics/copy-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionEdit_Button->setIcon(icon1);
        actionCut = new QAction(MainWindow);
        actionCut->setObjectName(QStringLiteral("actionCut"));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/newpics/cut-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionCut->setIcon(icon2);
        actionNew_File = new QAction(MainWindow);
        actionNew_File->setObjectName(QStringLiteral("actionNew_File"));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/newpics/Files-New-File-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionNew_File->setIcon(icon3);
        actionQuit = new QAction(MainWindow);
        actionQuit->setObjectName(QStringLiteral("actionQuit"));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/newpics/Oxygen-Icons.org-Oxygen-Actions-dialog-close.ico"), QSize(), QIcon::Normal, QIcon::Off);
        actionQuit->setIcon(icon4);
        actionSave = new QAction(MainWindow);
        actionSave->setObjectName(QStringLiteral("actionSave"));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/newpics/Save-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave->setIcon(icon5);
        actionPaste = new QAction(MainWindow);
        actionPaste->setObjectName(QStringLiteral("actionPaste"));
        QIcon icon6;
        icon6.addFile(QStringLiteral(":/newpics/paste-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionPaste->setIcon(icon6);
        actionUndo = new QAction(MainWindow);
        actionUndo->setObjectName(QStringLiteral("actionUndo"));
        QIcon icon7;
        icon7.addFile(QStringLiteral(":/newpics/1702.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionUndo->setIcon(icon7);
        actionRedo = new QAction(MainWindow);
        actionRedo->setObjectName(QStringLiteral("actionRedo"));
        QIcon icon8;
        icon8.addFile(QStringLiteral(":/newpics/redo-5.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionRedo->setIcon(icon8);
        actionSave_As = new QAction(MainWindow);
        actionSave_As->setObjectName(QStringLiteral("actionSave_As"));
        QIcon icon9;
        icon9.addFile(QStringLiteral(":/newpics/Save-as-icon.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionSave_As->setIcon(icon9);
        actionAbout_Notepad = new QAction(MainWindow);
        actionAbout_Notepad->setObjectName(QStringLiteral("actionAbout_Notepad"));
        QIcon icon10;
        icon10.addFile(QStringLiteral(":/newpics/about.png"), QSize(), QIcon::Normal, QIcon::Off);
        actionAbout_Notepad->setIcon(icon10);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        gridLayout = new QGridLayout(centralWidget);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QStringLiteral("textEdit"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(textEdit->sizePolicy().hasHeightForWidth());
        textEdit->setSizePolicy(sizePolicy);

        gridLayout->addWidget(textEdit, 0, 0, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setEnabled(true);
        menuBar->setGeometry(QRect(0, 0, 809, 22));
        sizePolicy.setHeightForWidth(menuBar->sizePolicy().hasHeightForWidth());
        menuBar->setSizePolicy(sizePolicy);
        menuBar->setMaximumSize(QSize(16777215, 16777215));
        menuEdit = new QMenu(menuBar);
        menuEdit->setObjectName(QStringLiteral("menuEdit"));
        menuAbout = new QMenu(menuBar);
        menuAbout->setObjectName(QStringLiteral("menuAbout"));
        menuFile = new QMenu(menuBar);
        menuFile->setObjectName(QStringLiteral("menuFile"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        sizePolicy.setHeightForWidth(mainToolBar->sizePolicy().hasHeightForWidth());
        mainToolBar->setSizePolicy(sizePolicy);
        mainToolBar->setAutoFillBackground(true);
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menuFile->menuAction());
        menuBar->addAction(menuEdit->menuAction());
        menuBar->addAction(menuAbout->menuAction());
        menuEdit->addAction(actionCut);
        menuEdit->addAction(actionEdit_Button);
        menuEdit->addAction(actionPaste);
        menuEdit->addSeparator();
        menuEdit->addSeparator();
        menuEdit->addAction(actionUndo);
        menuEdit->addAction(actionRedo);
        menuAbout->addAction(actionAbout_Notepad);
        menuFile->addAction(actionNew_File);
        menuFile->addAction(actionFileButton);
        menuFile->addSeparator();
        menuFile->addAction(actionSave);
        menuFile->addAction(actionSave_As);
        menuFile->addSeparator();
        menuFile->addAction(actionQuit);
        mainToolBar->addAction(actionNew_File);
        mainToolBar->addAction(actionFileButton);
        mainToolBar->addAction(actionSave);
        mainToolBar->addAction(actionSave_As);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionEdit_Button);
        mainToolBar->addAction(actionPaste);
        mainToolBar->addAction(actionCut);
        mainToolBar->addSeparator();
        mainToolBar->addAction(actionUndo);
        mainToolBar->addAction(actionRedo);
        mainToolBar->addAction(actionAbout_Notepad);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
        actionFileButton->setText(QApplication::translate("MainWindow", "Open File", 0));
        actionEdit_Button->setText(QApplication::translate("MainWindow", "copy", 0));
        actionCut->setText(QApplication::translate("MainWindow", "Cut", 0));
        actionNew_File->setText(QApplication::translate("MainWindow", "New File", 0));
        actionQuit->setText(QApplication::translate("MainWindow", "Quit", 0));
        actionSave->setText(QApplication::translate("MainWindow", "Save File", 0));
        actionPaste->setText(QApplication::translate("MainWindow", "Paste", 0));
        actionUndo->setText(QApplication::translate("MainWindow", "Undo", 0));
        actionRedo->setText(QApplication::translate("MainWindow", "Redo", 0));
        actionSave_As->setText(QApplication::translate("MainWindow", "Save As", 0));
        actionAbout_Notepad->setText(QApplication::translate("MainWindow", "About Notepad", 0));
        menuEdit->setTitle(QApplication::translate("MainWindow", "Edit", 0));
        menuAbout->setTitle(QApplication::translate("MainWindow", "About", 0));
        menuFile->setTitle(QApplication::translate("MainWindow", "File", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
