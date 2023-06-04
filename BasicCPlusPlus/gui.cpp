#include <QApplication>
#include <QMainWindow>
#include <QPushButton>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QMainWindow window;
    QPushButton button("Clique aqui!", &window);
    window.show();
    return app.exec();
}