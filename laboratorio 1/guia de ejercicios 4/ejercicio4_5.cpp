#include <iostream>

using namespace std;

/*
Hacer un programa que permita ingresar una lista de números positivos, negativos o cero hasta que la diferencia entre el máximo y el mínimo sea mayor a 10. Calcular e informar:
La cantidad de números que componen la lista.

Ejemplo A: 1, 4, 6, -10 → Cantidad de números: 4
Ejemplo B: 100, 104, 106, 100, 100, 105, 200 → Cantidad de números: 7

*/

int main() {
    int numero, cantidadNumeros = 0, maximo, minimo, diferencia = 0;


     while (diferencia <= 10) {
        cout << "Ingrese un numero: ";
        cin >> numero;
        cantidadNumeros++;
        if (cantidadNumeros == 1) {
            maximo = numero;
            minimo = numero;
        } else {
            if (numero > maximo) {
            maximo = numero;
            }
            if (numero < minimo) {
                minimo = numero;
            }
        }

        diferencia = maximo - minimo;
        if (diferencia < 0) {
            diferencia *= -1;
        }

     }


     cout << "Cantidad de numeros: " << cantidadNumeros;
    return 0;
}
