#include <iostream>
#include <math.h>

/**
* Problema 18
* Introducir las longitudes de los catetos de un triangulo rectangulo y calcular el perimetro.
* 
* Calcular el perimetro con los lados de un triangulo rectangulo
**/

//@Autor    Jyuls
//@Date     25 Mar  2022

using namespace std;

double calculos(double A, double B
{
    C = sqrt((pow(A, 2)) + ((pow(B, 2))));
    return A + B + C;
}

int main()
{
    double a;
    double b;
    double c;

    double perimetro;

    cout << "Ingresa el valor de A: ";
    cin >> a;

    cout << "Ingresa el valor de B: ";
    cin >> b;

    perimetro = calculos(a,b);

    cout << "El perimetro es: " << perimetro;
    return 0;
}