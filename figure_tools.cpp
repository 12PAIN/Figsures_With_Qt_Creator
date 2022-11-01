#include "figure_tools.h"

Figure* createFigure(double a, double b, double c){
    return new Triangle(a,b,c); 
}

Figure* createFigure(double R){
    return new Circle(R);
}

Prism* createPrism(double h, Figure* base, FigureType type){
    if(type == CIRCLE){

        return new Cylinder(h, base);

    }
    else if(type == TRIANGLE){

        return new TrianglePrism(h,base);

    }

}

TrianglePrism* getCastedTrianglePrism(Prism* objPrism){
    return static_cast<TrianglePrism*>(objPrism);
}

Cylinder* getCastedCylinder(Prism* objPrism){
    return static_cast<Cylinder*>(objPrism);
}

Circle* getCastedCircle(Figure* objFig){
    return static_cast<Circle*>(objFig);
}

Triangle* getCastedTriangle(Figure* objFig){
    return static_cast<Triangle*>(objFig);
}

//Коллекция призм

Prism* PrismCollection::GetPrism(int n){
    if(prisms.empty()) return nullptr;
    return prisms[n];
}

void PrismCollection::AddPrism(Prism* newPrism){
    this->prisms.push_back(newPrism);
    this->size = prisms.size();
}

void PrismCollection::DelPrism(int n){
    if(prisms.empty()) return;
    std::vector<Prism*>::iterator it = prisms.begin();

    while(*it != prisms[n]){
        it++;
    }

    delete prisms[n];

    this->prisms.erase(it);

    this->size--;
}

PrismCollection::~PrismCollection(){
    if(prisms.empty()) return;

    for(int i = 0; i < size; i++){
        delete prisms[i];
    }

    this->prisms.clear();
    this->prisms.shrink_to_fit();
}

int PrismCollection::getSize(){
    return size;
}

//Коллекция фигур

int FiguresCollection::getSize(){
    return size;
}

Figure* FiguresCollection::GetFigure(int n){
    if(figures.empty()) return nullptr;
    return this->figures[n];
}

void FiguresCollection::AddFigure(Figure* newFigure){
    this->figures.push_back(newFigure);
    this->size++;
}

void FiguresCollection::DelFigure(int n){
    if(figures.empty()) return;
    std::vector<Figure*>::iterator it = figures.begin();

    while(*it != figures[n]){
        it++;
    }

    delete figures[n];

    this->figures.erase(it);

    this->size--;
}

FiguresCollection::~FiguresCollection(){
    if(figures.empty()) return;

    std::vector<Figure*>::iterator it = figures.begin();

    for(int i = 0; i < size; i++){
        delete figures[i];
    }

    this->figures.clear();
    this->figures.shrink_to_fit();
}
