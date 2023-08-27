#include <iostream>
#include "Reunion.h"
#include "../Persona.h"
#include "cstring"

//constructores y destructores
Reunion::Reunion()
{
    /*_fecha = Fecha(1, 1, 1900);
    _horario = Horario(0, 0, 0);
    _lugar = Lugar();
    _tema = Tema();
    _duracion = Duracion();*/
    setFecha(Fecha(1, 1, 1900));
    setHorario(Horario(0, 0, 0));
    setLugar(Lugar());
    setTema(Tema());
    setDuracion(Duracion());
}

Reunion::Reunion(Fecha fecha, Horario horario, Lugar lugar, Tema tema, Duracion duracion) {
    setFecha(fecha);
    setHorario(horario);
    setLugar(lugar);
    setTema(tema);
    setDuracion(duracion);
}


Reunion::~Reunion()
{
    //dtor
}


//getters y setters
Fecha Reunion::getFecha() {
    return _fecha;
}

void Reunion::setFecha(Fecha fecha) {
    _fecha = fecha;
}

Horario Reunion::getHorario() {
    return _horario;
}

void Reunion::setHorario(Horario horario) {
    _horario = horario;
}

Lugar Reunion::getLugar() {
    return _lugar;
}

void Reunion::setLugar(Lugar lugar) {
    _lugar = lugar;
}

Tema Reunion::getTema() {
    return _tema;
}

void Reunion::setTema(Tema tema) {
    _tema = tema;
}

Duracion Reunion::getDuracion() {
    return _duracion;
}

void Reunion::setDuracion(Duracion duracion) {
    _duracion = duracion;
}

Persona* Reunion::getIntegrantes() {
    return _integrantes;
}


//metodos
void Reunion::agregarPersona(Persona persona) {
    int cantidadParticipantes = contarParticipantes();
    int indice = cantidadParticipantes;
    if (cantidadParticipantes < 6) {
        _integrantes[indice] = persona;
    } else {
        std::cout << "No se pueden agregar mas personas.";
    }
}

int Reunion::contarParticipantes() {
    int qtyParticipantes = 0;
    std::string nombreActual;

    for (int i = 0; i < 6; i++) {
        nombreActual = _integrantes[i].getNombre();
        if (nombreActual != "Sin nombre") {
            qtyParticipantes++;
        }
    }

    return qtyParticipantes;
}

Persona Reunion::obtenerPersona(int indice) {
    return _integrantes[indice];
}



