#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "mybutton.h"
#include "QButtonGroup"
#include <QEvent>
#include<iostream>
#include "string"
MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->textEdit->setEnabled(false);
    button1 = new MyButton(this);
    int str1 = 2;
    QString str2 = "11"+QString::number(str1);
    button1->setText(str2);
    button1->setGeometry(QRect(450,300,90,30)); //设置位置和大小
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    dialog = new Dialog(this);
    dialog->setModal(true);
    dialog->show();
}


