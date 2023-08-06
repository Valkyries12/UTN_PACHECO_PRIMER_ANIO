#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números y luego informar cuantos de
los números ingresados son primos.

*/

int main() {
    int contPrimo = 0, numero;
    bool esPrimo = false;

    cout << "====== INICIO DEL PROGRAMA ======" << endl;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese numero: ";
        cin >> numero;

        for (int j = 1; j < numero; j++) {
            if (numero % j == 0 && !esPrimo) {
                contPrimo++;
                esPrimo = true;
            }
        }
        esPrimo = false;
    }

    cout << "Hay " << contPrimo << " numeros primos" << endl << endl;
    cout << "====== FIN DEL PROGRAMA ======";

    return 0;
}
