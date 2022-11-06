#include "circleouter.h"

Outer* circleouter::Clone(){
    if(figure != nullptr) return new circleouter(getData());

    return nullptr;
}

circleouter::circleouter(double *data){
    init();
    createFigure(data);
    delete[] data;
}

void circleouter::init(){
    id = 2;
    delim = ";";
    countProperties = 1;
    properties = new std::string[countProperties];

    name = "Круг";

    properties[0] = "Радиус";
}

void circleouter::createFigure(double* data){
    figure = new circle(data[0]);

    delete[] data;
}

double* circleouter::getData(){
    if(figure == nullptr) return nullptr;

    double* data = new double[countProperties];

    circle* Circle = static_cast<circle*>(figure);

    data[0] = Circle->GetR();

    return data;
}

std::vector<std::vector<std::vector<double>>> circleouter::getPolygonMatrix(){

    double* data = getData();

    std::vector<std::vector<std::vector<double>>> nullVector;

    if(data == nullptr) return nullVector;

    double r = data[0];

    delete[] data;

    /*
    for(int i = 0; i < 1000; i++){
         float theta = 2.0f * 3.1415926f * float(i) / float(1000);//get the current angle
         float x = currentCircle->GetR() * cosf(theta);//calculate the x component
         float y = currentCircle->GetR() * sinf(theta);//calculate the y component

         glVertex2d(x * scale + calcX_Offset(), y * scale + calcY_Offset());
    }
    */


    std::vector<std::vector<std::vector<double>>> polygons;

    std::vector<std::vector<double>> points;

    for(int i = 0; i < 360; i++){
        double theta = 2.0 * M_PI * double(i) / double(360);
        double x = r * cos(theta);
        double y = r * sin(theta);

        std::vector<double> pointCords = {x,y};

        points.push_back(pointCords);

    }

    polygons.push_back(points);

    return polygons;
}
