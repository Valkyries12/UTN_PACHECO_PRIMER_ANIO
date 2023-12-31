#include <iostream>

using namespace std;



int calcularMinimo (int arr[], int len) {
    int minimo = arr[0];
    int valorActual;

    for (int i = 1; i < len; i++) {
        valorActual = arr[i];
        if (valorActual < minimo) {
            minimo = valorActual;
        }
    }

    return minimo;
}



int calcularMaximo(int arr[], int len) {
    int maximo = arr[0];
    int valorActual;

    for (int i = 1; i < len; i++) {
        valorActual = arr[i];
        if (valorActual > maximo) {
            maximo = valorActual;
        }
    }

    return maximo;
}


int buscarIndiceValorMinimo (int arr[], int len) {
    int minimo = arr[0];
    int valorActual;
    int indice = 0;

    for (int i = 1; i < len; i++) {
        valorActual = arr[i];
        if (valorActual < minimo) {
            minimo = valorActual;
            indice = i;
        }
    }

    return indice;
}


int buscarIndiceValorMaximo(int arr[], int len) {
    int maximo = arr[0];
    int valorActual;
    int indice = 0;

    for (int i = 1; i < len; i++) {
        valorActual = arr[i];
        if (valorActual > maximo) {
            maximo = valorActual;
            indice = i;
        }
    }

    return indice;
}


bool existeNumeroEnVector(int arr[], int len, int valorBuscado) {
    bool existe = false;
    int valorActual;

    for (int i = 0; i < len; i++) {
        valorActual = arr[i];
        if (valorActual == valorBuscado) {
            existe = true;
            break;
        }
    }

    return existe;
}


int buscarPosicion(int arr[], int len, int valorBuscado) {
    int posicion = -1;
    int valorActual;

    for (int i = 0; i < len; i++) {
        valorActual = arr[i];
        if (valorActual == valorBuscado) {
            posicion = i;
            break;
        }
    }

    return posicion;
}


int contarRepetidos(int arr[], int len, int valorBuscado) {
    int contador = 0;
    int valorActual;

    for (int i = 0; i < len; i++) {
        valorActual = arr[i];
        if (valorActual == valorBuscado) {
            contador++;
        }
    }

    return contador;
}


int buscarMaximoEnFila(int matriz[10][10], int fila) {
    int maximo = matriz[fila][0];
    int valorActual;

    for (int columnaActual = 1; columnaActual < 10; columnaActual++) {
        valorActual = matriz[fila][columnaActual];
        if (valorActual > maximo) {
            maximo = valorActual;
        }
    }

    return maximo;
}


int buscarIndiceDelMaximoEnFila(int matriz[10][10], int fila) {
    int maximo = matriz[fila][0];
    int indice = 0;
    int valorActual;

    for (int columnaActual = 1; columnaActual < 10; columnaActual++) {
        valorActual = matriz[fila][columnaActual];
        if (valorActual > maximo) {
            maximo = valorActual;
            indice = columnaActual;
        }
    }

    return indice;
}


int sumarValoresEnFila(int matriz[10][10], int fila) {
    int acumulador = 0;
    int valorActual;

    for (int columnaActual = 0; columnaActual < 10; columnaActual++) {
        valorActual = matriz[fila][columnaActual];
        acumulador += valorActual;
    }

    return acumulador;
}


int contarPositivosEnFila(int matriz[10][10], int fila) {
    int cantidadPositivos = 0;
    int valorActual;

    for (int columnaActual = 0; columnaActual < 10; columnaActual++) {
        valorActual = matriz[fila][columnaActual];
        if (valorActual > 0) {
            cantidadPositivos++;
        }
    }

    return cantidadPositivos;
}


int sumarValores(int matriz[10][10]) {
    int acumulador = 0;
    int valorActual;

    for (int filaActual = 0; filaActual < 10; filaActual++) {
        for (int columnaActual = 0; columnaActual < 10; columnaActual++) {
            valorActual = matriz[filaActual][columnaActual];
            acumulador += valorActual;
        }
    }

    return acumulador;
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
