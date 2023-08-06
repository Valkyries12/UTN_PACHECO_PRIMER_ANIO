#include <iostream>

using namespace std;

/*
Hacer una función que reciba como parámetros un vector de enteros de 10
elementos y un número entero, y que devuelva la cantidad de veces que el
número recibido como parámetro se repite dentro del vector
*/

int contarRepetidos(int arr[], int len, int valorBuscado);

int main() {
    int numeros[10] = {1, 2, 3, 4, 1, 2, 3, 4, 5, 6};
    int valorBuscado = 8;
    cout << "El numero " << valorBuscado << " se encontro: " << contarRepetidos(numeros, 10, valorBuscado) << " veces";
    return 0;
}


int contarRepetidos(int arr[], int len, int valorBuscado) {
    int contador = 0;
    int valorActual;

    for (int i = 0; i < len; i++) {
        valorActual = arr[i];
        if (valorActual == valorBuscado) {
            contador++;
        }
    }

    return contador;
}
