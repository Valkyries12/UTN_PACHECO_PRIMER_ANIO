#include <iostream>

//Hacer un programa que solicite por teclado que se ingresen dos números y luego guardarlos en dos variables distintas.
//A continuación se deben intercambiar mutuamente los valores en ambas variables y mostrarlos por pantalla.
//Ejemplo: Suponiendo que se ingresan 3 y 8 como valores y que la variables usadas son A y B, entonces A=3 y B=8, pero luego debe quedar A=8 y B=3.

using namespace std;

int main() {
    int num1, num2, aux;

    cout << "Ingrese numero1: ";
    cin >> num1;

    cout << "Ingrese numero2: ";
    cin >> num2;

    aux = num1;
    num1 = num2;
    num2 = aux;

    cout << "num1 es: " << num1 << " num2 es: " << num2;


    return 0;
}
