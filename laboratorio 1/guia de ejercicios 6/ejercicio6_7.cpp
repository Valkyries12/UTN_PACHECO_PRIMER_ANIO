#include <iostream>

using namespace std;

/*
Se ingresa por teclado en un vector de 10 elementos, 9 números todos distintos entre sí y ordenados de menor a mayor.
Se pide ingresar otro valor e insertarlo en el orden correspondiente y desplazar todos los elementos un lugar.

Ejemplo:
Vector → {1 3 4 5 6 7 10 12 16}
Número ingresado: 9
Vector → {1 3 4 5 6 7 9 10 12 16}

*/

int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;
    const int LONGITUD = 10;
    int numeros[LONGITUD] = {};
    int aux;

    for (int i = 0; i < LONGITUD-1; i++) {
        cout << "Ingrese un numero: ";
        cin >> numeros[i];
    }

    //muestro el vector lleno hasta el indice 9
    for (int i = 0; i < LONGITUD-1; i++) {
        cout << numeros[i] << " ";
    }

    cout << endl << "Ingrese un numero para ingresar en el array: ";
    cin >> numeros[LONGITUD-1];
    cout << endl << "Numero ingresado: " << numeros[LONGITUD-1] << endl << endl;

    //ordeno con burubujeo
    for (int i = 0; i < LONGITUD; i++) {
        for (int j = i; j < LONGITUD-1; j++) {
            if (numeros[j+1] < numeros[i]) {
                aux = numeros[j+1];
                numeros[j+1] = numeros[i];
                numeros[i] = aux;
            }
        }
    }

    //muestro el resultado final
    for (int i = 0; i < LONGITUD; i++) {
        cout << numeros[i] << " ";
    }


    cout << endl << endl << "=== FIN DEL PROGRAMA ===";

    return 0;
}
