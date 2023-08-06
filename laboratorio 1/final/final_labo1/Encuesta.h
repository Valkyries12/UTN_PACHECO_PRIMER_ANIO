#ifndef ENCUESTA_H_INCLUDED
#define ENCUESTA_H_INCLUDED

#include <iostream>
using namespace std;

typedef struct {
    int numeroEncuesta = -1;
    int edad = -1;
    int paisResidencia = -1;
    int gradoSatisfaccion = -1;
    int idSistemaOperativo = -1;
    int tiempoJugado = -1;
} Encuesta;


void Punto1(Encuesta arr[], int longitud);
int calcularEncuestadosJugaronEntreUnaYTresHoras(Encuesta arr[], int longitud);
int Punto3(Encuesta arr[], bool paises[], int longitud);

#endif // ENCUESTA_H_INCLUDED
