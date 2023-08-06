#include <iostream>

using namespace std;

/*
Hacer una función que reciba como parámetros un vector de enteros y un
número entero que indica la cantidad de componentes del vector, y que devuelva
el valor máximo contenido en ese vector.
*/

int calcularMaximo(int arr[], int len);

int main() {
    int numeros[] = {2, 100, 2500, 250, 19, 6, 11, 89};
    const int LONGITUD = 8;

    cout << "El maximo es: " << calcularMaximo(numeros, LONGITUD);

    return 0;
}


int calcularMaximo(int arr[], int len) {
    int maximo = arr[0];
    int valorActual;

    for (int i = 1; i < len; i++) {
        valorActual = arr[i];
        if (valorActual > maximo) {
            maximo = valorActual;
        }
    }

    return maximo;
}
