#include "editorwindow.h"
#include <QApplication>

int main(int argc, char *argv[]) {
    QApplication app(argc, argv);
    EditUrlApp window;
    window.setWindowIcon(QIcon("Logo.ico")); // Set a custom icon for the application
    window.show();
    return app.exec();
}
