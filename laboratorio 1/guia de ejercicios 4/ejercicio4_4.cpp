#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo de los n�meros pares.
Ejemplo: 2, 10, 20, 8, 25, 13, 36, -8, -5, 20, 0. Se listar� M�ximo 36.
Ejemplo: 5, -13, 23, 81, -55, -13, 55, 4, 15, -20, 0. Se listar� M�ximo 4.
Ejemplo: -5, -13, -20, -8, -55, -13, -55, -14, -15, -20, 0. Se listar� M�ximo 0

*/

int main() {
    int numero, maximo = 0;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero != 0) {
        if (numero % 2 == 0 && numero > maximo) {
            maximo = numero;
        }

        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    cout << "El maximo par es: " << maximo;

    return 0;
}
