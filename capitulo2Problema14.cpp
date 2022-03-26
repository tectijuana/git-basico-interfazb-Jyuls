#include <iostream>

/**
* Problema 14
* Introducir 3 numeros positivos X, Y y Z. Determinar si pueden ser las longitudes
* de los lados de un triangulo recto
* 
* Los valores, forman un triangulo recto?
**/

//@Autor    Jyuls
//@Date     25 Mar  2022
using namespace std;
int main()
{
    int X;
    int Y;
    int Z;

    cout << "Ingresa el valor de X: ";
    cin >> X;

    cout << "Ingresa el valor de Y: ";
    cin >> Y;

    cout << "Ingresa el valor de Z: ";
    cin >> Z;

    if ((X * X) + (Y * Y) == (Z * Z))
    {
        cout << "Triangulo valido";
    }
    else {
        cout << "Triangulo invalido";
    }
    return 0;
}
