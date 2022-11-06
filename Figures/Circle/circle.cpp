#include "circle.h"
#include <cmath>

circle::circle(double r)
{
    this->r = r;
}

bool circle::TestMySides(){
    if(r > 0) return true;

    return false;
}

double circle::GetR(){
    return r;
}

double circle::Perimeter(){
    return 2*M_PI*r;
}

double circle::Space(){
    return M_PI*r*r;
}
