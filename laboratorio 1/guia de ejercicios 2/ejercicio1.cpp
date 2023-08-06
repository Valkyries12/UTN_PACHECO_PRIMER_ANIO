#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar por teclado un número y luego emitir por pantalla un cartel aclaratorio indicando si el mismo es positivo, negativo o cero
*/

int main() {
    string mensaje;
    int numero;

    cout << "Ingrese un número: ";
    cin >> numero;

    if (numero == 0) {
        mensaje = "Es cero";
    } else {
        if (numero > 0) {
            mensaje = "Es positivo";
        } else {
            mensaje = "Es negativo";
        }
    }

    cout << mensaje;

return 0;
}
