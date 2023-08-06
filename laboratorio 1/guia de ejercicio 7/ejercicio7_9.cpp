#include <iostream>

using namespace std;

/*
Hacer una función que reciba un carácter llamado valor_buscado y un vector de cadenas de
caracteres y devuelva la cantidad de veces que el carácter buscado se encuentra en el vector.
*/

int calcularLetraEnPalabra(char valorBuscado, char arr[]);

int main() {
    char palabra[100] = {'b', 'a', 'n', 'a', 'n', 'a', '\0'};
    char valorBuscado = 'n';
    cout << "La palabra tiene " << calcularLetraEnPalabra(valorBuscado, palabra) << " letras " << valorBuscado;

    return 0;
}

int calcularLetraEnPalabra(char valorBuscado, char arr[]) {
    int indice = 0;
    int cantidad = 0;

    while(arr[indice] != '\0') {
        if (arr[indice] == valorBuscado) {
            cantidad++;
        }
        indice++;
    };

    return cantidad;
};
