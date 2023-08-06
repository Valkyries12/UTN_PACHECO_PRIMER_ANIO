#include <iostream>


/*
Una concesionaria de autos paga a los vendedores un sueldo fijo de $ 15.000 más $ 2.000 de premio por cada auto vendido.
Hacer un programa que permita ingresar por teclado la cantidad de autos vendidos por un vendedor y luego informar por pantalla el sueldo total a pagar.
Ejemplo. Si la cantidad de autos vendidos fuera 4 entonces el sueldo total a pagar es de $ 23.000.

*/
using namespace std;

int main(){
    int autosVendidos, total;
    int sueldoFijo = 15000;
    int premio = 2000;

    cout << "Ingrese la cantidad de autos vendidos: ";
    cin >> autosVendidos;
    total = (autosVendidos * premio) + sueldoFijo;

    cout << "Sueldo a pagar es: " << total;

    return 0;
}
