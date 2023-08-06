#include <iostream>

using namespace std;

/*
Hacer una funci�n que reciba como par�metros un vector de enteros y un
n�mero entero que indica la cantidad de componentes del vector, y que devuelva
el valor m�nimo contenido en ese vector.
*/

int calcularMinimo (int arr[], int len);

int main() {
    int numeros[] = {2, 100, 2500, 250, 19, 6, 11, 89};
    const int LONGITUD = 8;

    cout << "El minimo es: " << calcularMinimo(numeros, LONGITUD);

    return 0;
}


int calcularMinimo (int arr[], int len) {
    int minimo = arr[0];
    int valorActual;

    for (int i = 1; i < len; i++) {
        valorActual = arr[i];
        if (valorActual < minimo) {
            minimo = valorActual;
        }
    }

    return minimo;
}
