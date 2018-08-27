#include "graphshow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    GraphShow w;
    w.show();

    return a.exec();
}
