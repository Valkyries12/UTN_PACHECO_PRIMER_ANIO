#include <iostream>

using namespace std;

/*
Hacer una función que reciba un número entero y determine si el mismo es un número primo de Sophie Germain.
Debe devolver verdadero si lo es y falso si no lo es.
NOTA: En teoría de números, se dice que un número natural es un número primo de Sophie Germain,
si el número n es primo y 2*n+1 también lo es.
Ejemplo:
El número 2 es número primo de Sophie Germain porque:
2 es primo
2*2+1 → 5 es primo.

*/

bool esPrimo(int num);


int main() {
    int numero;

    cout << "Ingrese un numero: ";
    cin >> numero;

    cout << "El numero " << numero << " es primo Sophie Germain -->" << esPrimo(numero);
    return 0;
}


bool esPrimo(int num) {
    bool esPrimo = false;
    bool esPrimoSophieGermain = false;
    bool resultado;
    int numSophie = 2*num+1;
    int contador = 0;

    for (int i = 1; i <= num; i++) {
        if (num % i == 0) {
            contador++;
        }
    };

    if (contador == 2 || contador == 1) {
        esPrimo = true;
    }
    contador = 0;

    for (int i = 1; i <= numSophie; i++) {
        if (numSophie % i == 0) {
            contador++;
        }
    };

    if (contador == 2 || contador == 1) {
        esPrimoSophieGermain = true;
    }


    return esPrimo && esPrimoSophieGermain;
};



