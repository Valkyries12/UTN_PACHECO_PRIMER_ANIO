#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar por teclado dos números y luego informar por pantalla con un cartel aclaratorio si el primer número es múltiplo del segundo.
*/

int main()
{
    int numero1, numero2;
    cout << "Ingrese el primer numero: ";
    cin >> numero1;
    cout << "Ingrese el segundo numero: ";
    cin >> numero2;

    if (numero1 % numero2 == 0) {
        cout << "EL primer numero es multiplo del segundo" << endl;
    }

    return 0;
}
