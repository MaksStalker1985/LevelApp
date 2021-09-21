#ifndef UNIT_H
#define UNIT_H



#include <QObject>

class Unit : public QObject
{
    Q_OBJECT




public:
    explicit Unit(QObject *parent = nullptr);
    enum Calculation_type{
        Ullage = 0x0F,Sounding

    };


    enum UnitType{
        Ballast_type =0x1F,
        Heavy_Fuel_type, Diesel_Oil_type, Lub_Oil_type, Misc_type
    };

    enum TableType{
        UllageTable = 0x2F,SoundingTable,VolumeTable
    };

    double calculate_data(double trim, double value, int type);
signals:
    void sig_get_value(double value);
    void sig_send_value(double value, int type);
private:

    int I_UNIT_DATA[3] = {0,0,0}; //tank type, calculation type, convertion type
    double D_UNIT_VALUE = 0;
    double **D_VOLUME_TABLE;
    double *D_SOUNDING;
    double *D_ULLAGE;
    double *D_TRIM;
    int I_ROWS =0;
    int I_COLUMN = 0;
    QString STR_UNITNAME;
    double D_UNIT_PARAMS[5] = {0,0,0,0,0};//Unit max value, unit max volume, unit current volume, unit current value, percent

    void fill_tables(int table,int row,int column ,double value);


};

#endif // UNIT_H
