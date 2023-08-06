#include <iostream>

using namespace std;


void cargarVector(int tam, int arr[]);
bool estaOrdenado(int tam, int arr[]);

int main() {
    const int TAM = 5;
    int numeros[TAM];
    bool resultado;

    cargarVector(TAM, numeros);
    resultado = estaOrdenado(TAM, numeros);

    cout << "El array esta ordenado: -->" << resultado;

    return 0;
}

void cargarVector(int tam, int arr[]) {
    for (int i = 0; i < tam; i++) {
        cout << "Ingrese un numero: ";
        cin >> arr[i];
    };
};


bool estaOrdenado(int tam, int arr[]) {
   bool resultado = true;

   for (int i = 0; i < tam-1; i++) {
        if (arr[i] > arr[i+1]) {
            resultado = false;
        }
   }

   return resultado;
};
