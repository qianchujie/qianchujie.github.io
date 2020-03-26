#ifndef MAINWINDOW_H
#define MAINWINDOW_H

//#include <QMainWindow>
#include <QtWidgets>
#include <imageviewer.h>
#include <opencv2/core.hpp>


namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

private:

    Ui::MainWindow *ui;

    ImageViewer iv;

    QImage image;

    cv::Mat frame;

    bool loadFile(const QString &);
    bool loadVideo(const QString &);
};

#endif // MAINWINDOW_H
