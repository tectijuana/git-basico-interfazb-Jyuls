#include <iostream>

/**
* Problema 16
* Dados los tres lados de cualquier triangulo ABC, calcular e imprimir el area de 
* ese triangulo
* 
* Encontrar el area de un triangulo
**/

//@Autor    Jyuls
//@Date     25 Mar  2022
using namespace std;
int main()
{
    double base;
    double altura;

    cout << "Ingresa el valor de la base: ";
    cin >> base;

    cout << "Ingresa el valor de la altura: ";
    cin >> altura;

    cout << "El area es: " << (base * altura) / 2;

    return 0;
}