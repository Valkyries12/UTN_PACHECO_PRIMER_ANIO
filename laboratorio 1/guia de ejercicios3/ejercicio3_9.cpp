#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar una lista 10 n�meros e informar el m�ximo de los negativos y el m�nimo de los positivos. Ejemplo: 5, 8, 12, 2, -10, 15, -20, 8, -3, 24.
M�ximo Negativo: -3.
M�nimo Positivo: 2

*/

int main() {
    bool yaPasoNeg = false, yaPasoPos = false;
    int minimoPositivo, maximoNegativo, numero;

    for (int i = 0; i < 10; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero > 0) {
            if (yaPasoPos == false) {
                yaPasoPos = true;
                minimoPositivo = numero;
            }
            if (numero <= minimoPositivo) {
                minimoPositivo = numero;
            }
        } else {
            if (yaPasoNeg == false) {
                yaPasoNeg = true;
                maximoNegativo = numero;
            }
            if (numero >= maximoNegativo) {
                maximoNegativo = numero;
            }
        }
    }

    cout << "Maximo negativo: " << maximoNegativo << endl;
    cout << "Minimo positivo: " << minimoPositivo << endl;

    return 0;
}
