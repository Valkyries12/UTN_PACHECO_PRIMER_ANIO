#include <iostream>

using namespace std;

/*
El teatro Lara Rex presentará la obra "Ojo que se viene el primer parcial" en una única jornada.
El mismo cuenta con 1200 butacas a un costo de $5000. Se pide un programa para poder ingresar todos los tickets vendidos para esta presentación. Por cada venta se registró:
Número de venta
Cantidad de butacas

La venta de tickets se finaliza con un número de venta igual a cero o bien cuando no se dispongan de más butacas para vender. Se pide calcular e informar:
El total recaudado.
La cantidad de butacas que quedaron sin vender.

*/


int main() {
    int butacasRestantes = 1200, COSTO_ENTRADA = 5000, numeroDeVenta, cantidadButacas;
    int total = 0;

    cout << "Numero de venta: ";
    cin >> numeroDeVenta;


    while (numeroDeVenta > 0 && numeroDeVenta > 0) {
        cout << "Cantidad de butacas a vender: ";
        cin >> cantidadButacas;

        butacasRestantes -= cantidadButacas;
        total += (COSTO_ENTRADA * cantidadButacas);

        cout << "Numero de venta: ";
        cin >> numeroDeVenta;
    }


    cout << endl;
    cout << "TOTAL recaudado: " << total << endl;
    cout << "Cantidad de butacas sin vender: " << butacasRestantes;


    return 0;
}
