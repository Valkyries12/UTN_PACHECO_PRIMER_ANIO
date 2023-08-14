#include <iostream>
#include "Vaso.h"

Vaso::Vaso() {

}

Vaso::Vaso(int codigo, float capacidad)
{
    setCodigo(codigo);
    setCapacidad(capacidad);
}

Vaso::~Vaso()
{
    //dtor
}



//getters y setters
void Vaso::setCodigo(int codigo) {
    if (codigo > 0) {
        _codigo = codigo;
    } else {
        _codigo = 0;
    }
}

void Vaso::setCapacidad(float capacidad) {
    if (capacidad > 0) {
        _capacidad = capacidad;
    } else {
        _capacidad = 150;
    }
}

int Vaso::getCodigo() {
    return _codigo;
}

float Vaso::getCapacidad() {
    return _capacidad;
}
