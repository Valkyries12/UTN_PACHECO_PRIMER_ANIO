#include <iostream>
#include "Venta.h"


using namespace std;


int buscarIndicePorCodArticulo(Articulo arr[], int tam, int codArt) {
    int indice;

    for (int i = 0; i < tam; i++) {
        if (arr[i].codigoArticulo == codArt) {
            indice = i;
            break;
        }
    }

    return indice;
}

void calcularMesVenta(Venta arr[], bool mesVenta[], int tam) {
    int mes;
    int cantidadVenta;
    for (int i = 0; i < tam; i++) {
        mes = arr[i].mes;
        cantidadVenta = arr[i].cantidadVendida;
        if (cantidadVenta > 0) {
            mesVenta[mes-1] = true;
        }
    }
};


void puntoB(bool mesVenta[], string meses[], int tam) {
    for (int i = 0; i < 12; i++) {
        if (!mesVenta[i]) {
            cout << meses[i] << "  ";
        }
    }
};
