#include <iostream>

using namespace std;

/*
Se dispone de las ventas de un negocio durante el mes pasado. Por cada venta se registró el número de venta,
el número de día y el importe de la venta. El fin de la carga de datos se indica con número de venta igual a 0.
Se pide calcular e informar:
Por cada día, la recaudación total (sólo de aquellos días que tuvieron recaudación).
El número de día que más se recaudó en total y cuál fue la recaudación máxima.

*/

int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;
    const int LONGITUD = 30;
    float ventasPorDia[LONGITUD] = {}, importeVenta, importeMax = 0;
    int nroDia, nroVenta = -1, nroDiaMax;

    cout << "Numero de venta: ";
    cin >> nroVenta;

    while (nroVenta != 0) {
        do {
            cout << "Numero dia [del 1 al 30]: ";
            cin >> nroDia;

            if (nroDia < 1 || nroDia > 30) {
                cout << "Error, ingrese nuevamente." << endl << endl;
            }
        } while (nroDia < 1 || nroDia > 30);
        cout << "Importe: ";
        cin >> importeVenta;

        ventasPorDia[nroDia-1] += importeVenta;

        cout << "Numero de venta: ";
        cin >> nroVenta;
    }


    for (int i = 0; i < LONGITUD; i++) {
        if (ventasPorDia[i] > 0) {
            cout << "TOTAL DIA " << i+1 << " --> " << ventasPorDia[i] << "$" << endl;
        }
    }

    for (int i = 0; i < LONGITUD; i++) {
        if (ventasPorDia[i] > importeMax) {
            importeMax = ventasPorDia[i];
            nroDiaMax = i+1;
        }
    }


    if (importeMax > 0) {
        cout << "El dia " << nroDiaMax << " se recaudo un maximo de " << importeMax << " $" << endl;
    }


    cout << endl << endl << "=== FIN DEL PROGRAMA ===";
    return 0;
}
