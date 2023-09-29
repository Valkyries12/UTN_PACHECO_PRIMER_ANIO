#include <iostream>
#include "cstring"

#include "Tarjeta.h"
#include "Fecha.h"

Tarjeta::Tarjeta()
{
    //ctor
}

Tarjeta::Tarjeta(std::string numeroTarjeta, int dia, int mes, int anio, std::string dniDuenio, float saldo) {
    setNumeroTarjeta(numeroTarjeta);
    setFechaAlta(dia, mes, anio);
    setDniDuenio(dniDuenio);
    setSaldo(saldo);
    setEstado(true);
}

Tarjeta::~Tarjeta()
{
    //dtor
}



std::string Tarjeta::getNumeroTarjeta() const {
    return _numeroTarjeta;
}

void Tarjeta::setNumeroTarjeta(std::string numeroTarjeta) {
    strcpy(_numeroTarjeta, numeroTarjeta.c_str());
}

Fecha Tarjeta::getFechaAlta() const {
    return _fechaAlta;
}

void Tarjeta::setFechaAlta(int dia, int mes, int anio) {
    _fechaAlta = Fecha(dia, mes, anio);
}

std::string Tarjeta::getDniDuenio() const {
    return _dniDuenio;
}

void Tarjeta::setDniDuenio(std::string dniDuenio) {
    strcpy(_dniDuenio, dniDuenio.c_str());
}

float Tarjeta::getSaldo() const {
    return _saldo;
}

void Tarjeta::setSaldo(float saldo) {
    _saldo = saldo;
}

bool Tarjeta::getEstado() const {
    return _estado;
}

void Tarjeta::setEstado(bool estado) {
    _estado = estado;
}
