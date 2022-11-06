#include "Prism.h"

Prism::Prism(double newH, Outer* newBase){
    base = newBase->Clone();
    h = newH;
}

Prism::~Prism(){
    delete base;
}

bool Prism::testHeight(){
    if(h > 0) return true;

    return false;
}

std::string Prism::getDataStr(){
    return base->getDataStr();
}

double Prism::getH(){
    return h;
}

double Prism::BaseSpace(){
    return base->getSpace();
}

double Prism::FullSpace(){
    return base->getSpace()*2 + base->getPerimeter()*h;
}

double Prism::Volume(){
    return base->getSpace()*h;
}

std::vector<std::vector<std::vector<double>>> Prism::getPolygons(){
    return base->getPolygonMatrix();
}
