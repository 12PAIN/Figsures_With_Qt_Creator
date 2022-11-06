
#ifndef TRIANGLEOUTER_H
#define TRIANGLEOUTER_H

#include "Figures/Triangle/triangle.h"
#include "Figures/Outer.h"

class triangleOuter : public Outer{

protected:

public:

    triangleOuter(){init();}
    triangleOuter(double* data);
    ~triangleOuter(){}

    virtual void init();
    virtual Outer* Clone();
    virtual double* getData();
    virtual void createFigure(double*);
    virtual std::vector<std::vector<std::vector<double>>> getPolygonMatrix();
};

#endif // TRIANGLEOUTER_H
