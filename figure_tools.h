#pragma once
#include <vector>

#include "Figures/Outer.h"
#include "Prism/Prism.h"

Prism* createPrism(double, Outer*);

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
    std::vector <Outer*> figures;

public:

    int getSize();
    void AddFigure(Outer*); //Добавление элелемента
    void DelFigure(int); // Удаление по номеру
    Outer* GetFigure(int);  // Получение фигуры по номеру

    ~FiguresCollection();
};


