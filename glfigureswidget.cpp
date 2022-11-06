#include "glfigureswidget.h"

#include <iostream>

GLFiguresWidget::GLFiguresWidget(QWidget *parent)
    : QGLWidget{ parent }
{

}

void GLFiguresWidget::initializeGL(){
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    qglClearColor(Qt::white);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glOrtho(0,500,500,0,0,1);
}

void GLFiguresWidget::setFigure(Outer* newFigure){
    currentFigure = newFigure;
}

void GLFiguresWidget::paintGL(){
    if(currentFigure == nullptr) return;

    double scale = scaleKoef*scaleKoef;

    qglClearColor(Qt::white);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    qglColor(Qt::black);
    glBegin(GL_LINES);
        glVertex2d(x_offset, -10);
        glVertex2d(x_offset, 550);
    glEnd();

    glBegin(GL_LINES);
        glVertex2d(-10, y_offset);
        glVertex2d(550, y_offset);
    glEnd();


    std::vector<std::vector<std::vector<double>>> polygons = currentFigure->getPolygonMatrix();

    qglColor(Qt::red);
    glBegin(GL_POLYGON);
    for(int i = 0; i < polygons.size(); i++){
        for(int j = 0; j < polygons[i].size(); j++){
            glVertex2d(scale * polygons[i][j][0] + x_offset, scale * polygons[i][j][1] + y_offset);
        }
    }
    glEnd();

}

void GLFiguresWidget::glDrawIt(){
    glDraw();
}

void GLFiguresWidget::upScale(){
    if(scaleKoef >= 0.2)scaleKoef += 0.2;
    else if(scaleKoef < 0.2 && scaleKoef >= 0.02) scaleKoef += 0.02;
    else resetScale();

}

void GLFiguresWidget::downScale(){
    if(scaleKoef > 0.2) scaleKoef -= 0.2;
    else if(scaleKoef <= 0.2 && scaleKoef > 0.02) scaleKoef -= 0.02;
    else return;
}

void GLFiguresWidget::resetScale(){
    scaleKoef = 1;
}

double GLFiguresWidget::calcX_Offset(){
    return x_offset;
}

double GLFiguresWidget::calcY_Offset(){
    return y_offset;
}

void GLFiguresWidget::addOffsetUp(){
    y_offset-=20;
}

void GLFiguresWidget::addOffsetDown(){
    y_offset+=20;
}

void GLFiguresWidget::addOffsetLeft(){
    x_offset-=20;
}

void GLFiguresWidget::addOffsetRight(){
    x_offset+=20;
}

void GLFiguresWidget::resizeGL(int w, int h){
    glViewport(0,0,w,h);
}
