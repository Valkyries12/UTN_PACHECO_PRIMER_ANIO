#include <iostream>
#include "Articulo.h"

using namespace std;


void cargarArticulos(Articulo arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Codigo articulo: ";
        cin >> arr[i].codigoArticulo;
        cout << "Precio unitario: ";
        cin >> arr[i].precio;
    }
};


void acumularArticuloVendido(Articulo arr[], int cantidadVendida, int indice) {
    arr[indice].acumVendidos += cantidadVendida;
};


void ordenarArticulos(Articulo arr[], int tam) {
    Articulo aux;

    for (int i = 0; i < tam -1; i++) {
        for (int j = i+1; j < tam; j++) {
            if (arr[i].acumVendidos < arr[j].acumVendidos) {
                aux = arr[j];
                arr[j] = arr[i];
                arr[i] = aux;
            }
        }
    }
};


void copiarArr(Articulo arr[], Articulo newArr[], int tam) {
    for (int i = 0; i < tam; i++) {
        newArr[i] = arr[i];
    }
};


void mostrarArticulos(Articulo arr[], int tam) {
    for (int i = 0; i < tam; i++) {
        cout << "Codigo articulo: " << arr[i].codigoArticulo << "  Cantidad total vendida: " << arr[i].acumVendidos << endl;
    }
};


void puntoA(Articulo arr[], int tam) {
    Articulo newArr[tam];

    copiarArr(arr, newArr, tam);
    ordenarArticulos(newArr, tam);
    mostrarArticulos(newArr, tam);
};





