#include "triangleouter.h"

Outer* triangleOuter::Clone(){
    if(figure != nullptr) return new triangleOuter(getData());

    return nullptr;
}

triangleOuter::triangleOuter(double *data){
    init();
    createFigure(data);
    delete[] data;
}

void triangleOuter::init(){
    id = 1;
    delim = ";";
    countProperties = 3;
    properties = new std::string[countProperties];

    name = "Треугольник";

    properties[0] = "A";
    properties[1] = "B";
    properties[2] = "C";
}

void triangleOuter::createFigure(double* data){
    figure = new Triangle(data[0], data[1], data[2]);

    delete[] data;
}

double* triangleOuter::getData(){
    if(figure == nullptr) return nullptr;
    double* data = new double[countProperties];

    Triangle* triangle = static_cast<Triangle*>(figure);

    data[0] = triangle->GetA();
    data[1] = triangle->GetB();
    data[2] = triangle->GetC();

    return data;
}

std::vector<std::vector<std::vector<double>>> triangleOuter::getPolygonMatrix(){

    double* data = getData();

    std::vector<std::vector<std::vector<double>>> nullVector;

    if(data == nullptr) return nullVector;

    double a = data[0];
    double b = data[1];
    double c = data[2];

    delete[] data;

    double eqB = -2 * a;
    double eqC = a*a + b*b - c*c;

    double y_0 = -1* (eqC/eqB);

    double d = sqrt(b*b - ((eqC*eqC)/(eqB*eqB)));
    double mult = sqrt((d*d)/(eqB*eqB));

    double ax = eqB*mult;
    double ay = y_0;

    //First index - index of polygon!
    //Second index - index of point
    //Third index - 0 for x, 1 for y of point;



    std::vector<std::vector<double>> polygon{
        {0,0},
        {0,a},
        {ax, ay}
    };

    std::vector<std::vector<std::vector<double>>> polygonMatrix{
        {polygon}
    };

    return polygonMatrix;
}
