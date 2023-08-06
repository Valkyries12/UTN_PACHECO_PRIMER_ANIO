#include <iostream>

using namespace std;

/*
Hacer una función que reciba como parámetros una matriz de enteros de 10x10
y un número entero (entre 0 y 9), y devuelva la suma de todos los componentes
de la columna indicada por el segundo parámetro.
*/

int sumarValoresEnFila(int matriz[10][10], int fila);

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
    const int FILA_A_BUSCAR = 3;

    cout << "La suma de los valores de la fila " << FILA_A_BUSCAR << " es: " << sumarValoresEnFila(matrizDeNumeros, FILA_A_BUSCAR);

    return 0;
}


int sumarValoresEnFila(int matriz[10][10], int fila) {
    int acumulador = 0;
    int valorActual;

    for (int columnaActual = 0; columnaActual < 10; columnaActual++) {
        valorActual = matriz[fila][columnaActual];
        acumulador += valorActual;
    }

    return acumulador;
}
