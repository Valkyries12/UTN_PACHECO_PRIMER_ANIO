#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar tres números y listar el máximo de ellos.

*/

int main() {
    int numero1, numero2, numero3, mayor;
    string mensaje = "";

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;

    mayor = numero1;
    if (numero2 > mayor) {
        mayor = numero2;
    }
    if (numero3 > mayor) {
        mayor = numero3;
    }

    cout << "El mayor es el numero: " << mayor;
    return 0;
}
