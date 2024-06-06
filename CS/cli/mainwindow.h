#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpServer>
#include <QTcpSocket>
#include <QString>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QTcpServer *tcpserver;
    QTcpSocket *tcpsocket;

private slots:
    void on_connectbt_clicked();

    void newConnection_Slot();
    void readyRead_Slot();

    void on_disconnectbt_clicked();

    void on_sendbt_clicked();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
