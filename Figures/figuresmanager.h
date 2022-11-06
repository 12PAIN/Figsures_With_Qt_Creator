#ifndef FIGURESMANAGER_H
#define FIGURESMANAGER_H

#include "Figures/Triangle/triangleouter.h"
#include "Figures/Circle/circleouter.h"

class FiguresManager{
public:
    FiguresManager();

    std::vector<std::string> getSignList();
    Outer* createFigureObject(int);
};

#endif // FIGURESMANAGER_H
