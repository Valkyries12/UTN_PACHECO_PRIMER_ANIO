#include <iostream>
#include "Bidon.h"

/**********************************/
/***constructores y destructores***/
/**********************************/
Bidon::Bidon() {

}

Bidon::Bidon(int codigo, std::string sabor, float mLitros)
{
    setCodigo(codigo);
    _sabor = sabor;
    setLitros(mLitros);
    _cantidadVendida = 0;
}

Bidon::~Bidon()
{
    //dtor
}


/**********************************/
/*********getters y setters********/
/**********************************/
void Bidon::setCodigo(int codigo) {
    if (codigo > 0) {
        _codigo = codigo;
    } else {
        _codigo = 0;
    }
}

void Bidon::setSabor(std::string sabor) {
    _sabor = sabor;
}

void Bidon::setLitros(float mLitros) {
    if (mLitros > 0) {
        _litros = mLitros;
    } else {
        _litros = 0;
    }
}

void Bidon::setCantidadVendida(int cantidad) {
    if (cantidad > 0) {
        _cantidadVendida = cantidad;
    } else {
        _cantidadVendida = 0;
    }
}

int Bidon::getCodigo() {
    return _codigo;
}

std::string Bidon::getSabor() {
    return _sabor;
}

float Bidon::getLitros() {
    return _litros;
}

int Bidon::getCantidadVendida() {
    return _cantidadVendida;
}


/**********************************/
/*************Metodos**************/
/**********************************/
void Bidon::servirBatido(Vaso vaso) {
    _litros -= vaso.getCapacidad();
}
