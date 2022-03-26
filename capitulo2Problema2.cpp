#include <iostream>

/**
* Problema 2
* Dada una medida angular mayor que 0 pero menor que 180, clasificar el angulo
* como obtuso, recto o agudo.
* 
* Que tipo de angulo es?
**/

//@Autor    Jyuls
//@Date     25 Mar  2022
using namespace std;
int main() {
    int A;

    cout << "Ingresa el valor del angulo: ";
    cin >> A;

    switch (A)
    {   
        case 1 ... 89:
            cout << "Angulo agudo";
        break;

        case 90:
            cout << "Angulo recto";
        break;

        case 91 ... 180:
            cout << "Angulo obtuso";
        break;

        default: 
            cout << "Ingresa un valor valido";

    }

    return 0;
}
