#include <iostream>

using namespace std;

/*
Hacer una función que reciba un un vector de carácteres y devuelva la cantidad de caracteres del mismo hasta el '\0'. Asumir que el vector dispone de un '\0'.

NOTA: No confundir un string con un vector de cadenas de caracteres. Los mismos se declaran y se utilizan de maneras distintas:
char mi_vector_caracteres[100]; // Un vector de caracteres
string mi_cadena_caracteres; // Un string o cadena de caracteres

*/

int calcularCantidadCaracteres(char arr[]);

int main() {
    char palabra[100] = {'b', 'a', 'n', 'a', 'n', 'a', '\0'};
    cout << "La palabra tiene " << calcularCantidadCaracteres(palabra) << " letras.";

    return 0;
}

int calcularCantidadCaracteres(char arr[]) {
    int cantidadLetras = 0;
    char letraActual;

    while(arr[cantidadLetras] != '\0') {
      cantidadLetras++;

    };

    return cantidadLetras;
};
