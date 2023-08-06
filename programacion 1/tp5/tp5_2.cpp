#include <iostream>

using namespace std;
/*
2) Dada una lista de números compuesta por 10 grupos y cada grupo separado del
siguiente por un cero, se pide determinar e informar:
a) Para cada uno de los grupos el máximo de los números pares y el máximo de los
números impares.
b) Para cada uno de los grupos el porcentaje de números negativos y números positivos.
c) Cuantos números positivos había en total entre los 10 grupos.
*/


int main() {
    int numero, maximoPar, maximoImpar, totalPorGrupo = 0, contPositivo = 0, contNegativo = 0, contPositivoTotal = 0;
    bool yaPasoPar = false, yaPasoImpar = false;
    float porcentajeNeg = 0.0, porcentajePos = 0.0;

    cout << endl << endl << "====== INICIO DEL PROGRAMA ======" << endl << endl;

    for (int i = 1; i <= 2; i++) {
        cout << endl << "Ingrese un numero: ";
        cin >> numero;

        while (numero != 0) {
            totalPorGrupo++;

            if (numero % 2 == 0) {
                if (!yaPasoPar || numero > maximoPar) {
                    yaPasoPar = true;
                    maximoPar = numero;
                }
            } else {
                if (!yaPasoImpar || numero > maximoImpar) {
                    yaPasoImpar = true;
                    maximoImpar = numero;
                }
            }

            if (numero > 0) {
                contPositivo++;
                contPositivoTotal++;
            } else {
                contNegativo++;
            }

            cout << "Ingrese un numero: ";
            cin >> numero;

        }
        porcentajeNeg = (contNegativo * 100) / totalPorGrupo;
        porcentajePos = (contPositivo * 100) / totalPorGrupo;

        cout << endl << "GRUPO " << i << endl;
        cout << endl << endl << "Maximo numero par: " << maximoPar << endl;
        cout << "Maximo numero impar: " << maximoImpar << endl;
        cout << "Porcentaje de positivos: " << porcentajePos << endl;
        cout << "Porcentaje de negativos: " << porcentajeNeg << endl;


        totalPorGrupo = 0;
        yaPasoImpar = false;
        yaPasoPar = false;
        contPositivo = 0;
        contNegativo = 0;
        maximoImpar = 0;
        maximoPar = 0;
        porcentajeNeg = 0.0;
        porcentajePos = 0.0;

    }

    cout << "Total de positivos: " << contPositivoTotal << endl;
    cout << endl << endl << "====== FIN DEL PROGRAMA ======";
    return 0;
}
