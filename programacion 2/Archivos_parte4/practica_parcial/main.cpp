#include <iostream>

#include "Tarjeta.h"
#include "Viaje.h"
#include "Fecha.h"
#include "Menu.h"

using namespace std;

/*
a) Informar para un n�mero de tarjeta que se ingresa por teclado la cantidad de viajes realizados en cada uno de los medios de transporte el a�o pasado.
b) El viaje con menor importe. Mostrar todo el registro.
c) El mes de mayor recaudaci�n por viajes en subte entre todos los a�os, sin tener en cuenta el a�o actual.
d) Generar un archivo con los registros de los viajes del a�o actual.

*/


int main()
{
    Tarjeta tarjetas[5];
    Viaje viajes[20];
    Menu menu("1- Nueva tarjeta SUBE.\n2- Cargar viaje.\n3- Ver tarjetas.\n4- Ver viajes.\n5- Punto a).\n8- Salir. \n\nIngrese una opcion: ", 8, 1, 3);


    do {
        if(menu.dibujarMenu()) {
            switch(menu.getOpcionMenu()) {
                case 1:
                    system("cls");
                    menu.persistirTarjetaSUBE(menu.crearTarjeta());
                    cout << menu.getMensaje() << endl;
                    system("cls");
                    break;
                case 2:
                    system("cls");
                    menu.persistirViaje(menu.crearViaje());
                    cout << menu.getMensaje() << endl;
                    system("pause");
                    system("cls");
                    break;
                case 3:
                    system("cls");
                    menu.leerTarjetas();
                    cout << menu.getMensaje() << endl;
                    system("pause");
                    system("cls");
                    break;
                case 4:
                    system("cls");
                    menu.leerViajes();
                    cout << menu.getMensaje() << endl;
                    system("pause");
                    system("cls");
                    break;
                case 5:
                    system("cls");
                    menu.puntoA();
                    cout << menu.getMensaje() << endl;
                    system("pause");
                    system("cls");
                    break;
                case 8:
                    std::cout << "Saliendo...\n\n";
                    break;
            }
        }

    } while(menu.getOpcionMenu() != 8 && menu.getReintentos() != 0);

    cout << "=== FIN DEL PROGRAMA ===" << endl;

    return 0;
}







