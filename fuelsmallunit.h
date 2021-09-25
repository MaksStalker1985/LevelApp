#ifndef FUELSMALLUNIT_H
#define FUELSMALLUNIT_H

#include <QWidget>

namespace Ui {
class FuelSmallUnit;
}

class FuelSmallUnit : public QWidget
{
    Q_OBJECT

public:
    explicit FuelSmallUnit(QWidget *parent = nullptr);
    ~FuelSmallUnit();

private slots:
    void on_remoteCheckBox_stateChanged(int arg1);

private:
    Ui::FuelSmallUnit *ui;

    void SetActive(bool status);
};

#endif // FUELSMALLUNIT_H
