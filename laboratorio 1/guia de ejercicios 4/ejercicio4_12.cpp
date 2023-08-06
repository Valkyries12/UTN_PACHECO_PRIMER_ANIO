#include <iostream>

using namespace std;

/*
Un n�mero Simon�rico es un n�mero positivo divisible por 15 y a la vez divisible por 3 pero no divisible por 6.
Hacer un programa que muestre los primeros 1000 n�meros Simon�ricos. El usuario no debe ingresar nada.
*/

int main() {
    int numero = 1, contNumeroSimonirico = 0, simonirico520;

    while (contNumeroSimonirico < 1001) {
        if (numero % 6 != 0 && numero % 15 == 0 && numero % 3 == 0) {
            contNumeroSimonirico++;
            cout << "Simonirico n� " << contNumeroSimonirico << " " << numero << endl;

        }

        numero++;
    }

    cout << "FIN";
    return 0;
}
