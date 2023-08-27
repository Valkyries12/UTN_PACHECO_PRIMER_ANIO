#include <iostream>
#include "Tema.h"

//constructores y destructores
Tema::Tema()
{
    setContenido("No definido");
}

Tema::Tema(std::string contenido) {
    setContenido(contenido);
}


Tema::~Tema()
{
    //dtor
}

//getters y setters
std::string Tema::getContenido() {
    return _contenido;
}

void Tema::setContenido(std::string contenido) {
    _contenido = contenido;
}
