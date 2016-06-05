TEMPLATE = app

QT += qml quick
CONFIG += c++11

SOURCES += main.cpp \
    loginmanager.cpp \
    jose_clock.cpp

RESOURCES += qml.qrc \
    images.qrc

# Additional import path used to resolve QML modules in Qt Creator's code model
QML_IMPORT_PATH =

# Default rules for deployment.
include(deployment.pri)

HEADERS += \
    loginmanager.h \
    jose_clock.h
