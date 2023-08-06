#include <iostream>

using namespace std;
/*
Dada una lista de n�meros que finaliza cuando se ingresa un n�mero divisible por 7, informar cual es el ante�ltimo y �ltimo n�mero impar ingresado.
Ejemplo 8, 4, -5, 6, 10, 5, 18, 14 se informa -5 y 5.

Nota: Contemplar la posibilidad que podr�a no haber n�meros impares en la lista.

*/


int main() {
    int numero, anteultimoImpar = 0, ultimoImpar = 0;
    bool primerImparEncontrado = false;

    cout << "Ingrese un numero: ";
    cin >> numero;

    while (numero % 7 != 0) {
        if (numero % 2 != 0) {

            if (!primerImparEncontrado) {
                primerImparEncontrado = true;
                ultimoImpar = numero;
            } else {
                anteultimoImpar = ultimoImpar;
                ultimoImpar = numero;
            }
        }

        cout << "Ingrese un numero: ";
        cin >> numero;
    }

    if (ultimoImpar != 0) {
        cout << "Ultimo impar es: " << ultimoImpar << endl;
    }
    if (anteultimoImpar != 0) {
        cout << "Anteultimo impar es: " << anteultimoImpar << endl;
    }
    return 0;
}
