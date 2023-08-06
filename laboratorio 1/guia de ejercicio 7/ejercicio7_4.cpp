#include <iostream>

using namespace std;

/*
Hacer una función que reciba un vector de números enteros y su tamaño y cargue cada uno de los elementos.
*/

void cargarVector(int arr[], int tam);
void mostrarVector(int arr[], int tam);

int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;

    int tam;

    cout << "Ingrese tamaño del vector: ";
    cin >> tam;
    int numeros[tam];

    cargarVector(numeros, tam);
    mostrarVector(numeros, tam);


    cout << endl << endl << "=== FIN DEL PROGRAMA ===";
    return 0;
}

void cargarVector(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese numero: ";
        cin >> arr[i];
    };
};

void mostrarVector(int arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << arr[i] << " ";
    };
};
