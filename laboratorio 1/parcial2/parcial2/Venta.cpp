#include <iostream>
#include "Venta.h"
using namespace std;


int buscarIndicePorNroSucursal(int idSucursal, int sucursales[], int tam) {
    int indice;

    for (int i = 0; i < tam; i++) {
        if (sucursales[i] == idSucursal) {
            indice = i;
            break;
        }
    }

    return indice;
};

void punto1(Venta venta, int sucursales[], bool sucursalesVendieronTerrorFiccion[], int tam) {
    int indice;

    if ((venta.idGenero == 1 || venta.idGenero == 4)) {
        indice = buscarIndicePorNroSucursal(venta.idSucursal, sucursales, 4);
        sucursalesVendieronTerrorFiccion[indice] = true;
    }


    for (int i = 0; i < tam; i++) {
        if (!sucursalesVendieronTerrorFiccion[i]) {
            cout << " " << sucursales[i] << " ";
        }
    }

};


void acumularYContarPorGenero(Venta venta, int acumGenerosLiterarios[], int contGenerosLiterarios[]) {
    int indice = venta.idGenero -1;
    acumGenerosLiterarios[indice] += venta.precio;
    contGenerosLiterarios[indice] += 1;
};


void punto3(string generosLiterarios[], int acumGenerosLiterarios[], int contGenerosLiterarios[]) {
    int promedio;

    for (int i = 0; i < 7; i++) {
        promedio = acumGenerosLiterarios[i];
        if (contGenerosLiterarios[i] != 0) {
            promedio = acumGenerosLiterarios[i] / contGenerosLiterarios[i];
        }

        cout << "Genero: " << generosLiterarios[i] << " Promedio: " << promedio << endl;
    }
};

void acumularVentaAutor(Venta venta, int autores[]) {
    int indice = venta.idAutor -500;
    int precio = venta.precio;
    autores[indice] += precio;
};


void punto4(int autores[], int tam) {
    int maxRecaudacion = autores[0];
    int maxIdRecaudacion = 500;

    for (int i = 0; i < tam; i++) {
        if (autores[i] > maxRecaudacion) {
            maxRecaudacion = autores[i];
            maxIdRecaudacion = i + 500;
        }
    }

    cout << "El autor que mas recaudo fue: " << maxIdRecaudacion << endl;
};
