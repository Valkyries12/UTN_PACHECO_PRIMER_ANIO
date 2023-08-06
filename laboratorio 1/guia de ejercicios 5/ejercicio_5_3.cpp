#include <iostream>

using namespace std;

/*
Una empresa tiene 50 empleados que trabajaron durante 7 días hábiles. Se confecciona una serie de registros con el objeto de controlar la asistencia de sus empleados.
Hay un primer registro por empleado que contiene:
- Nro. de Legajo
- Cantidad de horas teóricas a trabajar por semana

A continuación de este registro, siete registros más, uno por cada uno de los 7 días con los siguientes datos:
- Hora de entrada (entero)
- Hora de salida (entero)

El día que falta el empleado se ingresa cero en la hora de entrada y salida respectivamente.

Después de estos siete registros aparece nuevamente un registro de otro empleado seguido por los registros de los días trabajados por este último y así hasta el último empleado.

Realizar un programa que ingresando los datos indicados determine e informe:
a) Los nros. de legajo de los empleados que faltaron algún día en la semana.
b) Para cada empleado indicar con una leyenda aclaratoria si trabajó de más, igual o de menos a las horas teóricas que tiene asignadas en la semana.

*/


int main() {
    int numeroLegajo, horasTeoricasXSemana, horaEntrada, horaSalida;
    int nroLegajoFaltoEnLaSemana, horasTrabajadas = 0;
    const int CANTIDAD_EMPLEADOS = 50, DIAS_HABILES = 7;
    string msjAclaratorio;
    bool haFaltado = false;

    for (int nroEmpleado = 1; nroEmpleado <= CANTIDAD_EMPLEADOS; nroEmpleado++) {
        cout << endl << endl << "Empleado Nro " << nroEmpleado << endl;
        cout << "Numero de legajo: ";
        cin >> numeroLegajo;
        cout << "Cantidad de horas teoricas a trabajar: ";
        cin >> horasTeoricasXSemana;

        for (int dia = 1; dia <= DIAS_HABILES; dia++) {
            cout << endl << "Dia " << dia << endl;
            cout << "Hora de entrada: ";
            cin >> horaEntrada;
            cout << "Hora de salida: ";
            cin >> horaSalida;

            horasTrabajadas += horaSalida - horaEntrada;

            if (horaEntrada == 0 || horaSalida == 0) {
                haFaltado = true;
                nroLegajoFaltoEnLaSemana = numeroLegajo;
            }

            if (horasTrabajadas == horasTeoricasXSemana) {
                msjAclaratorio = "Trabajo el mismo tiempo que las horas teoricas.";
            } else if (horasTrabajadas > horasTeoricasXSemana) {
                msjAclaratorio = "Trabajo mas tiempo que las horas teoricas.";
            } else {
                msjAclaratorio = "Trabajo menos que las horas teoricas.";
            }
        }
        cout << endl << endl << "RESULTADO Empleado Nro " << nroEmpleado << endl << endl;
        if (haFaltado) {
            cout << nroLegajoFaltoEnLaSemana << " falto en la semana." << endl;
            haFaltado = false;
        }
        cout << "Trabajo horas " << horasTrabajadas << endl;
        cout << msjAclaratorio << endl;
        horasTrabajadas = 0;
    }

    return 0;
}
