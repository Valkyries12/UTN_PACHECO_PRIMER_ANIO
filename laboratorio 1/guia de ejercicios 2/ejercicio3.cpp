#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar por teclado un número y luego informar por pantalla con un cartel aclaratorio si el mismo es par o impar.
*/


int main() {
    int numero;
    string mensaje;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero % 2 == 0) {
        mensaje = "es par";
    } else {
        mensaje = "es impar";
    }

    cout << mensaje;

    return 0;
}
