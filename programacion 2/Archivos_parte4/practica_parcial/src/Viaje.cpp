#include <iostream>
#include "cstring"

#include "Viaje.h"
#include "Fecha.h"

int Viaje::_numeroViaje = 0;

Viaje::Viaje()
{
    //ctor
}

Viaje::Viaje(std::string numeroTarjeta, int medioTransporte, int dia, int mes, int anio) {
    _numeroViaje++;
    setNumeroTarjeta(numeroTarjeta);
    setMedioTransporte(medioTransporte);
    setFechaViaje(dia, mes, anio);
    setEstado(true);
}

Viaje::~Viaje()
{
    //dtor
}


//getters y setters
int Viaje::getNumeroViaje() const {
    return _numeroViaje;
}

void Viaje::setNumeroViaje(int numeroViaje) {
    _numeroViaje = numeroViaje;
}

std::string Viaje::getNumeroTarjeta() const {
    return _numeroTarjeta;
}

void Viaje::setNumeroTarjeta(std::string numeroTarjeta) {
    strcpy(_numeroTarjeta, numeroTarjeta.c_str());
}

int Viaje::getMedioTransporte() const {
    return _medioTransporte;
}

void Viaje::setMedioTransporte(int medioTransporte) {
    _medioTransporte = medioTransporte;
}

Fecha Viaje::getFechaViaje() const {
    return _fechaViaje;
}

void Viaje::setFechaViaje(int dia, int mes, int anio) {
    _fechaViaje = Fecha(dia, mes, anio);
}

float Viaje::getImporte() const {
    return _importe;
}

void Viaje::setImporte(float importe) {
    _importe = importe;
}

bool Viaje::getEstado() const {
    return _estado;
}

void Viaje::setEstado(bool estado) {
    _estado = estado;
}

//metodos
void Viaje::calcularImporte() {
    switch(_medioTransporte) {
        case 1:
            //colectivo
            setImporte(50);
            break;
        case 2:
            //subte
            setImporte(60);
            break;
        case 3:
            //tren
            setImporte(40);
            break;
    }
}

std::string Viaje::toString() {
    return getNumeroTarjeta() + ", " + std::to_string(getMedioTransporte()) + ", " + getFechaViaje().toString() + ", " + std::to_string(getImporte()) + ", " + std::to_string(getEstado());
}
