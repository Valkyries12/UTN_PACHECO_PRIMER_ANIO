#include <iostream>

using namespace std;

/*
Hacer una funci�n que reciba como par�metros una matriz de enteros de 10x10
y un n�mero entero (entre 0 y 9), y devuelva el m�ximo de la fila indicada por el
segundo par�metro.
*/

int buscarMaximoEnFila(int matriz[10][10], int fila);

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

    cout << "El maximo en la fila " << FILA_A_BUSCAR << " es: " << buscarMaximoEnFila(matrizDeNumeros, FILA_A_BUSCAR);

    return 0;
}


int buscarMaximoEnFila(int matriz[10][10], int fila) {
    int maximo = matriz[fila][0];
    int valorActual;

    for (int columnaActual = 1; columnaActual < 10; columnaActual++) {
        valorActual = matriz[fila][columnaActual];
        if (valorActual > maximo) {
            maximo = valorActual;
        }
    }

    return maximo;
}
