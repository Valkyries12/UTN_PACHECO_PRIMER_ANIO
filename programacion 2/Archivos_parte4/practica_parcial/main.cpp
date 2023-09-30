#include <iostream>

#include "Tarjeta.h"
#include "Viaje.h"
#include "Fecha.h"
#include "Menu.h"

using namespace std;

void hardcodearDatos(Tarjeta tarjetas[], Viaje viajes[]);


int main()
{
    //int opcionMenu;
    //int numeroTarjeta;
    Tarjeta tarjetas[5];
    Viaje viajes[20];
    Menu menu("1- Nueva tarjeta SUBE.\n2- Cargar viaje.\n8- Salir. \n\nIngrese una opcion: ", 8, 1, 3);

    hardcodearDatos(tarjetas, viajes);

    do {
        if(menu.dibujarMenu()) {
            switch(menu.getOpcionMenu()) {
                case 1:
                    system("cls");
                    menu.persistirTarjetaSUBE(menu.crearTarjeta());
                    break;
                case 2:
                    system("cls");

                    break;
                case 8:
                    std::cout << "Saliendo...";
            }
        }

    } while(menu.getOpcionMenu() != 8);

    return 0;
}


void hardcodearDatos(Tarjeta tarjetas[], Viaje viajes[]) {
    tarjetas[0] = Tarjeta("1111111111111111", 1, 1, 2022, "36123123", 500.00);
    tarjetas[1] = Tarjeta("2222222222222222", 2, 2, 2022, "36321321", 1500.00);
    tarjetas[2]= Tarjeta("3333333333333333", 3, 3, 2022, "12123123", 200.00);
    tarjetas[3] = Tarjeta("4444444444444444", 4, 4, 2022, "36555444", 125.00);
    tarjetas[4] = Tarjeta("5555555555555555", 5, 5, 2022, "36456456", 300.00);

    viajes[0] = Viaje("1111111111111111", 1, 25, 1, 2022, 70.0);
    viajes[1] = Viaje("3333333333333333", 3, 17, 2, 2022, 40.0);
    viajes[2] = Viaje("1111111111111111", 1, 27, 1, 2022, 70.0);
    viajes[3] = Viaje("2222222222222222", 2, 17, 3, 2022, 50.0);
    viajes[4] = Viaje("2222222222222222", 2, 18, 3, 2022, 50.0);
    viajes[5] = Viaje("4444444444444444", 1, 12, 5, 2022, 70.0);
    viajes[6] = Viaje("3333333333333333", 3, 25, 4, 2022, 50.0);
    viajes[7] = Viaje("1111111111111111", 2, 10, 5, 2022, 40.0);
    viajes[8] = Viaje("5555555555555555", 1, 7, 5, 2022, 70.0);
    viajes[9] = Viaje("5555555555555555", 3, 9, 5, 2022, 50.0);
    viajes[10] = Viaje("4444444444444444", 2, 17, 4, 2022, 40.0);
    viajes[11] = Viaje("1111111111111111", 2, 25, 5, 2022, 40.0);
    viajes[12] = Viaje("2222222222222222", 1, 2, 4, 2022, 70.0);
    viajes[13] = Viaje("3333333333333333", 3, 18, 7, 2022, 50.0);
    viajes[14] = Viaje("2222222222222222", 2, 8, 6, 2022, 40.0);
    viajes[15] = Viaje("5555555555555555", 3, 11, 7, 2022, 50.0);
    viajes[16] = Viaje("1111111111111111", 2, 7, 8, 2022, 40.0);
    viajes[17] = Viaje("2222222222222222", 3, 2, 3, 2022, 50.0);
    viajes[18] = Viaje("5555555555555555", 2, 21, 8, 2022, 40.0);
    viajes[19] = Viaje("3333333333333333", 3, 20, 4, 2022, 50.0);
}




