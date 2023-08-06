#include <iostream>

using namespace std;

/*
Hacer una función que reciba un número entero llamado valor_buscado,
un vector de números enteros y su tamaño y devuelva verdadero si el valor buscado se encuentra dentro del vector.
Caso contrario debe devolver falso.
*/

bool esEncontrado(int valorBuscado, int arr[], int tam);

int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;

    const int TAM = 5;
    int numeros[TAM] = { 1, 2, 3, 4, 5}, valorBuscado;

    cout << "Ingrese numero a buscar: ";
    cin >> valorBuscado;

    cout << valorBuscado << " fue encontrado? -> " << esEncontrado(valorBuscado, numeros, TAM);

    cout << endl << endl << "=== FIN DEL PROGRAMA ===";
    return 0;
}

bool esEncontrado(int valorBuscado, int arr[], int tam) {
    int resultado = false;

    for (int i = 0; i < tam; i++) {
        if (arr[i] == valorBuscado) {
            resultado = true;
        }
    };

    return resultado;
};
