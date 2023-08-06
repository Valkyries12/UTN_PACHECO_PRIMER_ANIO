#include <iostream>

using namespace std;

/*
Hacer un programa que muestre los números primos entre el 1 y el 10000.
El usuario no debe ingresar nada en este programa.
*/

int main() {
    int numero;
    bool esPrimo = true;


    for (int i = 1; i <= 1000; i++) {

        /*if (i == 1 || i == 2) {
            cout << i << endl;
        }*/

        for (int j = 2; j < i && i > 2; j++) {
            if (i % j == 0) {
                esPrimo = false;
            }
        }

        if (esPrimo) {
            cout << i << endl;
        }
        esPrimo = true;
    }

    return 0;
}


