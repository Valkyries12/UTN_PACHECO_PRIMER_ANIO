#include <iostream>

using namespace std;

/*
Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que se ingrese el 5º número par.
Calcular e informar:
La cantidad de ternas de números negativos ingresados de manera consecutiva.

Ejemplo A: 4, -1, -4, -5, 10, -3, -5, 7, -5, -3, -6, 10 → Cantidad de ternas: 2
*/

int main() {
    int numero, cantidadPares = 0, cantidadTernas = 0, primerNeg = 0, segundoNeg = 0, tercerNeg = 0;
    bool yaHayNeg = false;

    while (cantidadPares < 5) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero % 2 == 0) {
            cantidadPares++;
        }

        if (!yaHayNeg && numero < 0) {
            yaHayNeg = true;
            primerNeg = numero;
            segundoNeg = numero;
            tercerNeg = numero;
        }
    }

    return 0;
}
