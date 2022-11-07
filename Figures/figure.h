#pragma once
#include <math.h>

class Figure{

protected:
    
public:
    virtual double Space() = 0;
    virtual double Perimeter() = 0;
    virtual bool TestMySides() = 0;
};
