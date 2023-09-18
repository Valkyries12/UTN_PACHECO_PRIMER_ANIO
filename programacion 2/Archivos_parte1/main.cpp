#include <iostream>

#include "Menu.h"
#include "Empresa.h"
#include "Archivo.h"

using namespace std;

int main()
{
    Menu menu;
    Archivo archivo("empresas.dat");
    Empresa empresas[5];
    int opcionMenu;

    do {
        menu.dibujarMenu(opcionMenu);
        switch(opcionMenu) {
            case 1:
                //primero carga el hardcodeo de empresas en memoria
                menu.cargar(empresas);
                archivo.crearArchivo();
                if (!archivo.realizarAltaEnLote(empresas)) {
                    cout << "Ocurrio un error en el alta de lote."<< endl;
                }
                system("pause");
                system("cls");
                break;
            case 2:
                if (!archivo.listarEmpresas()) {
                    cout << "Ocurio un error al listar." << endl;
                }
                system("pause");
                system("cls");
                break;
            default:
                cout << "Opcion invalidad. Reingrese" << endl;
                system("pause");
                system("cls");
        }
    } while(opcionMenu != 0);
    return 0;
}
