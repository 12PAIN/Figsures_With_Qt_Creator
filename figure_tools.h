#pragma once
#include "figure.h"
#include <vector>

#define TYPE_TRIANGLEPRISM 1
#define TYPE_CYLINDER 0

Figure* createFigure(double,double,double);
Figure* createFigure(double);

Prism* createPrism(double, Figure*, FigureType type);

TrianglePrism* getCastedTrianglePrism(Prism*);
Cylinder* getCastedCylinder(Prism*);
Circle* getCastedCircle(Figure*);
Triangle* getCastedTriangle(Figure*);


class PrismCollection{

private:

    short size = 0;
    std::vector <Prism*> prisms;

public:
    int getSize();
    void AddPrism(Prism*); //Добавление элелемента
    void DelPrism(int); // Удаление по номеру
    Prism* GetPrism(int);  // Получение призмы по номеру

    ~PrismCollection();

};

class FiguresCollection{
private:

    short size = 0;
    std::vector <Figure*> figures;

public:

    int getSize();
    void AddFigure(Figure*); //Добавление элелемента
    void DelFigure(int); // Удаление по номеру
    Figure* GetFigure(int);  // Получение фигуры по номеру

    ~FiguresCollection();
};


