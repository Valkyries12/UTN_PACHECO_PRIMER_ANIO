#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar una lista de 8 números y luego informar si todos están ordenados en forma creciente. En caso de haber dos números “empatados” considerarlos como crecientes.
Por ejemplo si la lista fuera:
Ejemplo 1: -10, 1, 5, 7, 15, 18, 20, 23 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 2: 10, 10, 15, 20, 25, 25, 28, 33 se emitirá un cartel: “Conjunto Ordenado”
Ejemplo 3: 10, 1, 15, 7, -15, 18, 20, 23 se emitirá un cartel: “Conjunto No Ordenado”

*/

int main() {
    string mensaje = "esta ordenado";
    int numero, anterior, actual;

    for (int i = 0; i < 8; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (i == 0) {
            anterior = numero;
            actual = numero;
        } else {
            anterior = actual;
            actual = numero;

            if (anterior >= actual) {
                mensaje = "esta desordenado";
            }
        }

    }

    cout << mensaje;
    return 0;
}
