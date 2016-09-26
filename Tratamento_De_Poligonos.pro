QT += core
QT -= gui

CONFIG += c++11

TARGET = Tratamento_De_Poligonos
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    point.cpp \
    poligono.cpp

HEADERS += \
    point.h \
    poligono.h
