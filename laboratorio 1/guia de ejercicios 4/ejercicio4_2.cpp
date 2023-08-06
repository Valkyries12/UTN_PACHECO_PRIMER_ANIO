#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo 35.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo 55.
Ejemplo: -5, -10, -20, -8, -55, -13, -55, -8, -15, -20, 0. Se listar� M�ximo -5.

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
