#include <iostream>
#include "Lugar.h"

//constructores y destructores
Lugar::Lugar()
{
    //ctor
    setPuntoDeEncuentro("No especificado.");
}

Lugar::Lugar(std::string lugar) {
    setPuntoDeEncuentro(lugar);
}

Lugar::~Lugar()
{
    //dtor
}


//getters y setters
std::string Lugar::getPuntoDeEncuentro() {
    return _puntoDeEncuentro;
}

void Lugar::setPuntoDeEncuentro(std::string lugar) {
    _puntoDeEncuentro = lugar;
}
