#include <iostream>
#include "Articulo.h"
#include "Venta.h"

using namespace std;

int main()
{
    Articulo articulos[5];
    string meses[12] = {"Enero", "Febrero", "Marzo", "Abril", "Mayo", "Junio", "Julio", "Agosto", "Septiembre", "Octubre", "Noviembre", "Diciembre"};
    bool mesVenta[12] = {false, false, false, false, false, false, false, false, false, false, false, false};
    int nroCliente;
    int codArticulo;
    int dia;
    int mes;
    int cantidadVendida;
    int indice;

    cargarArticulos(articulos, 5);

    cout << "Numero de cliente [1 a 300]: ";
    cin >> nroCliente;

    while (nroCliente != 0) {
        cout << "Codigo de articulo: ";
        cin >> codArticulo;
        cout << "Mes [1 a 12]: ";
        cin >> mes;
        cout << "Dia [1 a 31]: ";
        cin >> dia;
        cout << "Cantidad vendida: ";
        cin >> cantidadVendida;

        indice = buscarIndicePorCodArticulo(articulos, 5, codArticulo);
        acumularArticuloVendido(articulos, cantidadVendida, indice);


        cout << "Numero de cliente [1 a 300]: ";
        cin >> nroCliente;
    }

    puntoA(articulos, 5);
    puntoB(mesVenta, meses, 5);

    return 0;
}
