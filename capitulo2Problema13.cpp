#include <iostream>

/**
* Problema 13
* Un teorema de geometria fundamental se refiere a las medidas de los tres lados de
* un triangulo. El teorema establece que la suma de las medidas de los lados de un triangulo
* debe ser tal que la suma de las medidas de dos cualesquiera de los lados sea mayor que
* la medida del tercero. Hacer un programa que determine si 3 numeros cualesquiera pueden ser
* las medidas de los lados de un triangulo.
* 
* Confirmar si los lados forman un triangulo
**/

//@Autor    Jyuls
//@Date     25 Mar  2022
using namespace std;
int main()
{
    int A;
    int B;
    int C;

    cout << "Ingresa el valor del lado A: ";
    cin >> A;

    cout << "Ingresa el valor del lado B: ";
    cin >> B;

    cout << "Ingresa el valor del lado C: ";
    cin >> C;

    if (A + B > C && A + C > B && B + C > A)
    {
        cout << "Triangulo valido";
    }
    else {
        cout << "Triangulo invalido";
    }


    return 0;
}