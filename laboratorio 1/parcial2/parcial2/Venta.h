#ifndef VENTA_H_INCLUDED
#define VENTA_H_INCLUDED

#include <iostream>
using namespace std;


typedef struct {
    int idVenta;
    int idAutor;
    int idGenero;
    int precio;
    int paginasLibro;
    int idSucursal;
} Venta;

int buscarIndicePorNroSucursal(int idSucursal, int sucursales[], int tam);
void acumularYContarPorGenero(Venta venta, int acumGenerosLiterarios[], int contGenerosLiterarios[]);
void punto1(Venta venta, int sucursales[], bool sucursalesNoVendieronTerrorFiccion[], int tam);
void punto3(string generosLiterarios[], int acumGenerosLiterarios[], int contGenerosLiterarios[]);
void acumularVentaAutor(Venta venta, int autores[]);
void punto4(int autores[], int tam);


#endif // VENTA_H_INCLUDED
