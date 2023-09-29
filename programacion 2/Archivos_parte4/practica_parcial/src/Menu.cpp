#include <iostream>
#include "cstring"

#include "Menu.h"

Menu::Menu()
{
    //ctor
}

Menu::Menu(std::string mensaje, std::string mensajeError, int maximo, int minimo, int reintentos) {
    setMensaje(mensaje);
    setMensajeError(mensajeError);
    setMaximo(maximo);
    setMinimo(minimo);
    setReintentos(reintentos);
}

Menu::~Menu()
{
    //dtor
}

//getters y setters
int Menu::getOpcionMenu() const {
    return _opcionMenu;
}

void Menu::setOpcionMenu(int opcionMenu) {
    _opcionMenu = opcionMenu;
}

int Menu::getMinimo() const {
    return _minimo;
}

void Menu::setMinimo(int minimo) {
    _minimo = minimo;
}

int Menu::getMaximo() const {
    return _maximo;
}

void Menu::setMaximo(int maximo) {
    _maximo = maximo;
}

int Menu::getReintentos() const {
    return _reintentos;
}

void Menu::setReintentos(int reintentos) {
    _reintentos = reintentos;
}

std::string Menu::getMensaje() const {
    return _mensaje;
}

void Menu::setMensaje(std::string mensaje) {
    strcpy(_mensaje, mensaje.c_str());
}

std::string Menu::getMensajeError() const {
    return _mensajeError;
}

void Menu::setMensajeError(std::string mensajeError) {
    strcpy(_mensajeError, mensajeError.c_str());
}


//metodos
bool Menu::dibujarMenu() {
    char buffer[20];
    int auxNumeroIngresado;
	int isSuccesfull = false;


    if (_maximo >= _minimo && _reintentos >= 0) {
        do {
            _reintentos--;
            std::cout << _mensaje;
            cargarCadena(buffer, 20);
            auxNumeroIngresado = std::stoi(buffer);
            if (auxNumeroIngresado >= _minimo && auxNumeroIngresado <= _maximo) {
                _opcionMenu = auxNumeroIngresado;
                isSuccesfull = true;
                break;
            } else {
                std::cout <<  _mensajeError;
            }
        } while (_reintentos > 0);
    }

    return isSuccesfull;
}

void Menu::cargarCadena(char *palabra, int tamano){
    int i=0;
    fflush(stdin);
    for (i=0; i<tamano; i++){
        palabra[i]=std::cin.get();
        if (palabra[i]=='\n'){
            break;
        }
    }
    palabra[i]='\0';
    fflush(stdin);
}
