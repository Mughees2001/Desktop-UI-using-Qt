#include <QApplication>
#include "counter_window.hpp"

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    
    CounterWindow window;
    window.resize(300, 200);
    window.setWindowTitle("Qt Counter App");
    window.show();
    
    return app.exec();
}