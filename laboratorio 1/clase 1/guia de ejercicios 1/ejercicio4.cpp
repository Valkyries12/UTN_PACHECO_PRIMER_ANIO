#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avi�n y la cantidad de pasajes ocupados y luego calcular
e informar el porcentaje de ocupaci�n y el porcentaje de no ocupaci�n del mismo.
Ejemplo si el avi�n tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de ocupaci�n que se informar� ser� de un 40% y el porcentaje de no ocupaci�n ser� de un 60%.

*/

int main() {
    int asientosDisponibles, pasajesOcupados, porcentajeOcupado, porcentajeNoOcupado, aux;

    cout << "Ingrese los asientos disponibles: ";
    cin >> asientosDisponibles;
    cout << "Ingrese los pasajesOcupados: ";
    cin >> pasajesOcupados;
    aux = asientosDisponibles - pasajesOcupados;

    porcentajeNoOcupado = (aux * 100) / asientosDisponibles;
    porcentajeOcupado = 100 - porcentajeNoOcupado;

    cout << "%ocupado: " << porcentajeOcupado << " %NO ocupado: " << porcentajeNoOcupado;

    return 0;
}
