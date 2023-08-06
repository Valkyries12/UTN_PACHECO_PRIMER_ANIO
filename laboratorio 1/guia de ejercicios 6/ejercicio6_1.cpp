#include <iostream>

using namespace std;

/*
Hacer un programa que le pida al usuario una lista de 10 números enteros y luego de ingresarlos muestre cuáles de ellos fueron positivos.
*/

int main() {
    int LONGITUD = 10;
    int numeros[LONGITUD] = {};

    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;

    for (int i = 0; i < LONGITUD; i++) {
        cout << "Ingrese numero para el indice " << i << " :";
        cin >> numeros[i];
    }

    for (int i = 0; i < LONGITUD; i++) {
        if (numeros[i] > 0) {
            cout << numeros[i] << " es positivo" << endl;
        }
    }


    cout << endl << endl << "=== FIN DEL PROGRAMA ===";

    return 0;
}
