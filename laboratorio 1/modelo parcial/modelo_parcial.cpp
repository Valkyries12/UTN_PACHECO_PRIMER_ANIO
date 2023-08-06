#include <iostream>

using namespace std;

/*
Enunciado
LaraKart es un torneo que se realiza todos los años en la Ciudad de Buenos Aires.
 Durante el lapso de un día los participantes pueden dirigirse a la pista de karting y realizar el circuito. Luego de que haya terminado el torneo se anunciará al ganador de la competencia.

El organizador del torneo prevé que la edición 2023 tendrá una gran cantidad de participantes.
Cada participante realizará exactamente 4 vueltas a la pista de carrera, por cada vuelta de cada participante se registra:
Código de participante (entero)
Número de vuelta (1 a 4)
Tiempo empleado (en minutos)
Descalificado (1 - Sí; 0 - No)

La información se encuentra agrupada por código de participante y por cada participante la información de las vueltas se encuentra ordenada por número de vuelta (de menor a mayor).
Para indicar el fin de la carga de datos se ingresa un código de participante negativo.

Se pide calcular e informar






A)Informar el ganador de la competencia. El mismo es aquella persona que haya demorado menos tiempo en completar el circuito completo (las 4 vueltas) y nunca haya sido descalificado.
Informar el código de participante y el tiempo demorado.

NOTA: No habrá más de una persona que haya completado el circuito con el menor tiempo.

B)La cantidad total de participantes que hayan sido descalificados al menos una vez.

C)La cantidad total de participantes que no hayan sido descalificados en la última vuelta.

D)Por cada participante, el porcentaje de vueltas descalificadas y el porcentaje de vueltas no descalificadas.






*/

int main() {
    int codigoParticipante, numeroVuelta, tiempoEmpleado, descalificado, ganadorCodigoParticipante = -1, ganadorTiempo, minTiempo, acumTiempo = 0, cantidadDescalificados = 0, cantidadNoDescalificadosEnUltimaVuelta = 0;
    int porcenDescalificadas, porcenNoDescalificadas, cantVueltaDescalificada = 0, cantVueltaNoDescalificada = 0;
    const int VUELTAS = 4;
    bool esDescalificado = false;

    cout << "Codigo participante: ";
    cin >> codigoParticipante;

    while (codigoParticipante > 0) {

        for(int i = 1; i <= VUELTAS; i++) {
            cout << "Tiempo empleado: ";
            cin >> tiempoEmpleado;
            cout << "Descalificado? [1- Si, 2- No]: ";
            cin >> descalificado;

            acumTiempo += tiempoEmpleado;
            if (descalificado == 1) {
                esDescalificado = true;
                cantVueltaDescalificada++;
            } else {
                cantVueltaNoDescalificada++;
            }

            if (i == VUELTAS && descalificado == 2) {
                cantidadNoDescalificadosEnUltimaVuelta++;
            }
        }

        porcenDescalificadas = (cantVueltaDescalificada * 100) / VUELTAS;
        porcenNoDescalificadas = (cantVueltaNoDescalificada * 100) / VUELTAS;

        //Por cada participante, el porcentaje de vueltas descalificadas y el porcentaje de vueltas no descalificadas.
        cout << endl << endl << "=== Codigo participante " << codigoParticipante << " ===" << endl;
        cout << "% descalificado: " << porcenDescalificadas << endl;
        cout << "% NO descalificado: " << porcenNoDescalificadas << endl;


        if (esDescalificado) {
            cantidadDescalificados++;
        }

        if (ganadorCodigoParticipante == -1 || (!esDescalificado && acumTiempo < minTiempo)) {
            minTiempo = acumTiempo;
            ganadorTiempo = minTiempo;
            ganadorCodigoParticipante = codigoParticipante;
        }

        esDescalificado = false;
        acumTiempo = 0;
        cantVueltaDescalificada = 0;
        cantVueltaNoDescalificada = 0;

        cout << endl << endl << "Codigo participante: ";
        cin >> codigoParticipante;
    }

    cout << endl << "Saliendo...." << endl << endl;

    //A)Informar el ganador de la competencia. El mismo es aquella persona que haya demorado menos tiempo en completar el circuito completo (las 4 vueltas) y nunca haya sido descalificado. Informar el código de participante y el tiempo demorado.
    //NOTA: No habrá más de una persona que haya completado el circuito con el menor tiempo.
    cout << "Ganador numero participante: " << ganadorCodigoParticipante << endl;
    cout << "Ganador tiempo total: " << ganadorTiempo << endl;

    //La cantidad total de participantes que hayan sido descalificados al menos una vez
    cout << "Cantidad de descalificados: " << cantidadDescalificados << endl;

    //La cantidad total de participantes que no hayan sido descalificados en la última vuelta.
    cout << "Cantidad de participantes que no fueron descalificados en la ultima vuelta: " << cantidadNoDescalificadosEnUltimaVuelta << endl;



    return 0;
}
