#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar por teclado la cantidad de asientos disponibles en un avión y la cantidad de pasajes ocupados y luego calcular
e informar el porcentaje de ocupación y el porcentaje de no ocupación del mismo.
Ejemplo si el avión tiene 200 asientos disponibles y se vendieron 80 pasajes, el porcentaje de ocupación que se informará será de un 40% y el porcentaje de no ocupación será de un 60%.

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
