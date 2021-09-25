#ifndef DBHELPER_H
#define DBHELPER_H

#include <QObject>
#include <QSqlDatabase>
#include <QSqlQuery>

class DBHelper : public QObject
{
    Q_OBJECT
public:
    explicit DBHelper(QObject *parent = nullptr);
    ~DBHelper();
signals:
    void sig_send_config(QString vessel_name, int tank_quantities)
private:
    QSqlDatabase *ptr_dbase;

private slots:

    void readDatabase();
    void initDatabase();
    void input_data(QString data);

signals:
    void send_first_init(QString vessel_name, int tank_quantity);

};

#endif // DBHELPER_H
