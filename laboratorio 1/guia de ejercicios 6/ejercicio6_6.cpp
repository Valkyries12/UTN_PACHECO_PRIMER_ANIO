#include <iostream>

using namespace std;

/*
Se ingresa por teclado un vector de 10 elementos todos distintos entre sí. Luego eliminar el valor máximo y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 9 1 4 6 2 0 5 7 }, quedará → {1 3 1 4 6 2 0 5 7}
Nota: No mostrar el último elemento del vector.

*/


int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;

    const int LONGITUD = 10;
    int numeros[LONGITUD] = {}, maximo;

    for (int i = 0; i < LONGITUD; i++) {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    maximo = numeros[0];

    //hago el maximo
    for (int i = 1; i < LONGITUD; i++) {
        if (numeros[i] > maximo) {
            maximo = numeros[i];
        }
    }

    //desplazo los numeros
    for (int i = 0; i < LONGITUD; i++) {
        if (numeros[i] == maximo) {
            for (int j = i; j < LONGITUD-1; j++) {
                numeros[j] = numeros[j+1];
            }
            numeros[LONGITUD-1] = maximo;
        }
    }

    //muestro el array
    for (int i = 0; i < LONGITUD-1; i++) {
        cout << numeros[i] << " , ";
    }

    cout << endl << endl << "=== FIN DEL PROGRAMA ===";

    return 0;
}
