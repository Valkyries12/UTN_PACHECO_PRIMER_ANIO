#include <iostream>

using namespace std;

/*
Hacer una funci�n que reciba un vector de n�meros enteros y su tama�o y cargue cada uno de los elementos.
*/

void cargarVector(int arr[], int tam);
void mostrarVector(int arr[], int tam);

int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;

    int tam;

    cout << "Ingrese tama�o del vector: ";
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
