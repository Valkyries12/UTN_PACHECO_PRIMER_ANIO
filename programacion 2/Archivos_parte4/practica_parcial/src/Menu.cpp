#include <iostream>
#include "cstring"
#include "string"

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
                setMensaje("\nOpcion invalida. Reintente.\n\n");
                std::cout <<  _mensaje;
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
        fclose(pFile);
    }

    sePersistio ? setMensaje("Se ha creado y guardado la tarjeta correctamente.") : setMensaje("Ha ocurrido un error al crear o guardar la tarjeta.");
}

void Menu::persistirViaje(Viaje viaje) {
    FILE* pFile;
    bool sePersistio = false;
    pFile = fopen("viajes.dat", "ab");
    if (pFile != nullptr) {
        sePersistio = fwrite(&viaje, sizeof(Viaje), 1, pFile);
        fclose(pFile);
    }

    sePersistio ? setMensaje("Se ha hecho un nuevo viaje.") : setMensaje("Ha ocurrido un error al crear o guardar el viaje");
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
    char numeroTarjeta[17];
    int medioTransporte;
    int dia, mes, anio;


    std::cout << "Ingrese numero de tarjeta: ";
    cargarCadena(numeroTarjeta, 17);
    std::cout << "Medio de transporte\n 1- colectivo\n 2- subte\n 3- tren\n\n Ingrese una opcion: ";
    std::cin >> medioTransporte;
    std::cout << "Dia: ";
    std::cin >> dia;
    std::cout << "Mes: ";
    std::cin >> mes;
    std::cout << "Anio: ";
    std::cin >> anio;
    Viaje viaje(numeroTarjeta, medioTransporte, dia, mes, anio);
    viaje.calcularImporte();

    return viaje;
}

void Menu::leerTarjetas() {
    Tarjeta tarjeta;
    FILE* pFile;
    bool seHaLeido = false;

    pFile = fopen("tarjetas.dat", "rb");
    if (pFile != nullptr) {
        while(fread(&tarjeta, sizeof(Tarjeta), 1, pFile) == 1) {
            std::cout << tarjeta.toString() << std::endl;
            seHaLeido = true;
        }
    }

    seHaLeido ? setMensaje("Lectura completa.") : setMensaje("Ha ocurrido un error en la lectura.");
}

void Menu::leerViajes() {
    Viaje viaje;
    FILE* pFile;
    bool seHaLeido = false;

    pFile = fopen("viajes.dat", "rb");
    if (pFile != nullptr) {
        while(fread(&viaje, sizeof(Viaje), 1, pFile) == 1) {
            std::cout << viaje.toString() << std::endl;
            seHaLeido = true;
        }
    }

    seHaLeido ? setMensaje("Lectura completa.") : setMensaje("Ha ocurrido un error en la lectura.");
}

void Menu::puntoA() {
    char numeroTarjeta[17];
    int qtyViajesColectivo = 0;
    int qtyViajesTren = 0;
    int qtyViajesSubte = 0;
    bool tarjetaEncontrada = false;
    FILE* pFile;
    Viaje viaje;

    std::cout << "Ingrese numero de tarjeta: ";
    cargarCadena(numeroTarjeta, 17);
    tarjetaEncontrada = verificarTarjetaExistente(numeroTarjeta);

    if (tarjetaEncontrada) {
        pFile = fopen("viajes.dat", "rb");
        if (pFile != nullptr) {
            while(fread(&viaje, sizeof(Viaje), 1, pFile) == 1) {
                if (strcmp(viaje.getNumeroTarjeta().c_str(), numeroTarjeta) == 0) {
                    //1 colecitvo, 2 subt, 3 tren
                    switch(viaje.getMedioTransporte()) {
                        case 1:
                            qtyViajesColectivo++;
                            break;
                        case 2:
                            qtyViajesSubte++;
                            break;
                        case 3:
                            qtyViajesTren++;
                            break;
                    }
                }
            }
            fclose(pFile);
            std::cout << "Viajes en colectivo: " << qtyViajesColectivo << std::endl;
            std::cout << "Viajes en tren: " << qtyViajesTren << std::endl;
            std::cout << "Viajes en subte: " << qtyViajesTren << std::endl;
            setMensaje("El punto ha ha sido resuelto exitosamente.");
        }
    } else {
        setMensaje("El numero de tarjeta es inexistente.");
    }


}

bool Menu::verificarTarjetaExistente(char* numeroTarjeta) {
    Tarjeta tarjeta;
    bool tarjetaEncontrada = false;
    FILE* pFile;

    pFile = fopen("tarjetas.dat", "rb");
    if (pFile != nullptr) {
        while(fread(&tarjeta, sizeof(Tarjeta), 1, pFile) == 1) {
            if (strcmp(tarjeta.getNumeroTarjeta().c_str(), numeroTarjeta) == 0) {
                tarjetaEncontrada = true;
                break;
            }
        }
        fclose(pFile);
    }

    return tarjetaEncontrada;
}

void Menu::puntoB() {
    Viaje viajeAcual;
    Viaje viajeAux;
    FILE* pFile;
    bool isSuccesfull = false;

    pFile = fopen("viajes.dat", "rb");
    if (pFile != nullptr) {
        fread(&viajeAux, sizeof(Viaje), 1, pFile);
        while(fread(&viajeAcual, sizeof(Viaje), 1, pFile) == 1) {
            if (viajeAcual.getImporte() < viajeAux.getImporte()) {
                viajeAux = viajeAcual;
            }
        }
        fclose(pFile);
        isSuccesfull = true;
    }

    isSuccesfull ? setMensaje(viajeAux.toString()) : setMensaje("Ha ocurrido un error al realizar el punto B.");
}

void Menu::puntoC() {
    int mesMayorRecaudacion;
    float auxRecaudacion;
    float recaudacionPorMes[12] = {0};
    std::string meses[12] = {"enero", "febrero", "marzo", "abril", "mayo", "junio", "julio", "agosto", "septiembre", "octubre", "noviembre", "diciembre"};
    Viaje viajeActual;
    FILE* pFile;
    bool isSuccesfull = false;

    pFile = fopen("viajes.dat", "rb");
    if (pFile != nullptr) {
        while(fread(&viajeActual, sizeof(Viaje), 1, pFile) == 1) {
            if (viajeActual.getMedioTransporte() == 2) {
                recaudacionPorMes[viajeActual.getFechaViaje().getMes() -1] += viajeActual.getImporte();
            }
        }
        fclose(pFile);
        isSuccesfull = true;
    }

    auxRecaudacion = recaudacionPorMes[0];
    for (int i = 0; i < 12; i++) {
        if (recaudacionPorMes[i] < auxRecaudacion) {
            auxRecaudacion = recaudacionPorMes[i];
            mesMayorRecaudacion = i;
        }
    }

    isSuccesfull ? setMensaje("El mes con mayor recaudacion es " + meses[mesMayorRecaudacion]) : setMensaje("Ha ocurrido un error al calcular el punto C.");

}

