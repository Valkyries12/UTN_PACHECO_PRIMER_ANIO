#include <iostream>
#include <array>

using namespace std;

/*
Hacer una función que reciba como parámetros un vector de enteros de 10
elementos y un número entero, y que devuelva la posición si el número recibido
existe en el vector, o -1 si no existe.
*/

int buscarPosicion(int arr[], int len, int valorBuscado);

int main() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int valorBuscado = 3;

    cout << "posicion de " << valorBuscado << " : " << buscarPosicion(numeros, 10, valorBuscado);

    return 0;
}


int buscarPosicion(int arr[], int len, int valorBuscado) {
    int posicion = -1;
    int valorActual;

    for (int i = 0; i < len; i++) {
        valorActual = arr[i];
        if (valorActual == valorBuscado) {
            posicion = i;
            break;
        }
    }

    return posicion;
}
