#include <iostream>
#include "Reunion.h"

using namespace std;


void mostrarParticipantesDeReunionMasLarga(Reunion* arr, int len);

int main()
{
    const int LONGITUD = 6;
    Reunion reuniones[LONGITUD];

    //cout << reuniones[0].contarParticipantes();
    reuniones[0] = Reunion(Fecha(01, 10, 2023), Horario(00, 00, 19), Lugar("Buenos Aires"), Tema("Programacion en C++"), Duracion(90));
    reuniones[0].agregarPersona(Persona("Brian", "Lara"));
    reuniones[0].agregarPersona(Persona("Angel", "Simon"));

    reuniones[1] = Reunion(Fecha(01, 04, 2023), Horario(00, 00, 19), Lugar("Internet"), Tema("Estadistica y programacion"), Duracion(100));
    reuniones[1].agregarPersona(Persona("Maxi", "Wenner"));

    reuniones[2] = Reunion(Fecha(20, 11, 2023), Horario(00, 00, 23), Lugar("Discord"), Tema("Goto Gamejam 2023"), Duracion(0));
    reuniones[2].agregarPersona(Persona("Brian", "Lara"));

    reuniones[3] = Reunion(Fecha(1, 03, 2024), Horario(00, 00, 18), Lugar("Buenos Aires"), Tema("Bases de Datos con SQL"), Duracion(60));
    reuniones[3].agregarPersona(Persona("Laura", "Velez"));
    reuniones[3].agregarPersona(Persona("Angel", "Simon"));

    reuniones[4] = Reunion(Fecha(1, 10, 2023), Horario(00, 00, 18), Lugar("Discord"), Tema("C#"), Duracion(50));
    reuniones[4].agregarPersona(Persona("Maxi", "Sar"));

    reuniones[5] = Reunion(Fecha(5, 11, 2023), Horario(00, 00, 21), Lugar("Steam"), Tema("Torneo de Age of Empires"), Duracion(80));
    reuniones[5].agregarPersona(Persona("Brian", "Lara"));
    reuniones[5].agregarPersona(Persona("Angel", "Simon"));
    reuniones[5].agregarPersona(Persona("Maxi", "Sar"));
    reuniones[5].agregarPersona(Persona("Maxi", "Wenner"));
    reuniones[5].agregarPersona(Persona("Maxi", "Sar"));
    reuniones[5].agregarPersona(Persona("Maxi", "Wenner"));

    mostrarParticipantesDeReunionMasLarga(reuniones, LONGITUD);
    return 0;
}


void mostrarParticipantesDeReunionMasLarga(Reunion* arr, int len) {
    /*Reunion reunionActual;
    Reunion reunionMaxDuracion;
    int maxDuracion = 0;
    int duracionActual;
    int longitudReunion;

    for (int i = 0; i < len; i++) {
        reunionActual = arr[i];
        duracionActual = reunionActual.getDuracion().getMinutos();
        if (duracionActual > maxDuracion) {
            maxDuracion = duracionActual;
            reunionMaxDuracion = reunionActual;
        }
    }

    longitudReunion = reunionMaxDuracion.contarParticipantes();
    cout << longitudReunion << endl;

    for (int i = 0; i < longitudReunion; i++) {
        cout << reunionMaxDuracion.getIntegrantes()[i].getNombre() << " " << reunionMaxDuracion.getIntegrantes()[i].getApellido() << endl;
    }*/
}
