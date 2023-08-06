#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar por teclado tres números e informar con una leyenda aclaratoria si los tres son todos distintos entre sí,
caso contrario no emitir nada. Ayuda: Si A es distinto de B y B es distinto de C, eso no signica que A y C sean distintos. Ejemplo: A=8, B=6 y C=8.
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

    if (numero1 != numero3 && numero2 != numero1) {
        mensaje = "Son distintos";
    }
    cout << mensaje;

    return 0;
}
