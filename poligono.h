#ifndef POLIGONO_H
#define POLIGONO_H


class Poligono
{
public:
    Poligono();

    void inserir_Vertice (float); // Inseri os vertices do poligono.

    float Qtd_Vertices (float n); // Calcula a quantidade de vertices.

    float Area_Poligono (float); // Calcula a area do poligono.

    void Translada_Poligono (float, float); // Translada o poligono para (+a, +b).

    void Rotacionar_Poligono (); // Rotaciona o poligono em "O" graus.

    void Imprimir_Poligono (); // Imprime os valores do poligono.

private:
    float x, y;
};

#endif // POLIGONO_H
