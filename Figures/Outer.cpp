#include "Outer.h"

bool Outer::testSides(){
    if(figure != nullptr) return figure->TestMySides();
    else return false;
}

std::string Outer::getObjectSign(){
    std::string objSign = "";

    objSign += std::to_string(id) + delim + name;

    return objSign;
}

int Outer::getId(){
    return id;
}

int Outer::getCountProperties(){
    return countProperties;
}

std::string Outer::getDelim(){
    return delim;
}

void Outer::clearFigure(){
    if(figure != nullptr) delete figure;
}

std::string Outer::getSignature(){
    std::string sign = "";

    sign += std::to_string(getId()) + getDelim() + std::to_string(countProperties) + getDelim();

    return sign;
}

std::string Outer::getProperties(){

    std::string objectProperties = "";

    objectProperties += getSignature();

    for(int i = 0; i < countProperties; i++){
        objectProperties+= properties[i];
        if(i != countProperties -1) objectProperties += getDelim();
    }

    return objectProperties;
}

std::string Outer::getName(){
    return name;
}

Outer::~Outer(){
    if(figure != nullptr) delete figure;
    if(this->properties != nullptr) delete[] properties;
}

/*
double* Outer::deserializeData(std::string strData){
    double* data;

    std::string str = strData;

    int id, count;

    id = std::stoi(str.substr(0, str.find(getDelim())).c_str());

    if(id != getId()) return nullptr;

    str = str.erase(0, str.find(getDelim())+1);

    count = std::stoi(str.substr(0, str.find(getDelim())).c_str());

    if(count != countProperties) return nullptr;

    str = str.erase(0, str.find(getDelim())+1);

    data = new double[count];

    for(int i = 0; i < count; i++){
        data[i] = std::stod(str.substr(0, str.find(getDelim())).c_str());
        str = str.erase(0, str.find(getDelim())+1);
    }

    return data;
}

std::string Outer::serializeData(double* data){

    std::string dataStr = "";

    dataStr += getSignature();

    for(int i = 0; i < countProperties; i++){
        dataStr += std::to_string(data[i]);
        if(i != getCountProperties() -1) dataStr += getDelim();
    }

    delete[] data;

    return dataStr;
}
*/

double Outer::getSpace(){
    if(figure == nullptr) return 0;

    return figure->Space();
}

double Outer::getPerimeter(){
    if(figure == nullptr) return 0;

    return figure->Perimeter();
}

std::string Outer::getDataStr(){

    if(figure == nullptr) return "";

    std::string dataStr = "";

    double* data = getData();

    dataStr += getName() + " ";

    for(int i = 0; i < countProperties; i++){
        dataStr+= properties[i] + ": " + std::to_string(data[i]) + " ";
    }

    return dataStr;
}


