#include "point.h"
#include <math.h>
#include <iostream>

using namespace std;

Point::Point()
{
    p_origem_X = 10;
    p_origem_Y = 10;
}

void Point::setX(float x_)
{
    x = x_;
}

void Point::setY(float y_)
{
    y =y_;
}

void Point::setXY(float x_, float y_)
{
    x = x_;
    y = y_;
}

float Point::getX()
{
    return x;
}

float Point::getY()
{
    return y;
}

Point Point::add(Point p1)
{
    Point pfinal;
    pfinal.setX(x+p1.getX());
    pfinal.setY(y+p1.getY());
    return pfinal;
}

Point Point::sub(Point p1)
{
    Point pfinal;
    pfinal.setX(x-p1.getX());
    pfinal.setY(y-p1.getY());
    return pfinal;
}

float Point::norma()
{
    float r_norm;
    r_norm = sqrt(pow(p_origem_X - x, 2) + pow(p_origem_Y - y, 2) );
    return r_norm;
}

void Point::translada(float a, float b)
{
    x = x+a;
    y = y+b;
}

void Point::imprime()
{

    cout << "(" <<  x << "," << y << ")" << endl;
}
