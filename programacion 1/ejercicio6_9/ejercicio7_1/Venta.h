#ifndef VENTA_H_INCLUDED
#define VENTA_H_INCLUDED
#include "Articulo.h"

#include <iostream>
using namespace std;


typedef struct {
    int numeroCliente;
    int codigoArticulo;
    int mes;
    int dia;
    int cantidadVendida;
} Venta;


int buscarIndicePorCodArticulo(Articulo arr[], int tam, int codArt);
void calcularMesVenta(Venta arr[], bool mesVenta[], int tam);
void puntoB(bool mesVenta[], string meses[], int tam);



#endif // VENTA_H_INCLUDED
