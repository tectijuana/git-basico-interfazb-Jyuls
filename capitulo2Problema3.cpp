#include <iostream>

/**
* Problema 3
* Introducir D, los grados de un angulo agudo y calcular la medida de su complemento y suplemento
* 
* Cual es el complemento y suplemento?
**/

//@Autor    Jyuls
//@Date     25 Mar  2022
using namespace std;
int main() {
    int A;

    cout << "Ingresa el valor de A: ";
    cin >> A;

    cout << "\nAngulo complementario: " << (90 - A);
    cout << "\nAngulo suplementario: " << (180 - A);

    return 0;
}