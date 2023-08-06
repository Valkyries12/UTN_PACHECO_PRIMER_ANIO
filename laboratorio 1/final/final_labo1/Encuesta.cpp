#include <iostream>
#include "Encuesta.h"
using namespace std;


void Punto1(Encuesta arr[], int longitud) {
    bool sistemasOperativosMayor60[6] = {false};
    string nombresSO[6] = {"DOS", "Windows", "Linux", "MacOS", "Android", "IOS"};
    int indice;

    for (int i = 0; i < longitud; i++) {
        if (arr[i].edad > 60) {
            switch(arr[i].idSistemaOperativo) {
                case 100:
                    sistemasOperativosMayor60[0] = true;
                break;
                case 200:
                    sistemasOperativosMayor60[1] = true;
                break;
                case 300:
                    sistemasOperativosMayor60[2] = true;
                break;
                case 400:
                    sistemasOperativosMayor60[3] = true;
                break;
                case 500:
                    sistemasOperativosMayor60[4] = true;
                break;
                case 600:
                    sistemasOperativosMayor60[5] = true;
                break;
                default:
                    break;
            }
        }

    }

    for (int i = 0; i < 6; i++) {
        if (!sistemasOperativosMayor60[i]) {
            cout << nombresSO[i] << " - ";
        }
    }

}



int calcularEncuestadosJugaronEntreUnaYTresHoras(Encuesta arr[], int longitud) {
    int resultado = 0;
    for (int i = 0; i < longitud; i++) {
        if (arr[i].tiempoJugado > 59 && arr[i].tiempoJugado < 181) {
            resultado++;
        }
    }

    return resultado;
}


 int Punto3(Encuesta arr[], bool paises[], int longitud) {
    int resultado = 0;
    int indicePaisActual;

    for (int i = 0; i < longitud; i++) {
        if (arr[i].gradoSatisfaccion > 3) {

            indicePaisActual = arr[i].paisResidencia;

            if (paises[indicePaisActual] == false) {
                resultado++;
                paises[indicePaisActual] = true;
            }
        }
    }

    return resultado;
 }


