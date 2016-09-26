#include "poligono.h"
#include "point.h"
#include <iostream>
#include <math.h>

using namespace std;

Poligono::Poligono()
{

}

void Poligono::inserir_Vertice(float n)
{
    Point p;
    float i, j;

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            p.set_VectorXY(i,j);
        };
    };
}

float Poligono::Qtd_Vertices (float n)
{
    return n-1;
}

float Poligono::Area_Poligono(float area)
{

}
