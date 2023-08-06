#include <iostream>

using namespace std;

/*
Hacer un programa donde se carguen 15 números enteros y luego muestre por pantalla el mínimo elemento del vector
 y además indique cuántas veces se repite el valor mínimo dentro del vector.
*/

int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;
    int LONGITUD = 15;
    int numeros[LONGITUD] = {};
    int minimo;
    int contadorMin = 0;

    for (int i = 0; i < LONGITUD; i++) {
        cout << "Ingrese numero para el indice " << i << " :";
        cin >> numeros[i];
    }

    minimo = numeros[0];

    for (int i = 1; i < LONGITUD; i++) {
        if (numeros[i] < minimo) {
            minimo = numeros[i];
        }
    }

    for (int i = 0; i < LONGITUD; i++) {
        if (minimo == numeros[i]) {
            contadorMin++;
        }
    }
    contadorMin -= 1;

    cout << endl << endl << "EL numero " << minimo << " se repite " << contadorMin << " veces.";




    cout << endl << endl << "=== FIN DEL PROGRAMA ===";
    return 0;
}
