#include <iostream>

using namespace std;

/*
Se dispone de la información de los exámenes rendidos por algunos estudiantes de la UTN FRGP. Por cada registro de examen se conoce:
Legajo del estudiante (entero)
Código de materia (entero)
Nota (float)

La finalización de la carga de datos se indica con un legajo de estudiante mayor a 30000.  Calcular e informar:
La nota promedio entre todos los estudiantes.
El legajo del estudiante con menor nota.
La cantidad de exámenes rendidos para la materia 10.
El porcentaje de aprobados y no aprobados.

NOTA: Un examen se considera aprobado con nota >= 6
NOTA: Si hay varios estudiantes con la menor nota. Informar el primero de ellos.

*/

int main() {
    int legajoEstudiante, codigoMateria, cantidadEstudiantes = 0, cantidadExamenesMateria10 = 0, legajoMenorNota, cantidadAprobados = 0, cantidadDesaprobados = 0, porcentageAprobados, porcentageDesaprobados;
    float nota, notaPromedio = 0, menorNota;
    bool yaPaso = false;

    /*cout << "Legajo estudiante: ";
    cin >> legajoEstudiante;
    cout << "Codigo materia: ";
    cin >> codigoMateria;
    cout << "nota: ";
    cin >> nota;*/

    do {
        cout << "Legajo estudiante: ";
        cin >> legajoEstudiante;
        cout << "Codigo materia: ";
        cin >> codigoMateria;
        cout << "nota: ";
        cin >> nota;

        notaPromedio += nota;
        cantidadEstudiantes++;
        if (!yaPaso) {
            yaPaso = true;
            menorNota = nota;
            legajoMenorNota = legajoEstudiante;
        } else {
            //El legajo del estudiante con menor nota.
            if (nota < menorNota) {
                menorNota = nota;
                legajoMenorNota = legajoEstudiante;
            }
            //La cantidad de exámenes rendidos para la materia 10.
            if (codigoMateria == 10) {
                cantidadExamenesMateria10++;
            }

            if (nota >= 6) {
                cantidadAprobados++;
            } else {
                cantidadDesaprobados++;
            }
        }


    } while (legajoEstudiante <= 30000);

    //La nota promedio entre todos los estudiantes.
    notaPromedio /= cantidadEstudiantes;

    porcentageAprobados = (cantidadAprobados * 100) / cantidadEstudiantes;
    porcentageDesaprobados = (cantidadDesaprobados * 100) / cantidadEstudiantes;

    cout << "Nota promedio: " << notaPromedio << endl;
    //El legajo del estudiante con menor nota.
    cout << "Legajo estudiante con menor nota: " << legajoMenorNota << endl;
    //La cantidad de exámenes rendidos para la materia 10.
    cout << "Cantidad examenes para la materia 10: " << cantidadExamenesMateria10 << endl;
    //El porcentaje de aprobados y no aprobados
    cout << "Porcentage aprobados: " << porcentageAprobados << endl;
    cout << "Porcentaje desaprobados: " << porcentageDesaprobados << endl;
    return 0;
}
