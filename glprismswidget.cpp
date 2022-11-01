#include "GLPrismsWidget.h"


GLPrismsWidget::GLPrismsWidget(QWidget *parent)
    : QGLWidget{ parent }
{

}

void GLPrismsWidget::initializeGL(){

}

void GLPrismsWidget::setPrism(Prism* newPrism){
    currentPrism = newPrism;
}

void GLPrismsWidget::paintGL(){

    if(currentPrism == nullptr) return;

    //if(currentPrism->getType() != CIRCLE) return;
    qglClearColor(Qt::white);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    resizeGL(500,500);

    qglColor(Qt::red);

    double scale = scaleKoef*scaleKoef;

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();

    qglColor(Qt::gray);
    glBegin(GL_LINES);

        for(float i = -1000; i < 1000; i += 0.5){
            glVertex3d(i,0,-1000);
            glVertex3d(i,0,1000);
        }

    glEnd();

    if(currentPrism->getType() == TRIANGLE){
        TrianglePrism* prism = getCastedTrianglePrism(currentPrism);

        double a = prism->GetA() * scale;
        double b = prism->GetB() * scale;
        double c = prism->GetC() * scale;
        double height = prism->GetH() * scale;

        double eqB = -2 * a;
        double eqC = a*a + b*b - c*c;

        double z_0 = -1* (eqC/eqB);

        double d = sqrt(b*b - ((eqC*eqC)/(eqB*eqB)));
        double mult = sqrt((d*d)/(eqB*eqB));

        double ax = eqB*mult;
        double az = z_0;

        qglColor(Qt::red);

        glBegin(GL_TRIANGLES);
            glVertex3d(0,0,0);
            glVertex3d(0,0,a);
            glVertex3d(ax,0,az);
        glEnd();

        glBegin(GL_QUADS);

            glVertex3d(0,0,0);
            qglColor(Qt::green);
            glVertex3d(0,height,0);
            glVertex3d(0,height,a);
            qglColor(Qt::red);
            glVertex3d(0,0,a);


            glVertex3d(ax,0,az);
            qglColor(Qt::green);
            glVertex3d(ax,height,az);
            glVertex3d(0,height,0);
            qglColor(Qt::red);
            glVertex3d(0,0,0);

            glVertex3d(ax, 0, az);
            qglColor(Qt::green);
            glVertex3d(ax,height, az);
            glVertex3d(0,height,a);
            qglColor(Qt::red);
            glVertex3d(0,0,a);


        glEnd();

        qglColor(Qt::green);
        glBegin(GL_TRIANGLES);
            glVertex3d(0,height,0);
            glVertex3d(0,height,a);
            glVertex3d(ax,height,az);
        glEnd();

    }

    if(currentPrism->getType() == CIRCLE){

        double angle = 0.0;
        double angle_stepsize = 0.1;

        Cylinder* cyl = getCastedCylinder(currentPrism);

        double radius = cyl->GetR() * scale;
        double height = cyl->GetH() * scale;

        qglColor(Qt::red);
        glBegin(GL_QUAD_STRIP);

            while( angle < 2*M_PI ) {
                double x = radius * cos(angle); //first 1
                double z = radius * sin(angle); //first 0

                qglColor(Qt::green);
                glVertex3d(x,0,z);
                qglColor(Qt::blue);
                glVertex3d(x,height,z);

                angle = angle + angle_stepsize;
            }

            qglColor(Qt::green);
            glVertex3d(radius,0,0);
            qglColor(Qt::blue);
            glVertex3d(radius,height,0);

        glEnd();

        qglColor(Qt::green);
        glBegin(GL_POLYGON);

            for(int i = 0; i < 1000; i++){
                float theta = 2.0f * 3.1415926f * float(i) / float(1000);//get the current angle
                float x = radius * cosf(theta);//calculate the x component
                float z = radius * sinf(theta);//calculate the y component

                glVertex3d(x, 0, z);
            }

        glEnd();

        qglColor(Qt::blue);
        glBegin(GL_POLYGON);

            for(int i = 0; i < 1000; i++){
                float theta = 2.0f * 3.1415926f * float(i) / float(1000);//get the current angle
                float x = radius * cosf(theta);//calculate the x component
                float z = radius * sinf(theta);//calculate the y component

                glVertex3d(x, height, z);
            }

        glEnd();

    }
}

void GLPrismsWidget::glDrawIt(){
    glDraw();
}

void GLPrismsWidget::upScale(){
    if(scaleKoef >= 0.2)scaleKoef += 0.2;
    else if(scaleKoef < 0.2 && scaleKoef >= 0.02) scaleKoef += 0.02;
    else scaleKoef = 1;
}

void GLPrismsWidget::downScale(){
    if(scaleKoef > 0.2) scaleKoef -= 0.2;
    else if(scaleKoef <= 0.2 && scaleKoef > 0.02) scaleKoef -= 0.02;
    else return;
}

double GLPrismsWidget::calcX_Offset(){
    return x_offset;
}

double GLPrismsWidget::calcY_Offset(){
    return y_offset;
}

double GLPrismsWidget::calcZ_Offset(){
    return z_offset;
}

void GLPrismsWidget::addOffsetUp(){
    y_offset-=1;
}

void GLPrismsWidget::addOffsetDown(){
    y_offset+=1;
}

void GLPrismsWidget::addOffsetLeft(){
    x_offset+=1;
}

void GLPrismsWidget::addOffsetRight(){
    x_offset-=1;
}

void GLPrismsWidget::addOffsetForward(){
    z_offset+=1;
}

void GLPrismsWidget::addOffsetBackward(){
    z_offset-=1;
}

void GLPrismsWidget::rotateUp(){
    x_rotate += 10;
}

void GLPrismsWidget::rotateDown(){
    x_rotate -= 10;
}

void GLPrismsWidget::rotateLeft(){
    y_rotate += 10;
}

void GLPrismsWidget::rotateRight(){
    y_rotate -= 10;
}

void GLPrismsWidget::resizeGL(int w, int h){
    glViewport(0,0,w,h);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    glFrustum(-1,1,-1,1,0.7,1000);
    glTranslatef(x_offset,y_offset,z_offset);
    glRotated(x_rotate,1.0,0,0);
    glRotated(y_rotate,0,1.0,0);
    glEnable(GL_DEPTH_TEST);
    glDepthFunc(GL_LESS);
    //glClearDepth(1.0f);
}
