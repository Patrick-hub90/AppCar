QT       += core gui sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

CONFIG += c++11

# You can make your code fail to compile if it uses deprecated APIs.
# In order to do so, uncomment the following line.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
    main.cpp \
    info.cpp \
    locate.cpp \
    add.cpp \
    historique.cpp \
    accueil.cpp \
    signup.cpp \
    transaction.cpp \
    voiture.cpp \
    login.cpp \
    parc.cpp \
    edit.cpp

HEADERS += \
    info.h \
    locate.h \
    add.h \
    historique.h \
    accueil.h \
    signup.h \
    transaction.h \
    voiture.h \
    login.h \
    parc.h \
    edit.h

FORMS += \
    info.ui \
    locate.ui \
    add.ui \
    historique.ui \
    accueil.ui \
    signup.ui \
    transaction.ui \
    voiture.ui \
    login.ui \
    parc.ui \
    edit.ui


# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

RESOURCES += \
   image.qrc

DISTFILES += \
    ../build/fichier/Fichier1.png \
    ../build/fichier/Mercedes-AMGGT2020.JPG \
    ../build/fichier/Mercedes-BenzGLE2021.JPG \
    ../build/fichier/icons8_activity_history_48px.png \
    ../build/fichier/icons8_activity_history_64px.png \
    ../build/fichier/icons8_add_100px.png \
    ../build/fichier/icons8_add_100px_1.png \
    ../build/fichier/icons8_charging_station_64px.png \
    ../build/fichier/icons8_edit_48px.png \
    ../build/fichier/icons8_edit_52px.png \
    ../build/fichier/icons8_gas_station_48px.png \
    ../build/fichier/icons8_gas_station_48px_1.png \
    ../build/fichier/icons8_home_32px.png \
    ../build/fichier/icons8_home_48px_1.png \
    ../build/fichier/icons8_logout_rounded_down_52px.png \
    ../build/fichier/icons8_logout_rounded_left_60px.png \
    ../build/fichier/icons8_ok_100px.png \
    ../build/fichier/icons8_ok_48px.png \
    ../build/fichier/icons8_ok_96px.png \
    ../build/fichier/icons8_person_128px_1.png \
    ../build/fichier/icons8_search_100px.png \
    ../build/fichier/icons8_shopping_bag_48px.png \
    ../build/fichier/icons8_shopping_bag_48px_1.png \
    ../build/fichier/icons8_shopping_bag_64px.png \
    ../build/fichier/icons8_shopping_cart_100px_1.png \
    ../build/fichier/icons8_shopping_cart_48px.png \
    ../build/fichier/icons8_speed_48px.png \
    ../build/fichier/icons8_speed_48px_1.png
