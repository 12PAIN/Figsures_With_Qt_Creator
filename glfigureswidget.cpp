#include "glfigureswidget.h"


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

void GLFiguresWidget::setFigure(Figure* newFigure){
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

    if(currentFigure->getType() == TRIANGLE){

        Triangle* currentTriangle = getCastedTriangle(currentFigure);

        double a = currentTriangle->GetA();
        double b = currentTriangle->GetB();
        double c = currentTriangle->GetC();

        double eqB = -2 * a;
        double eqC = a*a + b*b - c*c;

        double y_0 = -1* (eqC/eqB);

        double d = sqrt(b*b - ((eqC*eqC)/(eqB*eqB)));
        double mult = sqrt((d*d)/(eqB*eqB));

        double ax = eqB*mult;
        double ay = y_0;

        glBegin(GL_LINES);
            glVertex2d(-10, a * scale + y_offset);
            glVertex2d(550, a * scale + y_offset);
        glEnd();

        qglColor(Qt::red);

        glBegin(GL_TRIANGLES);
            glVertex2d(calcX_Offset(),calcY_Offset());
            glVertex2d(ax * scale + calcX_Offset(), ay * scale + calcY_Offset());
            glVertex2d(calcX_Offset(), a * scale + calcY_Offset());
        glEnd();
    }

    if(currentFigure->getType() == CIRCLE){

        glBegin(GL_LINES);
            glVertex2d(-10, y_offset);
            glVertex2d(550, y_offset);
        glEnd();

        Circle* currentCircle = getCastedCircle(currentFigure);

        qglColor(Qt::red);
        glBegin(GL_POLYGON);
            for(int i = 0; i < 1000; i++){
                float theta = 2.0f * 3.1415926f * float(i) / float(1000);//get the current angle
                float x = currentCircle->GetR() * cosf(theta);//calculate the x component
                float y = currentCircle->GetR() * sinf(theta);//calculate the y component

                glVertex2d(x * scale + calcX_Offset(), y * scale + calcY_Offset());
            }
        glEnd();
    }


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
