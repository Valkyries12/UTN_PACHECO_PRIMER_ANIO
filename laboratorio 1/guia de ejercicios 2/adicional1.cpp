#include <iostream>

using namespace std;

/*
El costo de un desarrollo de un proyecto de software se calcula en base al lenguaje que se necesita:


Además, si el proyecto es marcado como Urgente, se le aumenta un 120 % más al costo del proyecto.

Le solicitan un programa que permita calcular el costo total de un proyecto basado en la cantidad de horas (int), el tipo de lenguaje (char) y si es urgente o no (bool)

*/

int main() {
    int cantidadHoras;
    int total = 0;
    char tipoLenguaje, esUgenteOpcion;
    bool esUrgente = false;


    cout << "Ingrese la cantidad de horas del proyecto: ";
    cin >> cantidadHoras;
    cout << "¿En cual lenguaje se va a desarrollar?" << endl;
    cout << "[C] C/C++ " << endl;
    cout << "[#] C#" << endl;
    cout << "[P] Python" << endl;
    cout << "[G] Go" << endl;
    cout << "Ingrese el lenguaje: ";
    cin >> tipoLenguaje;

    cout << "¿Es urgente? [s/n]: ";
    cin >> esUgenteOpcion;

    if (esUgenteOpcion == 's' || esUgenteOpcion == 'S') {
        esUrgente = true;
    }

    switch(tipoLenguaje) {
        case 'c':
        case 'C':
            total = cantidadHoras * 2500;
        break;
        case '#':
            total = cantidadHoras * 2100;
        break;
        case 'p':
        case 'P':
            total = cantidadHoras * 1400;
        break;
        case 'g':
        case 'G':
            total = cantidadHoras * 2000;
        break;
    }

    if (esUrgente) {
        total = total * 2.20;
    };

    cout << "El costo del desarrollo es: " << total;


    return 0;
}
