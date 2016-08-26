nclude "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>




MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}


MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_actionNew_File_triggered()
{
    mFilename = "" ;
    ui->textEdit->setPlainText("");
}



void MainWindow::on_actionEdit_Button_triggered()
{
    ui->textEdit->copy();
}

void MainWindow::on_actionFileButton_triggered()
{
   QString file = QFileDialog::getOpenFileName(this, "Open a file");

   if(!file.isEmpty())
   {
       QFile sFile(file);
       if(sFile.open(QFile::ReadOnly | QFile::Text))
       {
           mFilename = file;
           QTextStream in(&sFile);
           QString text = in.readAll() ;
           sFile.close();


           ui->textEdit->setPlainText(text);
       }

   }

}
void MainWindow::on_actionSave_triggered()
{
    QFile sFile(mFilename);
    if(sFile.open(QFile::WriteOnly | QFile::Text))
    {
        QTextStream out (&sFile);

        out << ui->textEdit->toPlainText();
        sFile.flush();
        sFile.close();
    }
}


void MainWindow::on_actionRedo_triggered()
{
    ui->textEdit->redo();
}

void MainWindow::on_actionUndo_triggered()
{
    ui->textEdit->undo();
}



void MainWindow::on_actionPaste_triggered()
{
    ui->textEdit->paste();
}


void MainWindow::on_actionCut_triggered()
{
    ui->textEdit->cut();
}

void MainWindow::on_actionSave_As_triggered()
{
    QString file = QFileDialog::getSaveFileName(this, "Open a file");

    if(!file.isEmpty())
    {
        mFilename = file;
        on_actionSave_triggered();
    }
}

void MainWindow::on_actionQuit_triggered()
{
    QMessageBox confirmQuit;
      confirmQuit.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
      confirmQuit.setDefaultButton(QMessageBox::No);
      confirmQuit.setText(tr("Do you really want to quit ?"));
      confirmQuit.setWindowTitle(tr("Close the Notepad"));
      if(confirmQuit.exec() == QMessageBox::Yes)
      {
        qApp->quit();
      }
}

void MainWindow::on_actionAbout_Notepad_triggered()
{
    QMessageBox msgBox;
    msgBox.setText("This is a notepad made by me :)");
    msgBox.exec();
}


