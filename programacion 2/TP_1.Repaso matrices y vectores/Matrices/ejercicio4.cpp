#include <iostream>

using namespace std;

/*
Hacer una función que reciba como parámetros una matriz de enteros de 10x10
y un número entero (entre 0 y 9), y devuelva la cantidad de componentes
positivos de la columna indicada por el segundo parámetro.
*/

int contarPositivosEnFila(int matriz[10][10], int fila);

int main() {
    int matrizDeNumeros[10][10] = {
        {1, -5, 100, -4, 8, -22, 77, -89, 12, 10},
        {1, -5, 100, -4, 8, -22, 77, -89, 12, 10},
        {1, -5, 100, -4, 8, -22, 77, -89, 12, 10},
        {1, -5, 100, -4, 8, -22, 77, -89, 12, 10},
        {1, -5, 100, -4, 8, -22, 77, -89, 12, 10},
        {1, -5, 100, -4, 8, -22, 77, -89, 12, 10},
        {1, -5, 100, -4, 8, -22, 77, -89, 12, 10},
        {1, -5, 100, -4, 8, -22, 77, -89, 12, 10},
        {1, -5, 100, -4, 8, -22, 77, -89, 12, 10},
        {1, -5, 100, -4, 8, -22, 77, -89, 12, 10},
    };
    const int FILA_A_BUSCAR = 3;

    cout << "La cantidad de valores positivos en la fila " << FILA_A_BUSCAR << " es: " << contarPositivosEnFila(matrizDeNumeros, FILA_A_BUSCAR);

    return 0;
}


int contarPositivosEnFila(int matriz[10][10], int fila) {
    int cantidadPositivos = 0;
    int valorActual;

    for (int columnaActual = 0; columnaActual < 10; columnaActual++) {
        valorActual = matriz[fila][columnaActual];
        if (valorActual > 0) {
            cantidadPositivos++;
        }
    }

    return cantidadPositivos;
}
