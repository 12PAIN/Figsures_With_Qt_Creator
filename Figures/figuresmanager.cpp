#include "figuresmanager.h"

FiguresManager::FiguresManager()
{

}

std::vector<std::string> FiguresManager::getSignList(){
    std::vector<std::string> signatures;

    Outer* outer;

    ///Добавление класса треугольника
    outer = new triangleOuter();
    signatures.push_back(outer->getDelim() + outer->getObjectSign());
    delete outer;

    //Добавление класса круга
    outer = new circleouter();
    signatures.push_back(outer->getDelim() + outer->getObjectSign());
    delete outer;

    ///ДОБАВЛЯТЬ СЮДА





    /////////////////


    return signatures;
}

Outer* FiguresManager::createFigureObject(int id){
    //добавление создания треугольника
    if(id == 1) return new triangleOuter();
    if(id == 2) return new circleouter();

    //Добавлять сюда

    return nullptr;
}
