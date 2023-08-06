#include <iostream>

using namespace std;

/*
En una empresa los empleados cobran un sueldo según la categoría a la que pertenecen. Son 50 empleados y los sueldos son:

Categoría 1: $38000
Categoría 2: $70000
Categoría 3: $105000

Al sueldo se le suma además $ 1200 por cada año trabajado. Para cada empleado se tienen los siguientes datos:
- Categoría (1 a 3)
- Antigüedad (entero)

Hay un registro por cada empleado. La información no está agrupada ni ordenada. Se pide calcular e informar:
a) ¿Cuantos empleados hay para cada categoría?
b) Total de sueldos (en $) pagados para cada categoría.
c) Sueldo Promedio.
d) ¿Cual fue el sueldo máximo y a que categoría pertenece?

*/

int main() {
    //constantes
    const int SUELDO_CAT1 = 38000, SUELDO_CAT2 = 70000, SUELDO_CAT3 = 105000, CANTIDAD_EMPLEADOS = 50, EXTRA_X_ANIO_TRABAJADO = 1200;
    //inputs
    int categoria, antiguedad;
    //contadores y acumuladores
    int empleadosCat1 = 0, empleadosCat2 = 0, empleadosCat3 = 0, totalSueldoCat1 = 0, totalSueldoCat2 = 0, totalSueldoCat3 = 0;
    // maximos y minimos
    int sueldoMaximo;
    //otros
    int categoriaSueldoMax, sueldoPromedio, sueldoACobrar;

    for (int i = 0; i < CANTIDAD_EMPLEADOS; i++) {
        do {
            cout << "Ingrese la categoria del empleado [1, 2, 3]:";
            cin >> categoria;
            cout << "Ingrese la antiguedad del empleado: ";
            cin >> antiguedad;


            switch (categoria) {
                case 1:
                    sueldoACobrar = SUELDO_CAT1 + antiguedad * EXTRA_X_ANIO_TRABAJADO;
                    empleadosCat1++;
                    totalSueldoCat1 += sueldoACobrar;
                    if (i == 1 || sueldoACobrar > sueldoMaximo) {
                        sueldoMaximo = sueldoACobrar;
                        categoriaSueldoMax = 1;
                    }
                    break;
                case 2:
                    sueldoACobrar = SUELDO_CAT2 + antiguedad * EXTRA_X_ANIO_TRABAJADO;
                    empleadosCat2++;
                    totalSueldoCat2 += sueldoACobrar;
                    if (i == 1 || sueldoACobrar > sueldoMaximo) {
                        sueldoMaximo = sueldoACobrar;
                        categoriaSueldoMax = 2;
                    }
                    break;
                case 3:
                    sueldoACobrar = SUELDO_CAT3 + antiguedad * EXTRA_X_ANIO_TRABAJADO;
                    empleadosCat3++;
                    totalSueldoCat3 += sueldoACobrar;
                    if (i == 1 || sueldoACobrar > sueldoMaximo) {
                        sueldoMaximo = sueldoACobrar;
                        categoriaSueldoMax = 3;
                    }
                    break;
                default:
                    cout << "Por favor ingrese una categoria valida." << endl;
            }
        } while (categoria > 3);

    }

    sueldoPromedio = (totalSueldoCat1 + totalSueldoCat2 + totalSueldoCat3) / CANTIDAD_EMPLEADOS;

    cout << "En la categoria 1 hay " << empleadosCat1 << " empleados" << endl;
    cout << "TOTAL pagado: " << totalSueldoCat1 << " $" << endl;
    cout << "En la categoria 2 hay " << empleadosCat2 << " empleados" << endl;
    cout << "TOTAL pagado: " << totalSueldoCat2 << " $" << endl;
    cout << "En la categoria 3 hay " << empleadosCat3 << " empleados" << endl;
    cout << "TOTAL pagado: " << totalSueldoCat3 << " $" << endl;

    cout <<  endl << "SUELDO PROMEDIO: " << sueldoPromedio << endl;
    cout << "Sueldo maximo: " << sueldoMaximo << " pertenece a la categoria: " << categoriaSueldoMax;


    return 0;
}
