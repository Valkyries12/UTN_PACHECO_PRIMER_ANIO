#include <iostream>
#include <cstring>
#include "Empresa.h"

//constrcutores y destructores
Empresa::Empresa()
{
    //ctor
}

Empresa::Empresa(int numeroEmpresa, const char* nombre, int cantidadEmpleados, int categoria, int codigoMunicipio, bool estado) {
    setNumeroEmpresa(numeroEmpresa);
    setNombre(nombre);
    setCantidadEmpleados(cantidadEmpleados);
    setCategoria(categoria);
    setCodigoMunicipio(codigoMunicipio);
    setEstado(estado);
}


Empresa::~Empresa()
{
    //dtor
}


//getters y setters
int Empresa::getNumeroEmpresa() const {
    return _numeroEmpresa;
}

void Empresa::setNumeroEmpresa(int numeroEmpresa) {
    _numeroEmpresa = numeroEmpresa;
}

std::string Empresa::getNombre() const {
    return _nombre;
}

void Empresa::setNombre(const std::string nombre) {
    strcpy(_nombre, nombre.c_str());
}

int Empresa::getCantidadEmpleados() const {
    return _cantidadEmpleados;
}

void Empresa::setCantidadEmpleados(int cantidadEmpleados) {
    _cantidadEmpleados = cantidadEmpleados;
}

int Empresa::getCategoria() const {
    return _categoria;
}

void Empresa::setCategoria(int categoria) {
    _categoria = 0;
    if (categoria > 0 && categoria < 81 ) {
        _categoria = categoria;
    }
}

int Empresa::getCodigoMunicipio() const {
    return _codigoMunicipio;
}

void Empresa::setCodigoMunicipio(int codigoMunicipio) {
    _codigoMunicipio = 0;
    if (codigoMunicipio > 0 && codigoMunicipio < 136 ) {
        _codigoMunicipio = codigoMunicipio;
    }
}

bool Empresa::getEstado() const {
    return _estado;
}

void Empresa::setEstado(bool estado) {
    _estado = estado;
}

//metodos
std::string Empresa::toString() const {
    return std::to_string(getNumeroEmpresa()) + ", " + getNombre() + ", " + std::to_string(getCantidadEmpleados()) + ", " + std::to_string(getCategoria()) + ", " + std::to_string(getCodigoMunicipio()) + ", " + std::to_string(getEstado());
}

void Empresa::mostrarEmpresa() const {
    std::cout << this->toString() << std::endl;
}



