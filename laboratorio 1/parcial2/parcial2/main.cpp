#include <iostream>
#include "Venta.h"
using namespace std;

int main()
{
    Venta venta;
    int autores[999] = {};
    int sucursales[4] = {1000, 2000, 3000, 4000};
    bool sucursalesVendieronTerrorFiccion[4] = {false, false, false, false};
    string generosLiterarios[7] = {"Terror", "Biografia", "Novela", "CienciaFiccion", "Historia", "Ciencia", "Salud"};
    int acumGenerosLiterarios[7] = {0, 0, 0, 0, 0, 0, 0};
    int contGenerosLiterarios[7] = {0, 0, 0, 0, 0, 0, 0};


    cout << "ID de venta: ";
    cin >> venta.idVenta;

    while (venta.idVenta != 0) {
        cout << "ID de autor [500 a 1499]: ";
        cin >> venta.idAutor;
        cout << "ID de genero " << endl;
        cout << "1- Terror" << endl;
        cout << "2- Biografia" << endl;
        cout << "3- Novela" << endl;
        cout << "4- Ciencia ficcion" << endl;
        cout << "5- Historia" << endl;
        cout << "6- Ciencia" << endl;
        cout << "7- Salud" << endl << endl;
        cout << "Ingrese una opcion: ";
        cin >> venta.idGenero;
        cout << "Precio: ";
        cin >> venta.precio;
        cout << "Paginas del libro: ";
        cin >> venta.paginasLibro;
        cout << "ID de sucursal [1000, 2000, 3000, 4000]: ";
        cin >> venta.idSucursal;

        acumularYContarPorGenero(venta, acumGenerosLiterarios, contGenerosLiterarios);
        acumularVentaAutor(venta, autores);

        cout << "ID de venta: ";
        cin >> venta.idVenta;
    }

    cout << "Las sucursales que no vendieron terror ni ciencia ficcion: ";
    punto1(venta, sucursales, sucursalesVendieronTerrorFiccion, 4);
    cout << endl << endl;
    punto3(generosLiterarios, acumGenerosLiterarios, contGenerosLiterarios);
    cout << endl << endl;
    punto4(autores, 999);
    return 0;
}
