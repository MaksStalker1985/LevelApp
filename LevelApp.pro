QT       += core gui network serialport

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    ballastsmallunit.cpp \
    ballastwidget.cpp \
    calculations.cpp \
    commhelper.cpp \
    dbhelper.cpp \
    main.cpp \
    maincoremodule.cpp \
    mainwindow.cpp \
    unit.cpp

HEADERS += \
    ballastsmallunit.h \
    ballastwidget.h \
    calculations.h \
    commhelper.h \
    dbhelper.h \
    maincoremodule.h \
    mainwindow.h \
    unit.h

FORMS += \
    ballastsmallunit.ui \
    ballastwidget.ui \
    mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
