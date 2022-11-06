#ifndef CIRCLEOUTER_H
#define CIRCLEOUTER_H

#include "Figures/Circle/circle.h"
#include "Figures/Outer.h"

class circleouter : public Outer
{
public:
    circleouter(){init();}
    circleouter(double* data);
    ~circleouter(){}

    virtual void init();
    virtual Outer* Clone();
    virtual double* getData();
    virtual void createFigure(double*);
    virtual std::vector<std::vector<std::vector<double>>> getPolygonMatrix();
};

#endif // CIRCLEOUTER_H
