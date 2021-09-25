#ifndef MAINCOREMODULE_H
#define MAINCOREMODULE_H

#include <QObject>
#include "unit.h"
#include <QFile>



class MainCoreModule : public QObject
{
    Q_OBJECT
public:
    explicit MainCoreModule(QObject *parent = nullptr);

signals:

    void drawUnit(QWidget *ptr_wdg, int position_x, int position_y);

private:
    QString STR_CONFIG_FILENAME;
    int I_UNITS_QUANTITY = 0;
    QStringList *ptr_data_units;
    QFile *ptr_config_file;

    void set_configuration(QString data);
    void init_units();

    Unit *p_unit;


};

#endif // MAINCOREMODULE_H
