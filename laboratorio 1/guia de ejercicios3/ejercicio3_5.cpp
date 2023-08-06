#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar un N valor que indica la cantidad de números que componen una lista y
 luego solicitar se ingresen esos N números. Se pide informar cuantos son positivos
*/


int main() {
    int iteraciones, numero;
    int contPositivos = 0;

    cout << "Ingrese la cantidad de iteraciones: ";
    cin >> iteraciones;

    for (int i = 0; i < iteraciones; i++) {
        cout << "Ingrese el " << i+1 << " numero: ";
        cin >> numero;
        if (numero > 0) {
            contPositivos++;
        }
    }

    cout << "Cantidad de positivos: " << contPositivos;
    return 0;
}
