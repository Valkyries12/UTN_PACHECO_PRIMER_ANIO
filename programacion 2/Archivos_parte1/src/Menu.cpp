#include <iostream>
#include "Menu.h"
#include "Empresa.h"
#include "Archivo.h"

Menu::Menu()
{
    //ctor
}

Menu::~Menu()
{
    //dtor
}

//metodos
void Menu::dibujarMenu(int &opcionMenu) {
    //system("cls");
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "-----------------MENU--------------------" << std::endl;
    std::cout << "-----------------------------------------" << std::endl;
    std::cout << "1- Cargar empresas hardcodeadas" << std::endl;
    std::cout << "2- Mostrar" << std::endl;
    std::cout << "0- Salir" << std::endl << std::endl;
    std::cout << "Ingrese una opcion: ";
    std::cin >> opcionMenu;
}

void Menu::cargar(Empresa * empresas) {
    empresas[0] = Empresa(1, "empresa1", 100, 1, 1, true);
    empresas[1] = Empresa(2, "empresa2", 50, 2, 2, true);
    empresas[2] = Empresa(3, "empresa3", 200, 3, 3, true);
    empresas[3] = Empresa(4, "empresa4", 1500, 4, 4, true);
    empresas[4] = Empresa(5, "empresa5", 1001, 5, 5, true);
    std::cout << "Se han cargado las empresas de forma hardcodeada en memoria." << std::endl;
}

void Menu::mostrar(Empresa * empresas) {
    for (int i = 0; i < 5; i++) {
        std::cout << empresas[i].toString() << std::endl;
    }
}
