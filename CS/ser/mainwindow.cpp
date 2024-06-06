#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <iostream>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    tcpsocket=new QTcpSocket(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::connected_SLOT()
{
    QObject::connect(tcpsocket, &QTcpSocket::readyRead, this, &MainWindow::readyRead_Slot);
}
void MainWindow::readyRead_Slot()//定义接收信号的槽
{
    QString buf;
    buf=tcpsocket->readAll();
    ui->receivewd->appendPlainText(buf);//接收由tcp发送过来的信息
}


void MainWindow::on_openclient_clicked()
{
    tcpsocket->connectToHost(ui->ipnum->text(),ui->portnum->text().toInt());
    connect(tcpsocket,SIGNAL(connected()),this,SLOT(connected_SLOT()));
    printf("打开客户端 ");
}

void MainWindow::on_closeclient_clicked()
{
    this->close();
    tcpsocket->close();
    printf("关闭客户端 ");
}

void MainWindow::on_sent_clicked()
{
    tcpsocket->write(ui->sendwd->text().toLocal8Bit().data(),ui->sendwd->text().length());
}
