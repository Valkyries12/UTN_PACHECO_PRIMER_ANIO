#include <iostream>

using namespace std;



int main() {
    int indice = 0;
    const int TAM = 100;
    char cadena[TAM], input, caracterUno, caracterDos;

    cout << "Ingrese un caracter: ";
    cin >> input;

    while (input != '.') {
        cadena[indice] = input;
        indice++;
        cout << "Ingrese un caracter: ";
        cin >> input;
    }

    cout << "Ingrese el caracter a buscar: ";
    cin >> caracterUno;

    cout << "Ingrese el caracter con el que va a reemplazar: ";
    cin >> caracterDos;

    for (int i = 0; i < indice; i++) {
        if (cadena[i] == caracterUno) {
            cadena[i] = caracterDos;
        }
    }

    for (int i = 0; i < indice; i++) {
        cout << cadena[i];
    }

    return 0;
}
