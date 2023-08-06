#ifndef ARTICULO_H_INCLUDED
#define ARTICULO_H_INCLUDED

typedef struct{
    int codigoArticulo;
    float precio;
    int acumVendidos = 0;
} Articulo;

void cargarArticulos(Articulo arr[], int tam);
void acumularArticuloVendido(Articulo arr[], int cantidadVendida, int indice);
void ordenarArticulos(Articulo arr[], int tam);
void copiarArr(Articulo arr[], int tam);
void puntoA(Articulo arr[], int tam);
void mostrarArticulos(Articulo arr[], int tam);


#endif // ARTICULO_H_INCLUDED
