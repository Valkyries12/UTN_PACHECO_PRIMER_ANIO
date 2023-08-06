#include <iostream>

using namespace std;

/*
Dada una lista de 7 números informar cual es el primer y segundo número impar ingresado.
Ejemplo: 8, 4, 5, 6, -9, 5,7 se informa 5 y -9.

*/


int main() {
    int contImpar = 0, numero;

    for (int i = 0; i < 7; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero % 2 != 0) {
            contImpar++;

            if (contImpar < 3) {
                cout << numero << endl;
            }
        }
    }
    return 0;
}
