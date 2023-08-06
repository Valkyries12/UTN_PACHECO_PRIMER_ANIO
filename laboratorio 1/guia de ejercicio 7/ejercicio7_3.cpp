#include <iostream>

using namespace std;

/*
Hacer una función que reciba un número entero como parámetro y devuelva verdadero si el mismo es un número primo.
De lo contrario debe devolver falso.
*/

bool esPrimo(int num);
int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;

    int num;

    cout << "Ingrese un numero: ";
    cin >> num;

    cout << num << " es primo = " << esPrimo(num);


    cout << endl << endl << "=== FIN DEL PROGRAMA ===";
    return 0;
}

bool esPrimo(int num) {
    int contador = 0;
    bool resultado = false;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            contador++;
        }
    }

    if (contador == 2 || contador == 1) {
        resultado = true;
    }

    return resultado;
};
