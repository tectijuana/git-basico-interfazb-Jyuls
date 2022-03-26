#include <iostream>

/**
* Problema 19
* Introducir las longitudes de los lados de un triangulo. Encontrar el perimetro
* 
* Encontrar el perimetro de un triangulo
**/

//@Autor    Jyuls
//@Date     25 Mar  2022
using namespace std;

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

    cout << "Ingresa el valor de C: ";
    cin >> c;

    perimetro = a + b + c;

    cout << "El perimetro es: " << perimetro;
    return 0;
}