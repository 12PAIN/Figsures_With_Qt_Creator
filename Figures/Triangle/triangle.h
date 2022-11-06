#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "Figures/figure.h"

class Triangle : public Figure{

private:
    double a;
    double b;
    double c;

public:
    Triangle(double,double,double);

    bool TestMySides();

    double GetA();
    double GetB();
    double GetC();

    double Perimeter();
    double Space();
};
#endif // TRIANGLE_H
