#include <iostream>

using namespace std;

/*
Hacer un programa que permita ingresar el legajo y sueldo de 10 empleados y determine:
El legajo del empleado con mayor sueldo

*/


int main() {
    int legajo, sueldo, mayorSueldo, legajoMayorSueldo;

    for (int i = 0; i < 5; i++) {
        cout << "Ingrese el legajo del " << i+1 << " empleado: ";
        cin >> legajo;
        cout << "Ingrese el sueldo del " << i+1 << " empleado: ";
        cin >> sueldo;

        if (i == 0) {
            mayorSueldo = sueldo;
            legajoMayorSueldo = legajo;
        }

        if (sueldo > mayorSueldo) {
            mayorSueldo = sueldo;
            legajoMayorSueldo = legajo;
        }
    }

    cout << "Legajo mayor sueldo: " << legajoMayorSueldo;
    return 0;
}
