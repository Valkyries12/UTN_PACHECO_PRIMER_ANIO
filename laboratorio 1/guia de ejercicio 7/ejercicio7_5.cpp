#include <iostream>

using namespace std;

/*
Hacer una funci�n que reciba un vector de n�meros enteros y su tama�o y liste cada uno de los elementos
*/

void mostrarVector(int arr[], int tam);
int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;

    const int TAM = 5;
    int numeros[TAM] = { 1, 2, 3, 4, 5};

    mostrarVector(numeros, TAM);

    cout << endl << endl << "=== FIN DEL PROGRAMA ===";
    return 0;
};

void mostrarVector(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    }
};
