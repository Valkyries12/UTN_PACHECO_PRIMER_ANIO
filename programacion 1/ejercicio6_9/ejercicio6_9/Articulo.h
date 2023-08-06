#ifndef ARTICULO_H_INCLUDED
#define ARTICULO_H_INCLUDED

typedef struct {
    int nroArticulo;
    int cantidadVendida = 0;
} Articulo;


void inicializarArrayArticulos(int tam, Articulo arr[]);
void cargarArticulo(Articulo arr[], int nroArticulo, int cantidadVendida);
int calcularNroArticuloMasVendido(int tam, Articulo arr[]);
void mostrarArticulosNoRegistraronVentas(int tam, Articulo arr[]);
int calcularUnidadesVendidasDeArticulo(int nroArticulo, Articulo arr[]);


#endif // ARTICULO_H_INCLUDED
