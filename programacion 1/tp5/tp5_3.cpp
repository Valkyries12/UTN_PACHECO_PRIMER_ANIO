#include <iostream>

using namespace std;

/*
3) Se dispone de una lista de 10 grupos de números enteros separados entre ellos por
ceros. Se pide determinar e informar:
a) El número de grupo con mayor porcentaje de números impares positivos respecto al total
de números que forman el grupo.
b) Para cada grupo el último número primo y en qué orden apareció en ese grupo, si en un
grupo no hubiera números primos informarlo con un cartel aclaratorio.
c) Informar cuantos grupos están formados por todos números ordenados de mayor a
menor
*/

int main() {
    int cantXGrupo = 0, cantImparPositivo = 0, ultimoPrimo = 0, ordenPrimo, anterior, actual, cantGrupoOrdenado = 0, numero, maxPorcentajeNumerosPositivos, actualPorcentajeNumerosPositivos, numGrupoMaxPorcentaje;
    bool esPrimo = true, estaOrdenado = true;
    const int ITERACIONES = 3;

    for (int i = 1; i <= ITERACIONES; i++) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        while (numero != 0) {
            cantXGrupo++;
            if (numero % 2 == 1 && numero > 0) {
                cantImparPositivo++;
            }

            for (int j = 1; j < numero; j++) {
                if (numero % j == 0) {
                    esPrimo = false;
                }
            }

            if (esPrimo) {
                ultimoPrimo = numero;
                ordenPrimo = cantXGrupo;
            } else {
                esPrimo = true;
            }

            if (cantXGrupo == 1) {
                actual = numero;
                anterior = numero;
            } else {
                anterior = actual;
                actual = numero;

                if (anterior < actual) {
                    estaOrdenado = false;
                }
            }

            cout << "Ingrese un numero: ";
            cin >> numero;
        }

        actualPorcentajeNumerosPositivos = (cantImparPositivo * 100) / cantXGrupo;
        if (i == 1 || actualPorcentajeNumerosPositivos > maxPorcentajeNumerosPositivos) {
            maxPorcentajeNumerosPositivos = actualPorcentajeNumerosPositivos;
            numGrupoMaxPorcentaje = i;
        }


        //imprime por cada grupo
        cout << endl << endl << "====== GRUPO " << i << " ======" << endl;
        if (ultimoPrimo == 0) {
            cout << "No tiene primos" << endl;
        } else {
            cout << "Ultimo numero primo: " << ultimoPrimo << endl;
            cout << "La posicion del numero primo es: " << ordenPrimo << endl;
        }

        if (estaOrdenado) {
            cantGrupoOrdenado++;
        }

        estaOrdenado = true;
        ultimoPrimo = 0;
        cantXGrupo = 0;
        cantImparPositivo = 0;
    }

    cout << endl << endl << "El grupo con mayor porcentaje de numeros impares positivos es: " << numGrupoMaxPorcentaje << endl;
    cout << "Hay " << cantGrupoOrdenado << " grupos ordenados de mayor a menor" << endl;

    return 0;
}
