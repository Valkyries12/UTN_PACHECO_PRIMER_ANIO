#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar por teclado tres números y
luego determinar e informar con una leyenda aclaratoria si los tres son iguales entre sí,
caso contrario no emitir nada. Ayuda: Si A es igual a B y B es igual a C, entonces A y C son iguales.
*/

int main() {
    int numero1, numero2, numero3;
    string mensaje = "";

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;

    if (numero1 == numero2 && numero2 == numero3) {
        mensaje = "Son iguales";
    }

    cout << mensaje;
    return 0;
}
