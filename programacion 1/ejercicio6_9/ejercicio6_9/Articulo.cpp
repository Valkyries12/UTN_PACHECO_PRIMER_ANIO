#include <iostream>
#include "Articulo.h"

using namespace std;


void inicializarArrayArticulos(int tam, Articulo arr[]) {
    for (int i = 0; i < tam; i++) {
        arr[i].nroArticulo = i + 1;
        arr[i].cantidadVendida = 0;
    }
}


void cargarArticulo(Articulo arr[], int nroArticulo, int cantidadVendida) {
    arr[nroArticulo-1].cantidadVendida += cantidadVendida;
}


int calcularNroArticuloMasVendido(int tam, Articulo arr[]) {
    int nroArticuloMasVendido;
    int maxArticulo = 0;

    for (int i = 0; i < tam; i++) {
        if (arr[i].cantidadVendida > maxArticulo) {
            maxArticulo = arr[i].cantidadVendida;
            nroArticuloMasVendido = arr[i].nroArticulo;
        }
    }

    return nroArticuloMasVendido;
}


void mostrarArticulosNoRegistraronVentas(int tam, Articulo arr[]) {
    for (int i = 0; i < tam; i++) {
        if (arr[i].cantidadVendida == 0) {
            cout << " " << arr[i].nroArticulo << " ";
        }
    }
}


int calcularUnidadesVendidasDeArticulo(int nroArticulo, Articulo arr[]) {
    return arr[nroArticulo-1].cantidadVendida;
}



