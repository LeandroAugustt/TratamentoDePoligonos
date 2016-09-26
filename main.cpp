#include <QCoreApplication>
#include <iostream>
#include <math.h>
#include <point.h>
#include <poligono.h>

using namespace std;

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv); 
    Point b = Point(); // variavel criada do tipo point(ponto).
    Point c = Point(); // variavel criada do tipo point(ponto).
    Point d = Point(); // variavel criada do tipo point(ponto) para guardar a soma dos pontos anteriores.

    Poligono p1 = Poligono();

    b.setXY(5,5);  // valores setados diretamente no argumento.
    c.setXY(10,10); // valores setados diretamente no argumento.

    cout << "valores de b:" << endl;

    cout << b.getX() << endl;
    cout << b.getY() << endl;

    cout << "valores de c:" << endl;

    cout << c.getX() << endl;
    cout << c.getY() << endl;

    cout << "valores de soma dos pontos b + c:" << endl;

    d = c.add(b);

    cout << d.getX() << endl;
    cout << d.getY() << endl;

    cout << "valores de subtração dos pontos b - c:" << endl;

    d = c.sub(b);

    cout << d.getX() << endl;
    cout << d.getY() << endl;

    cout << "valores da norma de b:" << endl;

    cout << b.norma() << endl;

    cout << "valores da norma de c:" << endl;

    cout << c.norma() << endl;

    cout << "imprimir valor do translado de b:" << endl;

    b.translada(-50,-50); // setado o valor do translado diretamente no argumento da função.
    b.imprime();

    cout << "imprimir valor do translado de c:" << endl;

    c.translada(-50,-50); // setado o valor do translado diretamente no argumento da função.
    c.imprime();

    return a.exec();
}
