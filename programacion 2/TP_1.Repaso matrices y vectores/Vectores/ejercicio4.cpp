#include <iostream>

using namespace std;

/*
Hacer una funci�n que reciba como par�metros un vector de enteros y un
n�mero entero que indica la cantidad de componentes del vector, y que devuelva
la posici�n que ocupa el valor m�ximo contenido en ese vector.

*/

int buscarIndiceValorMaximo (int arr[], int len);

int main() {
    int numeros[] = {2, 100, 2500, 250, 19, 6, 11, 89};
    const int LONGITUD = 8;

    cout << "El indice es: " << buscarIndiceValorMaximo(numeros, LONGITUD);

    return 0;
}


int buscarIndiceValorMaximo(int arr[], int len) {
    int maximo = arr[0];
    int valorActual;
    int indice = 0;

    for (int i = 1; i < len; i++) {
        valorActual = arr[i];
        if (valorActual > maximo) {
            maximo = valorActual;
            indice = i;
        }
    }

    return indice;
}
