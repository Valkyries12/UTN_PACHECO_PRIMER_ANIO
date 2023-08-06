#include <iostream>
#include "Articulo.h"

using namespace std;

/*
Una	empresa	comercializa	15	tipos	de	artículos	y	por	cada	venta	realizada	genera	un registro
con	los	siguientes	datos:
- Número	de	Artículo	(1 a	15)
- Cantidad	Vendida
Puede	haber	varios	registros	para	el	mismo	artículo	y	el	último	se	indica	con	número	de
artículo	igual	a	0.
Se	pide	determinar	e	informar:
a)	El	número	de	artículo	que	más	se	vendió	en	total.
b)	Los	números	de	artículos	que	no	registraron	ventas.
c)	Cuantas	unidades	se	vendieron	del	número	de	artículo	10.
*/



int main()
{
    Articulo articulos[15];
    int cantidadVendida;
    int nroArticulo;


    inicializarArrayArticulos(15, articulos);

    cout << "Numero de articulo [1 a 15]: ";
    cin >> nroArticulo;


    while (nroArticulo != 0) {
        cout << "Cantidad vendida: ";
        cin >> cantidadVendida;

        cargarArticulo(articulos, nroArticulo, cantidadVendida);

        cout << "Numero de articulo [1 a 15]: ";
        cin >> nroArticulo;
    }

    //a)	El	número	de	artículo	que	más	se	vendió	en	total.
    cout << endl << "El numero de articulo mas vendido es es : " << calcularNroArticuloMasVendido(15, articulos) << endl;
    //b)	Los	números	de	artículos	que	no	registraron	ventas.
    cout << "Los articulos que no registraron ventas son: " << endl;
    mostrarArticulosNoRegistraronVentas(15, articulos);
    //c)	Cuantas	unidades	se	vendieron	del	número	de	artículo	10.
    cout << endl << "El articulo 10 vendio: " << calcularUnidadesVendidasDeArticulo(10, articulos);
    return 0;
}




