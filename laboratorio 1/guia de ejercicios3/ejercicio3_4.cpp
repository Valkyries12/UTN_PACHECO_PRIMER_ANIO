#include <iostream>

using namespace std;

/*
Hacer un programa para que el usuario ingrese dos números y luego el programa muestre por pantalla los números entre el menor y el mayor de ambos.
 Ejemplo, si el usuario ingresa 3 y 15, se mostrarán los números entre el 3 y el 15; y si el usuario ingresa 25 y 8, se mostrarán los números entre el 8 y el 25.
*/

int main() {
    int numero1, numero2, inicio, fin;

    cout << "Ingrese el primer número: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 > numero2) {
        inicio = numero2;
        fin = numero1;
    } else {
        inicio = numero1;
        fin = numero2;
    }

    for (int i = inicio; i <= fin; i++) {
        cout << i << endl;
    }

    return 0;
}
