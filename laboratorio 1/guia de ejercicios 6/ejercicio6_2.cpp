#include <iostream>

using namespace std;

/*
Hacer un programa donde se carguen 15 números enteros y luego
 le solicite al usuario un número e indique si el mismo pertenece a la lista cargada anteriormente.
*/

int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;
    int LONGITUD = 15;
    int numeros[LONGITUD] = {};
    int numeroUsuario;

    for (int i = 0; i < LONGITUD; i++) {
        cout << "Ingrese el numero para el indice " << i << " :";
        cin >> numeros[i];
    }

    cout << "Ingrese un numero :";
    cin >> numeroUsuario;

    for (int i = 0; i < LONGITUD; i++) {
        if (numeroUsuario == numeros[i]) {
            cout << "El numero se encuentra en el array." << endl;
        }
    }



    cout << endl << endl << "=== FIN DEL PROGRAMA ===";
    return 0;
}
