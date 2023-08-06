#include <iostream>

using namespace std;

/*
El dueño del gimnasio Laragym nos pide que realicemos un programa que les permita cargar todas los entrenamientos de sus 50 clientes, cada registro de entrenamiento contiene:
Numero de Entrenamiento (1 - 9999)
Cliente (101- 150)
Tipo de Entrenamiento ( 1 - 10 )
Tiempo del Entrenamiento (minutos)

Puede haber varios registros de entrenamiento por cliente. La información no se encuentra agrupada ni ordenada.
El fin de la carga de entrenamientos se indica con un número de entrenamiento igual a cero, informar:
Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos, ejemplo 70 minutos se expresaría 1 hora y 10 minutos).
Por cada cliente, los tipos de entrenamiento que realizó.
Por cada cada cliente y tipo de entrenamiento, la cantidad total de minutos entrenados. Sólo listar aquellos registros que sean superiores a 0.
El número de cliente que más tiempo haya entrenado.
Los tipos de entrenamiento que no se realizaron por ningún cliente.

*/

int main() {
    const int TOTAL_CLIENTES = 2;
    int clientes[TOTAL_CLIENTES][10];
    bool entrenamientosNoRealizados[10];
    int nroEntrenamiento, nroCliente, tipoEntrenamiento, tiempoEntrenamiento, totalTiempoCliente = 0, horas, minutos, maxTiempoEntrenado, maxTiempoEntrenadoNroCliente;

    for (int i = 0; i < TOTAL_CLIENTES; i++) {
        for (int j = 0; j < 10; j++) {
            clientes[i][j] = 0;
        }
    }

    for (int i = 0; i < 10; i++) {
        entrenamientosNoRealizados[i] = false;
    }

    cout << "Ingrese numero entrenamiento [1 - 9999]: ";
    cin >> nroEntrenamiento;

    while(nroEntrenamiento != 0) {
        cout << "Numero cliente [100- 150]: ";
        cin >> nroCliente;
        nroCliente -= 100;
        cout << "Tipo de entrenamiento [1 - 10]: ";
        cin >> tipoEntrenamiento;
        tipoEntrenamiento -= 1;
        cout << "Tiempo del entrenamiento: ";
        cin >> tiempoEntrenamiento;

        clientes[nroCliente][tipoEntrenamiento] += tiempoEntrenamiento;




        cout << "Ingrese numero entrenamiento [1 - 9999]: ";
        cin >> nroEntrenamiento;
    };

    maxTiempoEntrenado = clientes[0][0];
    maxTiempoEntrenadoNroCliente = 1;


    for (int i = 0; i < TOTAL_CLIENTES; i++) {
        cout << "Cliente N " << i+1 << endl;
        cout << "Realizó los entrenamientos: " << endl;
        for (int j = 0; j < 10; j++) {
            totalTiempoCliente += clientes[i][j];
            //Por cada cliente, los tipos de entrenamiento que realizó.
            //Por cada cada cliente y tipo de entrenamiento, la cantidad total de minutos entrenados. Sólo listar aquellos registros que sean superiores a 0.
            if (clientes[i][j] > 0) {
                cout << "Entrenamiento: " << j+1 << "   hizo " << clientes[i][j] << " minutos" << endl;
                entrenamientosNoRealizados[j] = true;
            }

        }
        horas = totalTiempoCliente / 60;
        minutos = totalTiempoCliente % 60;
        if (totalTiempoCliente > maxTiempoEntrenado) {
            maxTiempoEntrenado = totalTiempoCliente;
            maxTiempoEntrenadoNroCliente = i +1;
        }

        //Por cada cliente, el tiempo total de entrenamiento (expresarlo en horas y minutos, ejemplo 70 minutos se expresaría 1 hora y 10 minutos).
        cout << endl << "Horas: " << horas << " Minutos: " << minutos << endl << endl;
        horas = 0;
        minutos = 0;
        totalTiempoCliente = 0;

    }

    //El número de cliente que más tiempo haya entrenado.
    cout << endl << endl << "El cliente con mayor tiempo de entrenamiento es el N " << maxTiempoEntrenadoNroCliente << endl;

    //Los tipos de entrenamiento que no se realizaron por ningún cliente.
    cout << "Entrenamiento no relizados: ";
    for (int i = 0; i < 10; i++) {
        if (!entrenamientosNoRealizados[i]) {
            cout << i+1 << ", ";
        }
    }

    return 0;
}
