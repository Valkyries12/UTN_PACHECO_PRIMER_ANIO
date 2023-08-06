#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar cinco números y listar el máximo de ellos.

*/

int main() {
    int numero1, numero2, numero3, numero4, numero5, mayor;

    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;
    cout << "Ingrese el tercer numero: ";
    cin >> numero3;
    cout << "Ingrese el cuarto numero: ";
    cin >> numero4;
    cout << "Ingrese el quinto numero: ";
    cin >> numero5;

    mayor = numero1;
    if (numero2 > mayor) {
        mayor = numero2;
    }
    if (numero3 > mayor) {
        mayor = numero3;
    }
    if (numero4 > mayor) {
        mayor = numero4;
    }
    if (numero5 > mayor) {
        mayor = numero5;
    }

    cout << "El mayor es el numero: " << mayor;
    return 0;
}
