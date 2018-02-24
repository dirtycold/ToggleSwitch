#include <QApplication>
#include "toggleswitch.hpp"

int main(int argc, char* argv[])
{
    QApplication app(argc, argv);
    ToggleSwitch t;
    t.show();
    return app.exec();
}
