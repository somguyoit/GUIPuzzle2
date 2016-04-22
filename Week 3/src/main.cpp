#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "magic_8_ball.h"
#include <QQmlContext>

int main(int argc, char *argv[])
{
    magic_8_ball Cursed_8_ball;
    QGuiApplication app(argc, argv);
    QQmlApplicationEngine engine;

    engine.rootContext()->setContextProperty("Cursed_8_ball", &Cursed_8_ball);
    // Call main.qml
    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
