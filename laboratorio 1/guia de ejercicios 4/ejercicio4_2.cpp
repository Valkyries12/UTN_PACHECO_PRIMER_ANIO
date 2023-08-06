#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar una lista de números que finaliza cuando se ingresa un cero, luego informar el máximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listará Máximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listará Máximo 55.
Ejemplo: -5, -10, -20, -8, -55, -13, -55, -8, -15, -20, 0. Se listará Máximo -5.

*/

int main() {
    int numero, maximo;
    bool yaPaso = false;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero != 0) {
        if (!yaPaso || numero > maximo) {
            yaPaso = true;
            maximo = numero;
        }

        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    cout << "El numero maximo es: " << maximo;
    return 0;
}
