#include "poligono.h"
#include "point.h"
#include <iostream>
#include <math.h>
#include <vector.h>

using namespace std;

Poligono::Poligono()
{

}

void Poligono::inserir_Vertice(float n)
{
    vector Point p;
    float i, j;

    for (i=0; i<n; i++){
        for (j=0; j<n; j++){
            p.setX(i);
            p.setY(j);
        };
    };
}

float Poligono::Qtd_Vertices (float n)
{
    return n-1;
}

float Poligono::Area_Poligono(float area)
{
    // calculando a area do poligono - ((formaula geral) : (numero de lados * lado * apotema)/2 )
    // calculando a apotema: para calcular a apotema temos que encontrar o centro do poligono
    // apotema: distância do centro do poligono até o ponto medio de um dos lados(medade de um dos lados)
}
