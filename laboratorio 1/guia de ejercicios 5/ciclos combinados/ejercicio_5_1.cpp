#include <iostream>

using namespace std;

/*
1) Una agencia de viajes posee la informaci�n de los cinco destinos tur�sticos que comercializa en cada uno de los meses del a�o 2022.
Por cada destino y mes registra:
C�digo de destino tur�stico (entero)
N�mero de mes (entero entre 1 y 12)
Cantidad de pasajes vendidos (entero)
Total recaudado (float)

La informaci�n se encuentra agrupada por destino tur�stico pero no se encuentra ordenada bajo ning�n criterio.
Hay un registro para cada destino tur�stico y mes.

Se pide calcular e informar:
A) La cantidad total de pasajes vendidos en el a�o 2022 entre todos los destinos tur�sticos.
B) Por cada destino tur�stico, el total recaudado.

*/


int main() {
    const int MESES = 2, DESTINOS = 3;
    int codDestino, nroMes, qtyPasajesVendidos, recaudado, totalPasajesVendidos = 0, totalRecaudadoXDestino = 0;

    cout << "====== INICIO DEL PROGRAMA ======" << endl << endl;

    for (int i = 1; i <= DESTINOS; i++) {

        for (int j = 1; j <= MESES; j++) {
            codDestino = i;
            cout << "Numero de mes: ";
            cin >> nroMes;
            cout << "Cantidad de pasajes vendidos: ";
            cin >> qtyPasajesVendidos;
            cout << "Total recaudado: ";
            cin >> recaudado;
            cout << endl;

            totalPasajesVendidos += qtyPasajesVendidos;
            totalRecaudadoXDestino += recaudado;
        }

        cout << endl << endl << "=== DESTINO " << i << " ===" << endl;
        cout << "total recaudado: " << totalRecaudadoXDestino << endl << endl;
        totalRecaudadoXDestino = 0;
    }

    cout << "Cantidad total de pasajes vendidos: " << totalPasajesVendidos << endl;

    cout << endl << endl << "====== FIN DEL PROGRAMA ======";


    return 0;
}
