#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTcpSocket>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

    QTcpSocket *tcpsocket;

private slots:
    void on_openclient_clicked();

    void connected_SLOT();
    void readyRead_Slot();

    void on_closeclient_clicked();

    void on_sent_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
