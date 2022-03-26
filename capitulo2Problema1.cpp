#include <iostream>

/**
* Problema 1
* Dados los angulos A, B, y C, de un triangulo, encontrar los
* tres angulos a, b y c. Suponer que todos los angulos son agudos.
* 
* Cuales son los angulos de un triangulo?
**/

//@Autor    Jyuls
//@Date     25 Mar  2022
using namespace std;
int main() {
    int A;
    int B;
    int C;

    cout << "Ingresa el valor de A: ";
    cin >> A;

    cout << "Ingresa el valor de B: ";
    cin >> B;

    cout << "Ingresa el valor de C: ";
    cin >> C;

    cout << "\nIngresa el valor de a: " << (180 - A);
    cout << "\nIngresa el valor de b: " << (180 - B);
    cout << "\nIngresa el valor de c: " << (180 - C);

    return 0;
}