#-------------------------------------------------
#
# Project created by QtCreator 2022-10-06T01:43:28
#
#-------------------------------------------------

QT += opengl

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Figs_Qt
TEMPLATE = app

LIBS += -LD:\QtCreator\5.9\5.9\mingw53_32\lib\libQt5OpenGL.a -lopengl32

# The following define makes your compiler emit warnings if you use
# any feature of Qt which as been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0


SOURCES += \
    main.cpp \
    mainwindow.cpp \
    glfigureswidget.cpp \
    glprismswidget.cpp \
    figure_tools.cpp \
    buttonlist.cpp \
    Prism/Prism.cpp \
    Figures/Outer.cpp \
    Figures/figuresmanager.cpp \
    Figures/Triangle/triangle.cpp \
    Figures/Triangle/triangleouter.cpp \
    Figures/Circle/circle.cpp \
    Figures/Circle/circleouter.cpp

HEADERS += \
    mainwindow.h \
    glfigureswidget.h \
    glprismswidget.h \
    figure_tools.h \
    buttonlist.h \
    Prism/Prism.h \
    Figures/Outer.h \
    Figures/figuresmanager.h \
    Figures/Triangle/triangle.h \
    Figures/Triangle/triangleouter.h \
    Figures/Circle/circle.h \
    Figures/figure.h
    Figures/Circle/circleouter.h

FORMS += \
        mainwindow.ui
