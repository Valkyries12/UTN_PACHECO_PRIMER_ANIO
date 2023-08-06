#include <iostream>

using namespace std;

/*
Hacer una función que reciba como parámetros una matriz de enteros de 10x10,
y devuelva la suma de todos los componentes de la matriz
*/

int sumarValores(int matriz[10][10]);

int main() {
    int matrizDeNumeros[10][10] = {
        {1, 5, 100, 4, 8, 22, 77, 89, 12, 10},
        {1, 5, 100, 4, 8, 22, 77, 89, 12, 10},
        {1, 5, 100, 4, 8, 22, 77, 89, 12, 10},
        {1, 5, 100, 4, 8, 22, 77, 89, 12, 10},
        {1, 5, 100, 4, 8, 22, 77, 89, 12, 10},
        {1, 5, 100, 4, 8, 22, 77, 89, 12, 10},
        {1, 5, 100, 4, 8, 22, 77, 89, 12, 10},
        {1, 5, 100, 4, 8, 22, 77, 89, 12, 10},
        {1, 5, 100, 4, 8, 22, 77, 89, 12, 10},
        {1, 5, 100, 4, 8, 22, 77, 89, 12, 10}
    };

    cout << "La suma de todos los valores es " << sumarValores(matrizDeNumeros);

    return 0;
}


int sumarValores(int matriz[10][10]) {
    int acumulador = 0;
    int valorActual;

    for (int filaActual = 0; filaActual < 10; filaActual++) {
        for (int columnaActual = 0; columnaActual < 10; columnaActual++) {
            valorActual = matriz[filaActual][columnaActual];
            acumulador += valorActual;
        }
    }

    return acumulador;
}
