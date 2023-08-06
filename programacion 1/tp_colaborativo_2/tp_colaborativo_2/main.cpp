#include <iostream>
#include "Empleado.h"
#include "DiaDeTrabajo.h"
using namespace std;
/*
Una f�brica cuenta con un lote de registros con los datos de los empleados que trabajan en la misma, cada registro contiene:

- N�mero de empleado (3 d�gitos, no correlativos).
- Categor�a (1 a 20).
- Antig�edad.

Este lote se encuentra ordenado por empleado en forma ascendente (de menor a mayor) y finaliza con un registro con categor�a igual a cero.
La empresa cuenta como m�ximo con 200 empleados. Existe un segundo lote con la informaci�n de los d�as trabajados por los empleados durante el mes de anterior, cada registro contiene:

- D�a (1 a 31).
- N�mero de empleado (3 d�gitos, no correlativos).
- Cantidad de horas trabajadas ese d�a (entero).
- Jornal cobrado ese d�a.

Este lote finaliza con un registro con n�mero de empleado igual a cero. Se gener� un registro por cada d�a trabajado por cada empleado; los d�as no trabajados no tienen registro.
Se pide determinar e informar:

a. Para cada n�mero de empleado informar el d�a del mes que m�s horas trabaj�.
b. Para cada n�mero de empleado informar el total a cobrar, tener en cuenta que a los empleados que hayan trabajado m�s de 20 d�as se le debe adicionar un premio de $200.
c. Informar cual es el n�mero de categor�a por la cual se haya pagado mayor cantidad de pesos en sueldos.
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
