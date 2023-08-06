#include <iostream>
#include "Articulo.h"

using namespace std;

/*
Una	empresa	comercializa	15	tipos	de	art�culos	y	por	cada	venta	realizada	genera	un registro
con	los	siguientes	datos:
- N�mero	de	Art�culo	(1 a	15)
- Cantidad	Vendida
Puede	haber	varios	registros	para	el	mismo	art�culo	y	el	�ltimo	se	indica	con	n�mero	de
art�culo	igual	a	0.
Se	pide	determinar	e	informar:
a)	El	n�mero	de	art�culo	que	m�s	se	vendi�	en	total.
b)	Los	n�meros	de	art�culos	que	no	registraron	ventas.
c)	Cuantas	unidades	se	vendieron	del	n�mero	de	art�culo	10.
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

    //a)	El	n�mero	de	art�culo	que	m�s	se	vendi�	en	total.
    cout << endl << "El numero de articulo mas vendido es es : " << calcularNroArticuloMasVendido(15, articulos) << endl;
    //b)	Los	n�meros	de	art�culos	que	no	registraron	ventas.
    cout << "Los articulos que no registraron ventas son: " << endl;
    mostrarArticulosNoRegistraronVentas(15, articulos);
    //c)	Cuantas	unidades	se	vendieron	del	n�mero	de	art�culo	10.
    cout << endl << "El articulo 10 vendio: " << calcularUnidadesVendidasDeArticulo(10, articulos);
    return 0;
}




