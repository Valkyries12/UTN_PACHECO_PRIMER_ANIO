#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar una lista de n�meros que finaliza cuando se ingresa un cero, luego informar el m�ximo y la posici�n dentro de la lista.
Ejemplo: 5, 10, 20, 8, 25, 13, 35, -8, -5, 20, 0. Se listar� M�ximo: 35 - Posici�n: 7.
Ejemplo: 5, 10, 20, 8, 55, 13, 55, -8, -5, 20, 0. Se listar� M�ximo: 55 - Posici�n: 5.
Ejemplo: -5, -10, -20, -8, -55, -400, -15, -20, 0. Se listar� M�ximo: -5 - Posici�n: 1.

*/

int main() {
    int numero, posicion, maximo, contador = 0;
    bool yaPaso = false;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero != 0) {
        contador++;
        if (!yaPaso || numero > maximo) {
            yaPaso = true;
            maximo = numero;
            posicion = contador;
        }

        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    cout << "Maximo: " << maximo << endl;
    cout << "Posicion: " << posicion << endl;
    return 0;
}
