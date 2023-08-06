#include <iostream>

using namespace std;

/*
1) Una agencia de viajes posee la información de los cinco destinos turísticos que comercializa en cada uno de los meses del año 2022.
Por cada destino y mes registra:
Código de destino turístico (entero)
Número de mes (entero entre 1 y 12)
Cantidad de pasajes vendidos (entero)
Total recaudado (float)

La información se encuentra agrupada por destino turístico pero no se encuentra ordenada bajo ningún criterio.
Hay un registro para cada destino turístico y mes.

Se pide calcular e informar:
A) La cantidad total de pasajes vendidos en el año 2022 entre todos los destinos turísticos.
B) Por cada destino turístico, el total recaudado.

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
