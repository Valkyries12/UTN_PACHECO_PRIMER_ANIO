#include <iostream>

#include "Tarjeta.h"
#include "Viaje.h"
#include "Fecha.h"
#include "Menu.h"

using namespace std;



int main()
{
    Tarjeta tarjetas[5];
    Viaje viajes[20];
    Menu menu("1- Nueva tarjeta SUBE.\n2- Cargar viaje.\n8- Salir. \n\nIngrese una opcion: ", 8, 1, 3);


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
                    system("cls");
                    break;
                case 8:
                    std::cout << "Saliendo...";
            }
        }

    } while(menu.getOpcionMenu() != 8 && menu.getReintentos() != 0);

    cout << "=== FIN DEL PROGRAMA ===" << endl;

    return 0;
}







