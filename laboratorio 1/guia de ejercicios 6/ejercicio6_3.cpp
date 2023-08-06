#include <iostream>

using namespace std;

/*
Hacer un programa donde se carguen 15 n�meros enteros y luego muestre por pantalla el m�nimo elemento del vector
 y adem�s indique cu�ntas veces se repite el valor m�nimo dentro del vector.
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
