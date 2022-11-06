#ifndef CIRCLE_H
#define CIRCLE_H


#include <Figures/figure.h>

class circle : public Figure{

private:
    double r;

public:
    circle(double);

    bool TestMySides();

    double GetR();

    double Perimeter();
    double Space();
};

#endif // CIRCLE_H
