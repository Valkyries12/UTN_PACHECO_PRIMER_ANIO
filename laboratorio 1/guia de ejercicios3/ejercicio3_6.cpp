#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar una lista de 10 números, luego informar cuántos son positivos, cuántos son negativos, y cuántos iguales a cero.
*/

int main() {
    int contPositivos = 0, contNegativos = 0, contCero = 0, numero;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero > 0) {
            contPositivos++;
        } else if (numero == 0) {
            contCero++;
        } else {
            contNegativos++;
        }
    }

    cout << "Positivos: " << contPositivos << endl;
    cout << "Negativos: " << contNegativos << endl;
    cout << "Cero: " << contCero << endl;
    return 0;
}
