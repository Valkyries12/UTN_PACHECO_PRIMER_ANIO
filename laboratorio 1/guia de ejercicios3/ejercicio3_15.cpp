#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar un n�mero positivo y calcular e informar si el mismo es un n�mero primero.
 Recordar que un n�mero primo es un n�mero natural que tiene exactamente dos divisores.
*/


int main() {
    string mensaje = "es primo";
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    for (int i = 2; i < numero; i++) {
        if (numero % i == 0) {
            mensaje = "no es primo";
        }
    }

    cout << numero << " " << mensaje;
    return 0;
}
