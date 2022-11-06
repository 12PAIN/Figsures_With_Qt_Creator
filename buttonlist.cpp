#include "buttonlist.h"

ButtonList::ButtonList(QWidget *parent, std::string text, int id) :
    QPushButton(parent)
{
    this->setText(QString::fromStdString(text));
    this->setID(id);
}

ButtonList::~ButtonList()
{

}

/* Метод для возврата значения номера кнопки
 * */
int ButtonList::getID(){
    return id;
}

int ButtonList::setID(int id){
    this->id = id;
}
