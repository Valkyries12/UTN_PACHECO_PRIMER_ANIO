#include <iostream>

using namespace std;

/*
Hacer una función que reciba un vector de números enteros y su tamaño y devuelva la posición en donde se encuentra el valor máximo del vector.
*/

int buscarMaxPosicion(int arr[], int tam);

int main() {
    const int TAM = 10;
    int numeros[TAM] = {1, 2, 55, 108, 1, 2, 3, 4, 10, 7};

    cout << "La posicion del valor maximo es: " << buscarMaxPosicion(numeros, TAM);
    return 0;
}


int buscarMaxPosicion(int arr[], int tam) {
    int maximo = arr[0];
    int posicion = 0;

    for (int i = 0; i < tam; i++) {
        if (arr[i] > maximo) {
            maximo = arr[i];
            posicion = i;
        }
    }

    return posicion;
};
