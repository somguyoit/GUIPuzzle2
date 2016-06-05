#include <QGuiApplication>
#include <QQmlApplicationEngine>
#include "loginmanager.h"
#include <QQmlContext>
#include "jose_clock.h"

int main(int argc, char *argv[])
{
    QGuiApplication app(argc, argv);
    Jose_Clock clock;
    QQmlApplicationEngine engine;
    LoginManager         user_login;
    engine.rootContext()->setContextProperty("Clock",&clock);

    engine.rootContext()->setContextProperty("Login",&user_login);


    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

    return app.exec();
}
