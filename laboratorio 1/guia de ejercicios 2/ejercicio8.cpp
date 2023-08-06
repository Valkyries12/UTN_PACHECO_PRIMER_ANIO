#include <iostream>

using namespace std;

/*
Basado en los 2 ejercicios anteriores, hacer un programa para ingresar por teclado la longitud de los tres lados de un triángulo y luego listar que tipo de triángulo es:
- Equilátero: si los tres lados son iguales.
- Isósceles: si dos de los tres lados son iguales.
- Escaleno: si los tres lados son distintos entre sí.

*/

int main() {
    int longitud1, longitud2, longitud3;
    string mensaje;

    cout << "Ingrese la primer longitud: ";
    cin >> longitud1;
    cout << "Ingrese la segunda longitud: ";
    cin >> longitud2;
    cout << "Ingrese la tercer longitud: ";
    cin >> longitud3;

    if (longitud1 == longitud3 && longitud1 == longitud2) {
        mensaje = "Equilatero";
    } else {
        if (longitud1 != longitud3 && longitud2 != longitud1) {
            mensaje = "Escaleno";
        } else {
            mensaje = "Isosceles";
        }
    }

    cout << mensaje;
    return 0;
}
