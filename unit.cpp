#include "unit.h"

Unit::Unit(QObject *parent) : QObject(parent)
{

}

void Unit::getValues(double value, double trim, int type)
{
    D_UNIT_PARAMS[3] = value;
    D_UNIT_PARAMS[2] = calculate_data(trim,D_UNIT_PARAMS[3],type);

}

void Unit::initUnit(QString data)
{
    QStringList *ptr_data = new QStringList();
    *ptr_data = data.split('|');
    STR_UNITNAME = ptr_data->at(0);
    I_UNIT_DATA[0] = ptr_data->at(1).toInt(); // init unit type
    I_UNIT_DATA[1] = ptr_data->at(2).toInt(); // init calc type
    I_UNIT_DATA[2] = ptr_data->at(3).toInt(); // init convertion type
    I_UNIT_DATA[3] = ptr_data->at(4).toInt(); // init position x
    I_UNIT_DATA[4] = ptr_data->at(5).toInt(); // init position y
    STR_TABLENAME = ptr_data->at(6);
}

void Unit::getMaxValues()
{
    for(int i = 0; i < I_ROWS; i++){
        if (D_UNIT_PARAMS[0] < D_ULLAGE[i]){
            D_UNIT_PARAMS[0] = D_ULLAGE[i];
        }else;
    }

    for(int i = 0; i < I_ROWS; i++){
        for(int y = 0; y < I_COLUMNS; y++){
            if( D_UNIT_PARAMS[1] < D_VOLUME_TABLE[y][i]){
                D_UNIT_PARAMS[1] = D_VOLUME_TABLE[y][i];
            }else;
        }
    }
}

double Unit::calculate_data(double trim, double value, int type)
{
    double returnValue = 0;
    double *temp_data = new double[8];
    int *indexes = new int[4];
    int *trim_maxminvalues = new int[4];
    trim_maxminvalues[0] = 0;
    trim_maxminvalues[1] = 999;
    trim_maxminvalues[2] = 0;
    trim_maxminvalues[3] = 0;
    for(int i = 0;i<I_COLUMNS;i++){
        if(trim_maxminvalues[0]<D_TRIM[i]){
            trim_maxminvalues[0] = D_TRIM[i];
        }else;
        if(trim_maxminvalues[1]>D_TRIM[i]){
            trim_maxminvalues[1] = D_TRIM[i];
        }else;
    }
    for(int i = 0; i<(I_COLUMNS-1); i++){
        if(D_TRIM[i]>trim && D_TRIM[i+1]<=trim){
            indexes[0] = i;
            indexes[1] = i+1;
            for(double y = D_TRIM[i];y<trim ;y=+0.01){
                trim_maxminvalues[2] =+1;
            }
        }else;
    }

    switch (type) {
    case Ullage:{
        if(D_ULLAGE[0] > D_ULLAGE[1]){
            for(int i = 0; i < (I_ROWS-1);i++){
                if( D_ULLAGE[i] < value && value >= D_ULLAGE[i+1]){
                    indexes[2] = i;
                    indexes[3] = i+1;
                }else;
            }

        }else{
            for(int i = 0; i < (I_ROWS-1);i++){
                if( D_ULLAGE[i] >= value && value < D_ULLAGE[i+1]){
                    indexes[2] = i+1;
                    indexes[3] = i;
                }else;
            }
        }

        temp_data[7] = (D_ULLAGE[indexes[3]] - D_ULLAGE[indexes[2]])/100;
        for(double i = D_ULLAGE[indexes[2]];i<value;i = i+temp_data[7]){
            trim_maxminvalues[3] = trim_maxminvalues[3] + 1;
        }
        break;
    }
    case Sounding:{
        if(D_SOUNDING[0] > D_SOUNDING[1]){
            for(int i = 0; i<(I_ROWS-1);i++){
                if(D_SOUNDING[i] < value && value>=D_SOUNDING[i+1]){
                    indexes[2] = i+1;
                    indexes[3] = i;
                }else ;
            }
        }else {
            for(int i = 0;i<(I_ROWS-1);i++){
                if(D_SOUNDING[i]>=value && value < D_SOUNDING[i+1]){
                    indexes[2] = i;
                    indexes[3] = i+1;
                }
            }
        }
        temp_data[7] = (D_SOUNDING[indexes[3]] - D_SOUNDING[indexes[2]])/100;
        for(double i = D_SOUNDING[indexes[2]];i<value;i = i+temp_data[7]){
            trim_maxminvalues[3] = trim_maxminvalues[3] + 1;
        }

        break;
    }
        break;

    }
    temp_data[0] = D_VOLUME_TABLE[indexes[0]][indexes[2]];
    temp_data[1] = D_VOLUME_TABLE[indexes[0]][indexes[3]];
    temp_data[2] = D_VOLUME_TABLE[indexes[1]][indexes[2]];
    temp_data[3] = D_VOLUME_TABLE[indexes[1]][indexes[3]];

    temp_data[4] = (temp_data[2] - temp_data[0])/100;
    temp_data[5] = (temp_data[3] - temp_data[1])/100;
    temp_data[4] = temp_data[0] + (temp_data[4] * trim_maxminvalues[2]);
    temp_data[5] = temp_data[1] + (temp_data[5] * trim_maxminvalues[2]);
    temp_data[6] = (temp_data[5] - temp_data[4])/100;
    returnValue  = temp_data[4] + (temp_data[6] * trim_maxminvalues[3]);

    delete [] trim_maxminvalues;
    delete [] indexes;
    delete [] temp_data;

    return returnValue;
}

void Unit::fill_tables(int table, int row, int column, double value)
{


    switch (table) {
    case SoundingTable:{
        D_SOUNDING[row] = value;
        break;
    }
    case UllageTable:{
        D_ULLAGE[row] = value;
        break;
    }
    case VolumeTable:{
        D_VOLUME_TABLE[column][row] = value;
        break;
    }
        break;
    }
}
