#include "parc.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    parc w;
    w.show();
    return a.exec();
}
