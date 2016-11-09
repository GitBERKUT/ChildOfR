#include "alethiometr.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Alethiometr w;
    w.show();

    return a.exec();
}
