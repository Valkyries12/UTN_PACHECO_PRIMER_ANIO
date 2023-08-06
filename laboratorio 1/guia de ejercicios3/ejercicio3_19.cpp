#include <iostream>

using namespace std;

/*
Dada una lista de 10 números enteros. Calcular e informar el primer número par, el primer número primo.
*/


int main() {
    int numero, primerPar, primerPrimo;
    bool yaHayPrimo = false, yaHayPar = false, esPrimo = true;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese numero: ";
        cin >> numero;

        if (yaHayPar == false && numero % 2 == 0) {
            yaHayPar = true;
            primerPar = numero;
        }

        if (yaHayPrimo == false) {
            for (int j = 2; j < numero; j++) {
                if (numero % j == 0) {
                    esPrimo = false;
                }
            }
            if (esPrimo) {
                yaHayPrimo = true;
                primerPrimo = numero;
            }
        }
        esPrimo = true;
    }

    cout << "Primer par: " << primerPar << endl;
    cout << "Primer primo: " << primerPrimo << endl;

    return 0;
}
