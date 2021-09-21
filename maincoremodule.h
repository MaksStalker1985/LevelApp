#ifndef MAINCOREMODULE_H
#define MAINCOREMODULE_H

#define CONVERTION_NOT_NEEDED   0
#define CONVERTION_NEEDED       1
#define MANUAL_CALCULATION      2
#define AUTOMATIC_CALCULATION   3


#include <QObject>
#include "unit.h"



class MainCoreModule : public QObject
{
    Q_OBJECT
public:
    explicit MainCoreModule(QObject *parent = nullptr);

signals:

private:
    QString STR_CONFIG_FILENAME;
    int I_UNITS_QUANTITY = 0;

    void set_configuration(QString data);
    void read_config_file();
    void write_config(QString data);
    void init_units();
    Unit *p_unit;

};

#endif // MAINCOREMODULE_H
