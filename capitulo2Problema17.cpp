#include <iostream>

/**
* Problema 17
* Introducir las longitudes de los lados de un triangulo. Determinar si el triangulo es
* isoceles, equilatero o escaleno
* 
* Determinar que tipo de triangulo es
**/

//@Autor    Jyuls
//@Date     25 Mar  2022

using namespace std;

int main()
{
    double a;
    double b;
    double c;

    cout << "Ingresa el valor de A: ";
    cin >> a;

    cout << "Ingresa el valor de B: ";
    cin >> b;

    cout << "Ingresa el valor de C: ";
    cin >> c;

    if (a == b && b == c)
    {
        cout << "Triangulo equilatero";
    }

    if (a != b && a != c && b != c)
    {
        cout << "Triangulo escaleno";
    }

    if ((a == b && b != c) || (a == c && c != b) || (b == c && a != b))
    {
        cout << "Triangulo isoceles";
    }
    return 0;
}