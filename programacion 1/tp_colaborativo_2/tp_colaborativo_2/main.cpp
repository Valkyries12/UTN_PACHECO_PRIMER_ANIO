#include <iostream>
#include "Empleado.h"
#include "DiaDeTrabajo.h"
using namespace std;
/*
Una fábrica cuenta con un lote de registros con los datos de los empleados que trabajan en la misma, cada registro contiene:

- Número de empleado (3 dígitos, no correlativos).
- Categoría (1 a 20).
- Antigüedad.

Este lote se encuentra ordenado por empleado en forma ascendente (de menor a mayor) y finaliza con un registro con categoría igual a cero.
La empresa cuenta como máximo con 200 empleados. Existe un segundo lote con la información de los días trabajados por los empleados durante el mes de anterior, cada registro contiene:

- Día (1 a 31).
- Número de empleado (3 dígitos, no correlativos).
- Cantidad de horas trabajadas ese día (entero).
- Jornal cobrado ese día.

Este lote finaliza con un registro con número de empleado igual a cero. Se generó un registro por cada día trabajado por cada empleado; los días no trabajados no tienen registro.
Se pide determinar e informar:

a. Para cada número de empleado informar el día del mes que más horas trabajó.
b. Para cada número de empleado informar el total a cobrar, tener en cuenta que a los empleados que hayan trabajado más de 20 días se le debe adicionar un premio de $200.
c. Informar cual es el número de categoría por la cual se haya pagado mayor cantidad de pesos en sueldos.
*/
int main()
{
    int categoria, numeroEmpleado, antiguedad, indiceEmpleados = 0;
    int dia, horasTrabajadas;
    float jornalCobrado;
    Empleado empleados[199];


    cout << "Categoria [1 al 20]: ";
    cin >> categoria;

    while (categoria != 0 || indiceEmpleados < 200) {
        empleados[indiceEmpleados].categoria = categoria;
        cout << "Numero de empleado: ";
        cin >> numeroEmpleado;
        empleados[indiceEmpleados].numeroEmpleado = numeroEmpleado;
        cout << "Antiguedad: ";
        cin >> antiguedad;
        empleados[indiceEmpleados].antiguedad = antiguedad;




        indiceEmpleados++;
        cout << "Categoria [1 al 20]: ";
        cin >> categoria;
        empleados[indiceEmpleados].categoria = categoria;
    }


    cout << endl << endl << endl << "Numero de empleado: ";
    cin >> numeroEmpleado;

    while (numeroEmpleado != 0) {
        indiceEmpleados = buscarIndicePorNumeroEmpleado(numeroEmpleado, 200, empleados);
        //aca obtengo el indice el arr de empleados y poder poner el dia,hora y cobro en empleado correspondiente
        cout << "Dia [1 a 31]: ";
        cin >> dia;
        empleados[indiceEmpleados].diasTrabajados[dia-1].dia = dia;
        cout << "Horas trabajadas: ";
        cin >> horasTrabajadas;
        empleados[indiceEmpleados].diasTrabajados[dia-1].horasTrabajadas = horasTrabajadas;
        cout << "Jornal cobrado: ";
        cin >> jornalCobrado;
        empleados[indiceEmpleados].diasTrabajados[dia-1].jornalCobrado = jornalCobrado;

        cout << "Numero de empleado: ";
        cin >> numeroEmpleado;
    }
    return 0;
}
