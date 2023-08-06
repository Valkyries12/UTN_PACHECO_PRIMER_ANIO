#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar 5 números, luego informar los 2 mayores valores ingresados, aclarando cual es el máximo y cual el que le sigue.
Ejemplo: 10, 8, 12, 14, 3 el resultado será 14 y 12.
Ejemplo: 14, 8, 12, 14 ,3 el resultado será 14 y 14.
Ejemplo: -4, -8, -12, -20, -2 el resultado será -2 y -4

*/

int main() {
    int numero, primerMaximo, segundoMaximo;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (i == 0) {
            primerMaximo = numero;
            segundoMaximo = numero;
        }

        if (numero > primerMaximo) {
            segundoMaximo = primerMaximo;
            primerMaximo = numero;
        } /*else {
            if (numero > segundoMaximo && numero != primerMaximo) {
                segundoMaximo = numero;
            }
        }*/

    }

    cout << "primer maximo: " << primerMaximo << endl;
    cout << "segundo maximo: " << segundoMaximo << endl;
    return 0;
}
