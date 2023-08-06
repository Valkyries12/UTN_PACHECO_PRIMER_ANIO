#include <iostream>

using namespace std;

/*
2) Una agencia de viaje posee la informaci�n de los cinco destinos tur�sticos que comercializa en algunos meses del a�o 2022. Por cada registro se ingresa:
C�digo de destino tur�stico (entero)
N�mero de mes (entero entre 1 y 12)
Cantidad de pasajes vendidos (entero)
Total recaudado (float)

La informaci�n se encuentra agrupada por destino tur�stico pero no se encuentra ordenada bajo ning�n criterio.
No todos los destinos tuvieron informaci�n para todos los meses. Para indicar que finaliza la carga de un destino se ingresa un mes igual a cero.

Se pide calcular e informar:
A) La cantidad total de pasajes vendidos en el a�o 2022 entre todos los destinos tur�sticos.
B) Por cada destino tur�stico, el total recaudado.

*/


int main() {
    const int  DESTINOS = 5;
    int codDestino, nroMes, qtyPasajesVendidos, recaudado, totalPasajesVendidos = 0, totalRecaudadoXDestino = 0;

    cout << "====== INICIO DEL PROGRAMA ======" << endl << endl;

    for (int i = 1; i <= DESTINOS; i++) {

        codDestino = i;
        cout << "Nro de mes: ";
        cin >> nroMes;

        while (nroMes != 0) {

            cout << "Cantidad de pasajes vendidos: ";
            cin >> qtyPasajesVendidos;
            cout << "Total recaudado: ";
            cin >> recaudado;

            totalRecaudadoXDestino += recaudado;
            totalPasajesVendidos += qtyPasajesVendidos;
            cout << "Nro de mes: ";
            cin >> nroMes;
        }

        cout << endl << endl << "=== DESTINO " << i << " ===" << endl;
        cout << "total recaudado: " << totalRecaudadoXDestino << endl << endl;
        totalRecaudadoXDestino = 0;

    }
    cout << "Cantidad total de pasajes vendidos: " << totalPasajesVendidos << endl;

    cout << endl << endl << "====== FIN DEL PROGRAMA ======";
    return 0;
}
