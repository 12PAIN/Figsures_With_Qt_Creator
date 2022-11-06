#include "triangle.h"

Triangle::Triangle(double a, double b, double c){
    this->a = a;
    this->b = b;
    this->c = c;
}

bool Triangle::TestMySides(){
    if (a + b > c && a + c > b && b + c > a && a > 0 && b > 0 && c > 0) { return true; }
    else return false;
}

double Triangle::GetA(){
    return a;
}

double Triangle::GetB(){
    return b;
}

double Triangle::GetC(){
    return c;
}

double Triangle::Space(){
    double p = (a+b+c)/2.0;
    return sqrt(p*(p-a)*(p-b)*(p-c));
}

double Triangle::Perimeter(){
    return a+b+c;
}
