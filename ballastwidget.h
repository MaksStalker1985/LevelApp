#ifndef BALLASTWIDGET_H
#define BALLASTWIDGET_H

#include <QWidget>
#include <QGridLayout>

namespace Ui {
class BallastWidget;
}

class BallastWidget : public QWidget
{

    Q_OBJECT


    enum type{
        afterPeak = 0x3a,usual,forpeak
    };

signals:
    void insertItem(QWidget *ptr_wdg, int position_x, int position_y, int type);

public:
    explicit BallastWidget(QWidget *parent = nullptr);
    ~BallastWidget();

private:
    Ui::BallastWidget *ui;

private slots:
    void addUnit(QWidget *ptr_wdg, int position_x, int position_y,int type);

};

#endif // BALLASTWIDGET_H
