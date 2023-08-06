#include <iostream>
#include <array>

using namespace std;

/*
Hacer una función que reciba como parámetros un vector de enteros de 10
elementos y un número entero, y que devuelva verdadero si el número recibido
existe en el vector, o falso si no existe.
*/

bool existeNumeroEnVector(int arr[], int len, int valorBuscado);

int main() {
    int numeros[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int valorBuscado = 31;

    if (existeNumeroEnVector(numeros, 10, valorBuscado)) {
        cout << "El numero " << valorBuscado << " existe";
    } else {
        cout << "El numero " << valorBuscado << " NO existe";
    }

    return 0;
}


bool existeNumeroEnVector(int arr[], int len, int valorBuscado) {
    bool existe = false;
    int valorActual;

    for (int i = 0; i < len; i++) {
        valorActual = arr[i];
        if (valorActual == valorBuscado) {
            existe = true;
            break;
        }
    }

    return existe;
}
