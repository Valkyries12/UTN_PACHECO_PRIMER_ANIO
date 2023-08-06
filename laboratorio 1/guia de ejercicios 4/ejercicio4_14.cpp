#include <iostream>

using namespace std;

/*
Una universidad dispone de diez aulas para acomodar a una cantidad de asistentes a una charla.
Cada aula tiene una capacidad total de 60 personas. Se necesita un programa que solicite la cantidad de asistentes a la charla y
determine la cantidad total de aulas necesarias para acomodarlos a todos.

Por ejemplo:
Si los asistentes son 120 se necesitarán 2 aulas.
Si los asistentes son 123 se necesitarán 3 aulas.
Si los asistentes son 40 se necesitará 1 aula.

DESAFÍO: No utilizar el operador de división ni el de resto en el algoritmo.

*/

int main() {
    int cantidadAsistentes, cantidadRestante, cantidadAulas = 0, limiteAulas = 10, contPersona = 0;
    string mensaje = "";

    cout << "Ingrese cantidad de asistentes: ";
    cin >> cantidadAsistentes;
    cantidadRestante = cantidadAsistentes;



    while (cantidadAulas < limiteAulas) {
        contPersona++;
        if (cantidadAsistentes > 600) {
            mensaje = "No se puede tener mas de 600 asistentes";
        }
        if (cantidadRestante <= 60) {
            cantidadAulas++;
            break;
        }

        if (contPersona == 60) {
            cantidadRestante -= 60;
            contPersona = 0;
            cantidadAulas++;
        }

    }

    if (mensaje == "") {
        cout << "Asistenes: " << cantidadAsistentes << endl;
        cout << "Aulas necesarias: " << cantidadAulas;
    } else {
        cout << mensaje;
    }

    return 0;
}
