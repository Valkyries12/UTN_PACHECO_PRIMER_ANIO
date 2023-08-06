#ifndef EMPLEADO_H_INCLUDED
#define EMPLEADO_H_INCLUDED

#include "DiaDeTrabajo.h"

typedef struct {
    int numeroEmpleado = 0;
    int categoria = 0;
    int antiguedad = 0;
    DiaDeTrabajo diasTrabajados[31];
} Empleado;


int buscarIndicePorNumeroEmpleado(int nroEmpleado, int tam, Empleado arr[]);
#endif // EMPLEADO_H_INCLUDED
