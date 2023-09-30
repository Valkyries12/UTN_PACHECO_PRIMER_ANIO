#include <iostream>
#include "cstring"

#include "Menu.h"
#include "Tarjeta.h"

Menu::Menu()
{
    //ctor
}

Menu::Menu(std::string mensajeMenu, int maximo, int minimo, int reintentos) {
    setMensaje("");
    setMensajeError("");
    setMensajeMenu(mensajeMenu);
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

std::string Menu::getMensajeMenu() const {
    return _mensajeMenu;
}

void Menu::setMensajeMenu(std::string mensajeMenu) {
    strcpy(_mensajeMenu, mensajeMenu.c_str());
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
            std::cout << _mensajeMenu;
            cargarCadena(buffer, 20);
            auxNumeroIngresado = std::stoi(buffer);
            if (auxNumeroIngresado >= _minimo && auxNumeroIngresado <= _maximo) {
                _opcionMenu = auxNumeroIngresado;
                isSuccesfull = true;
                break;
            } else {
                setMensajeError("\nOpcion invalida. Reintente.\n");
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

void Menu::persistirTarjetaSUBE(Tarjeta tarjeta) {
    FILE* pFile;
    bool sePersistio = false;
    pFile = fopen("tarjetas.dat", "ab");
    if (pFile != nullptr) {
        sePersistio = fwrite(&tarjeta, sizeof(Tarjeta), 1, pFile);
        sePersistio = fclose(pFile);
        //sePersistio = true;
    }

    sePersistio ? setMensaje("Se ha creado y guardado la tarjeta correctamente.") : setMensajeError("Ha ocurrido un error al crear y guardar la tarjeta.");
}

Tarjeta Menu::crearTarjeta() {
    char numeroTarjeta[17];
    int dia, mes, anio;
    char dniDuenio[9];
    float saldo;

    std::cout << "Ingrese un numero de Tarjeta: ";
    cargarCadena(numeroTarjeta, 17);
    std::cout << "Fecha de creacion" << std::endl;
    std::cout << "Dia: ";
    std::cin >> dia;
    std::cout << "Mes: ";
    std::cin >> mes;
    std::cout << "Anio: ";
    std::cin >> anio;
    std::cout << "Ingrese DNI: ";
    cargarCadena(dniDuenio, 9);
    std::cout << "Saldo inicial: ";
    std::cin >> saldo;

    return Tarjeta(numeroTarjeta, dia, mes, anio, dniDuenio, saldo);
}

Viaje Menu::crearViaje() {
    Viaje(std::string numeroTarjeta, int medioTransporte, int dia, int mes, int anio, float importe);
    //TODO crear Viaje y persistir pero en otra funcion
}

