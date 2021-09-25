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

signals:
    void insertItem(QWidget *ptr_wdg, int position_x, int position_y);

public:
    explicit BallastWidget(QWidget *parent = nullptr);
    ~BallastWidget();

private:
    Ui::BallastWidget *ui;
     QGridLayout *gr_lay = new QGridLayout;

private slots:
    void addUnit(QWidget *ptr_wdg, int position_x, int position_y);

};

#endif // BALLASTWIDGET_H
