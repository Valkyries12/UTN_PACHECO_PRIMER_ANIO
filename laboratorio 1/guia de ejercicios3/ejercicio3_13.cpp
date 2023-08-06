#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar un n�mero y luego informar todos los divisores de ese n�mero.
Ejemplo 1. Si se ingresa 6 se listar�n: 1, 2, 3 y 6
Ejemplo 2. Si se ingresa 9 se listar�n: 1, 3 y 9.
Ejemplo 3. Si se ingresa 11 se listar�n 1 y 11.

*/


int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 1; i <= numero; i++) {
        if (numero % i == 0) {
            cout << i << endl;
        }
    }
    return 0;
}
