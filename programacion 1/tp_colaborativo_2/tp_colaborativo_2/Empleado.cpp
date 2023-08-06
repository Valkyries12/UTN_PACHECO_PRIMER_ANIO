#include <iostream>
#include "Empleado.h"
using namespace std;



int buscarIndicePorNumeroEmpleado(int nroEmpleado, int tam, Empleado arr[]) {
    int indice;
    for (int i = 0; i < tam; i++) {
        if (arr[i].numeroEmpleado == nroEmpleado) {
            indice = arr[i].numeroEmpleado;
            break;
        }
    }

    return indice;
};
