#ifndef PRISM_H
#define PRISM_H

#include "Figures/Outer.h"

class Prism{

private:

    double h;
    Outer* base;

public:

    Prism(double, Outer*);
    ~Prism();

    double getH();

    bool testHeight();

    double FullSpace();
    double Volume();
    double BaseSpace();

    std::vector<std::vector<std::vector<double>>> getPolygons();

    std::string getDataStr();
};

#endif //PRISM_H
