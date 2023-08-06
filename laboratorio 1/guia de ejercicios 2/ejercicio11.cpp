#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar cinco números y listar cuántos de esos cinco números son positivos.
*/

int main() {
    int numero1, numero2, numero3, numero4, numero5;
    int contPositivos = 0;

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

    if (numero1 > 0) {
        contPositivos++;
    }
    if (numero2 > 0) {
        contPositivos++;
    }
    if (numero3 > 0) {
        contPositivos++;
    }
    if (numero4 > 0) {
        contPositivos++;
    }
    if (numero5 > 0) {
        contPositivos++;
    }

    cout << "Hay " << contPositivos << " numeros positivos.";
    return 0;
}
