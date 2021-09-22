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

private:
    Ui::FuelSmallUnit *ui;
};

#endif // FUELSMALLUNIT_H
