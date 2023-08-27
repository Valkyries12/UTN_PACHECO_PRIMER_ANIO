#include <iostream>
#include "Persona.h"

//constructores y destructores
Persona::Persona()
{
    setNombre("Sin nombre");
    setApellido("Sin apellido");
}

Persona::Persona(std::string nombre, std::string apellido) {
    setNombre(nombre);
    setApellido(apellido);
}

Persona::~Persona()
{
    //dtor
}


//getters y setters
std::string Persona::getNombre() {
    return _nombre;
}

std::string Persona::getApellido() {
    return _apellido;
}

void Persona::setNombre(std::string nombre) {
    _nombre = nombre;
}

void Persona::setApellido(std::string apellido) {
    _apellido = apellido;
}
