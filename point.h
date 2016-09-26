#ifndef POINT_H
#define POINT_H


class Point
{
public:
    Point();

    void setX(float); // Define o valor da coordenada x do ponto.

    void setY(float); // Define o valor da coordenada y do ponto.

    void setXY(float,float); // Define os valores das coordenadas x e y do ponto.

    float getX(); // Recupera o valor da coordenada x do ponto.

    float getY(); // Recupera o valor da coordenada y do ponto.

    Point add(Point p1); // Soma as coordenadas de um ponto com outro ponto.

    Point sub(Point p1); // Subtrai as coordenadas de um ponto com outro ponto.

    float norma(); // Calcula a norma entre dois pontos.

    void translada(float a, float b); // Translada o ponto somando os valores dados.

    void imprime(); // Imprime as coordenadas do ponto.

protected:

//    void setXVector(float[]);

//    void setXVector(float[]);

    void set_VectorXY(float[], float[]);

private:
    float x, y;
    float p_origem_X;
    float p_origem_Y;
};

#endif // POINT_H
