//
//  shapes.h
//  interpolation
//
//  Created by Jose Maria Benito on 28/10/14.
//  Copyright (c) 2014 Jose Maria. All rights reserved.
//

#ifndef interpolation_shapes_h
#define interpolation_shapes_h

#include "GLInclude.h"
#include <vector>


void drawDot(VECTOR3D position, float sradius = 1, COLOUR color = grey)
{
    glPushMatrix();
    glTranslatef(position.x, position.y, position.z);

    
    VECTOR3D p[4],n[4];
    int STEP = 30;
    for (int i=0;i<360;i+=STEP) {
        for (int j=-90;j<90;j+=STEP) {
            
            p[0].x = sradius * cos(j*DTOR) * cos(i*DTOR);
            p[0].y = sradius * sin(j*DTOR);
            p[0].z = sradius * cos(j*DTOR) * sin(i*DTOR);
            n[0] = p[0];
            
            p[1].x = sradius * cos((j+STEP)*DTOR) * cos(i*DTOR);
            p[1].y = sradius * sin((j+STEP)*DTOR);
            p[1].z = sradius * cos((j+STEP)*DTOR) * sin(i*DTOR);
            n[1] = p[1];
            
            p[2].x = sradius * cos((j+STEP)*DTOR) * cos((i+STEP)*DTOR);
            p[2].y = sradius * sin((j+STEP)*DTOR);
            p[2].z = sradius * cos((j+STEP)*DTOR) * sin((i+STEP)*DTOR);
            n[2] = p[2];
            
            p[3].x = sradius * cos(j*DTOR) * cos((i+STEP)*DTOR);
            p[3].y = sradius * sin(j*DTOR);
            p[3].z = sradius * cos(j*DTOR) * sin((i+STEP)*DTOR);
            n[3] = p[3];
            
            glBegin(GL_POLYGON);
            if (i % (STEP*4) == 0)
                glColor3f(color.r,color.g,color.b);
            else
                glColor3f(color.r*0.5,color.g*0.5,color.b*0.5);
            for (int k=0;k<4;k++) {
                glNormal3f(n[k].x,n[k].y,n[k].z);
                glVertex3f(p[k].x,p[k].y,p[k].z);
            }
            glEnd();
        }
    }
    
    glPopMatrix();
}

typedef struct {
    std::vector<VECTOR3D> P;
} LINE;


void drawLine(LINE line, COLOUR color = grey, bool doDrawDots = false)
{
    glColor3f(color.r, color.g, color.b);
    // usa GL_LINE_STRIP en modo inmediato (glBegin/glEnd) 
    // enviar puntos a OpenGL usando glVertex3f
    glBegin(GL_LINE_STRIP);    
        for (unsigned int i = 0; i < line.P.size(); i++)
        {
            glVertex3f(line.P[i].x, line.P[i].y, line.P[i].z);
        }
    glEnd();
}


 void drawAxis()
{
    VECTOR3D reset;
    VECTOR3D verticeX;
    VECTOR3D verticeY;
    VECTOR3D verticeZ;
    LINE ejeX;
    LINE ejeY;
    LINE ejeZ;
    reset.x = 0;
    reset.y = 0;
    reset.z = 0;

    ejeX.P.push_back(reset);
    ejeY.P.push_back(reset);
    ejeZ.P.push_back(reset);

    verticeX.x = 5; 
    verticeX.y = 0; 
    verticeX.z = 0;

    verticeY.x = 0; 
    verticeY.y = 5; 
    verticeY.z = 0;

    verticeZ.x = 0; 
    verticeZ.y = 0;
    verticeZ.z = 5;

    ejeX.P.push_back(verticeX);
    ejeY.P.push_back(verticeY);
    ejeZ.P.push_back(verticeZ);
   
    drawLine(ejeX, red);
    drawLine(ejeY, green);
    drawLine(ejeZ, blue);

}



#endif
