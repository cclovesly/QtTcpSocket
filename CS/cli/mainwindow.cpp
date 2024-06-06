#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    tcpserver=new QTcpServer(this);
    tcpsocket=new QTcpSocket(this);

    connect(tcpserver,SIGNAL(newConnection()),this,SLOT(newConnection_Slot()));
}


void MainWindow::newConnection_Slot()
{
    tcpsocket=tcpserver->nextPendingConnection(); //获取已经连接的客户端的SOCKET套接字
    connect(tcpsocket,SIGNAL(readyRead()),this,SLOT(readyRead_Slot()));//若客户端有消息进来的话,会触发信号readyRead_Slot();

    //获取对方的IP和端口
    QString sIp = tcpsocket->peerAddress().toString();
    quint16 sPort = tcpsocket->peerPort();
    qDebug() << sIp << sPort;
}
void MainWindow::readyRead_Slot()
{
     QString buf;
     buf=tcpsocket->readAll();
     ui->receivewd->appendPlainText(buf);

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_connectbt_clicked()//连接服务器
{
    tcpserver->listen(QHostAddress::Any,6000);//监听端口号
}

void MainWindow::on_disconnectbt_clicked()//关闭服务器
{
    this->close();
    tcpserver->close();
}

void MainWindow::on_sendbt_clicked()//发送信息
{
    tcpsocket->write(ui->sendwd->text().toLocal8Bit().data());
}

void MainWindow::on_pushButton_clicked()
{
    ui->receivewd->clear();
}

