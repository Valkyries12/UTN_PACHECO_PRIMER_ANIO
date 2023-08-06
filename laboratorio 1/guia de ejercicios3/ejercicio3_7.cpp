#include <iostream>

using namespace std;

/*Hacer un programa que permita ingresar el sueldo de 10 empleados y determine:
El sueldo máximo.
El sueldo mínimo.
El sueldo promedio.
Cantidad de sueldos mayores a $50000.
*/

int main() {
    int maximo, minimo, promedio, sueldo, totalSueldos = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese el sueldo del " << i +1 << " empleado: ";
        cin >> sueldo;

        totalSueldos += sueldo;
        if (i == 0) {
            maximo = sueldo;
            minimo = sueldo;
        }

        if (sueldo > maximo) {
            maximo = sueldo;
        }
        if (sueldo < minimo) {
            minimo = sueldo;
        }
    }

    promedio = totalSueldos / 10;

    cout << "Maximo: " << maximo << endl;
    cout << "Minimo: " << minimo << endl;
    cout << "Promedio: " << promedio << endl;
    return 0;
}
