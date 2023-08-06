#include <iostream>

using namespace std;

/*
La clínica San Simón Protector dispone de la información de los últimos turnos de sus enfermeros/as.
Por cada turno trabajado por un enfermero se registró la siguiente información:
Legajo del enfermero/a (entero entre 1000 y 15000)
Número de turno (entero)
Horario ('M' - Mañana, 'T' - Tarde, 'N' - Noche)
Cantidad de horas trabajadas en el turno (entero mayor a cero)

La información se encuentra agrupada por legajo de enfermero. No todos los enfermeros trabajaron la misma cantidad de turnos.
Para indicar el fin de los registros de un enfermero se ingresa un número de turno igual a cero. Para indicar el fin del lote de datos se ingresa un legajo de enfermero negativo.

Notas
Cada turno consiste en 8 horas. Las horas excedentes se consideran horas extras.
Por ejemplo: Si un enfermero trabajó 12 horas en un turno, realizó 8 hs regulares y 4 hs extra. En cambio, si trabajó 6 horas en un turno: realizó 6 hs regulares y 0 hs extra.


Se pide hacer un programa en C++ para calcular e informar


A)Por cada enfermero, el promedio de horas trabajadas por turno en el horario de la noche.
B)La cantidad total de horas extras realizadas entre todos los enfermeros.
C)La cantidad de enfermeros que realizaron al menos un turno en los tres horarios (mañana, tarde y noche).
D)El horario (mañana, tarde o noche) que haya registrado menor cantidad de horas trabajadas

Aclaraciones

Sólo habrá un horario que haya registrado la menor cantidad de horas trabajadas.


*/

int main() {
    int legajoEnfermero, nroTurno, cantidadHorasTrabajadas;
    int promedioHorasDeNoche, totalHorasTrabajadasNoche = 0, totalHorasTrabajadasNocheBis = 0, totalHorasTrabajadasManiana = 0, totalHorasTrabajadasTarde = 0, cantTurnosNoche = 0, totalHorasExtras = 0, cantEnfermerosTrabajaronTodosTurnos = 0, minTurnoTrabajado;
    char horario, horarioMenorTrabajado;
    bool trabajoEnNoche = false, trabajoEnManiana = false, trabajoEnTarde = false, yaPaso = false;

    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl << endl;

    cout << "Legajo enfermero [entre 1000 y 15000]: ";
    cin >> legajoEnfermero;

    while (legajoEnfermero >= 0) {
        cout << "=== LEGAJO " << legajoEnfermero << " ===" << endl;
        cout << endl << "Numero de turno: ";
        cin >> nroTurno;

        while (nroTurno != 0) {
            cout << "Horario" << endl;
            cout << "M- Mañana" << endl;
            cout << "T- Tarde" << endl;
            cout << "N- Noche" << endl << endl;
            cout << "Ingrese una opcion: ";
            cin >> horario;
            cout << "Cantidad de horas trabajadas: ";
            cin >> cantidadHorasTrabajadas;

            if (!yaPaso) {
                minTurnoTrabajado = cantidadHorasTrabajadas;
                horarioMenorTrabajado = horario;
                yaPaso = true;
            }

            if (cantidadHorasTrabajadas > 8) {
                totalHorasExtras += cantidadHorasTrabajadas - 8;
            }

            switch (horario) {
                case 'M':
                    trabajoEnManiana = true;
                    totalHorasTrabajadasManiana += cantidadHorasTrabajadas;
                    break;
                case 'T':
                    trabajoEnTarde = true;
                    totalHorasTrabajadasTarde += cantidadHorasTrabajadas;
                    break;
                case 'N':
                    trabajoEnNoche = true;
                    totalHorasTrabajadasNoche += cantidadHorasTrabajadas;
                    totalHorasTrabajadasNocheBis += cantidadHorasTrabajadas;
                    cantTurnosNoche++;
                    break;
            }


            cout << endl << "Numero de turno: ";
            cin >> nroTurno;
        }

        //A)Por cada enfermero, el promedio de horas trabajadas por turno en el horario de la noche.
        if (cantTurnosNoche > 0) {
            cout << endl << "Promedio de horas trabajadas en turno noche: " << totalHorasTrabajadasNoche / cantTurnosNoche << endl;
        }

        totalHorasTrabajadasNoche = 0;
        cantTurnosNoche = 0;

        if (trabajoEnManiana && trabajoEnTarde && trabajoEnNoche) {
            cantEnfermerosTrabajaronTodosTurnos++;
        }
        trabajoEnManiana = false;
        trabajoEnTarde = false;
        trabajoEnNoche = false;

        cout << endl << "Legajo enfermero [entre 1000 y 15000]: ";
        cin >> legajoEnfermero;
    }

    if (totalHorasTrabajadasManiana < totalHorasTrabajadasTarde && totalHorasTrabajadasTarde < totalHorasTrabajadasNoche) {
        minTurnoTrabajado = totalHorasTrabajadasManiana;
        horarioMenorTrabajado = 'M';
    } else {
        if (totalHorasTrabajadasNoche < totalHorasTrabajadasTarde && totalHorasTrabajadasTarde < totalHorasTrabajadasManiana) {
            minTurnoTrabajado = totalHorasTrabajadasNocheBis;
            horarioMenorTrabajado = 'N';
        } else {
            minTurnoTrabajado = totalHorasTrabajadasTarde;
            horarioMenorTrabajado = 'T';
        }
    }


    //B)La cantidad total de horas extras realizadas entre todos los enfermeros.
    cout << endl <<"Cantidad total de horas extras realizadas entre todos los enfermeros: " << totalHorasExtras << endl;
    //C)La cantidad de enfermeros que realizaron al menos un turno en los tres horarios (mañana, tarde y noche).
    if (cantEnfermerosTrabajaronTodosTurnos > 0) {
        cout << "Cantidad enfermeros que trabajaron todos los turnos: " << cantEnfermerosTrabajaronTodosTurnos << endl;
    }
    //D)El horario (mañana, tarde o noche) que haya registrado menor cantidad de horas trabajadas
    cout << "El horario que registro menos horas es el: " << horarioMenorTrabajado << " con " << minTurnoTrabajado << " Horas";


    cout << endl << endl << endl << "=== FIN DEL PROGRAMA ===";
    return 0;
}
