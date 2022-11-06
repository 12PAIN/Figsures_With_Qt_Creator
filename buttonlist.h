#ifndef BUTTONLIST_H
#define BUTTONLIST_H

#include <QPushButton>
#include "mainwindow.h"
#include "ui_mainwindow.h"

class ButtonList : public QPushButton
{
public:
    explicit ButtonList(QWidget *parent = 0, std::string text = "", int id = -1);
    ~ButtonList();
    int getID();
    int setID(int);

private:
    int id = 0;
};

#endif // BUTTONLIST_H
