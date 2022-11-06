#ifndef OUTER_H
#define OUTER_H

#include "figure.h"
#include <string>
#include <vector>
#include <cmath>

class Outer{
protected:

    unsigned short id;
    unsigned short countProperties;
    std::string delim;
    std::string* properties;
    std::string name;

    Figure* figure = nullptr;

    //virtual double* deserializeData(std::string);
    virtual std::string getSignature();
    virtual std::string getName();


    virtual void init() = 0;
public:

    //virtual std::string serializeData(double*);
    virtual ~Outer();

    virtual int getId();
    virtual int getCountProperties();
    virtual std::string getDelim();
    virtual std::string getObjectSign();
    virtual std::string getProperties();

    virtual void clearFigure();
    virtual bool testSides();
    virtual double getSpace();
    virtual double getPerimeter();
    virtual double* getData() = 0;

    virtual std::string getDataStr();

    virtual Outer* Clone() = 0;
    virtual void createFigure(double*) = 0;
    virtual std::vector<std::vector<std::vector<double>>> getPolygonMatrix() = 0;

};

#endif // OUTER_H


