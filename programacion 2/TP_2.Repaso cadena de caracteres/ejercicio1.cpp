#include <iostream>

using namespace std;

/*
1) Hacer funciones que reciban los mismos parámetros y realicen las mismas acciones
que las siguientes funciones de la librería string.h:
- int strcmp(char *, char *)
- void strcpy(char*, char *)
- int strlen(char *)
- char * strcat(char *, char *)
*/

int strcmp(char *palabra1, char *palabra2);

int main() {
    char palabra1[] = {'b', 'a', 'n', 'a', 'n', 'a', '\0'};
    char palabra2[] = {'b', 'a', 'n', 'a', 'n', 'a', '\0'};

    cout << strcmp(palabra1, palabra2);
    return 0;
}

int strcmp(char *palabra1, char *palabra2) {
    int resultado;
    int puntaje1 = 0;
    int puntaje2 = 0;
    int contador = 0;


    char letraActual = palabra1[contador];
    while(letraActual != '\0') {
        puntaje1 += (int) letraActual;
        contador++;
        letraActual = palabra1[contador];
    }
    contador = 0;

    letraActual = palabra2[contador];
    while(letraActual != '\0') {
        puntaje2 += (int) letraActual;
        contador++;
        letraActual = palabra2[contador];
    }
    contador = 0;

    cout << "puntaje 1 es: " << puntaje1 << endl;
    cout << "puntaje 2 es: " << puntaje2 << endl;

    if (puntaje1 == puntaje2) {
        resultado = 0;
    }
    else if (puntaje1 < puntaje2) {
        resultado = -1;
    } else {
        resultado = 1;
    }

    return resultado;
}
