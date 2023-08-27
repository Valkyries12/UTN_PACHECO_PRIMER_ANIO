#include <iostream>
#include "Duracion.h"

//constructores y destructores
Duracion::Duracion()
{
    setMinutos(0);
}

Duracion::Duracion(int minutos) {
    setMinutos(minutos);
}

Duracion::~Duracion()
{
    //dtor
}


//getters y setters
int Duracion::getMinutos() {
    return _minutos;
}

void Duracion::setMinutos(int minutos) {
    _minutos = minutos;
}
