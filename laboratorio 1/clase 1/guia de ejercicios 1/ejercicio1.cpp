#include <iostream>

//Hacer un programa para ingresar por teclado la cantidad de horas trabajadas por un operario y el valor que se le paga por hora trabajada y listar por pantalla el sueldo que le corresponda.
using namespace std;

int main() {
    int horasTrabajadas, valorPorHora, sueldo;

    cout << "Ingrese las horas trabajadas: ";
    cin >> horasTrabajadas;

    cout << "Ingrese el valor por hora: ";
    cin >> valorPorHora;

    sueldo = horasTrabajadas * valorPorHora;

    cout << "El sueldo es de: " << sueldo;

    return 0;
}
