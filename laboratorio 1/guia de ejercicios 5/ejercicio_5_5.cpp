#include <iostream>

using namespace std;

/*
Un restaurant registró la información de todas las comandas atendidas la noche anterior por sus mozos. Por cada comanda se registró:
Número de comanda
Número de mozo (entero)
Tipo de plato (1 - Entrada, 2 - Plato Principal, 3 - Postre)
Importe (float)

La información se encuentra agrupada por Número de mozo. Cada mozo atendió diez comandas.
Para indicar el fin de la carga de datos se registra un Número de mozo negativo.

Calcular e informar:
1 - Por cada mozo, la cantidad de platos de cada tipo.
2 - El número de mozo que haya atendido el Plato Principal de menor importe.
3 - El importe promedio por comanda (entre todas las comandas).

NOTA: Una comanda es un servicio de mesa (pedido) atendido por un mozo en un restaurant.

*/

int main() {
    int nroComanda, nroMozo, tipoPlato, qtyEntrada = 0, qtyPlatoPrincipal = 0, qtyPostre = 0, qtyComandas = 0;
    int nroMozoPlatoPrincipalMenorImporte = -1;
    const int QTY_COMANDAS = 3;
    float importe, platoPrincipalMenorImporte, importeTotal = 0, importePromedio;

    cout << "====== INICIO DEL PROGRAMA ======" << endl << endl;

    cout << "Ingrese numero de mozo: ";
    cin >> nroMozo;

    while (nroMozo > 0) {


        for (int i = 1; i <= QTY_COMANDAS; i++) {
            cout << "Numero comanda: ";
            cin >> nroComanda;
            cout << "Tipo de plato [1: Entrada, 2: Plato principal, 3: Postre]: ";
            cin >> tipoPlato;
            cout << "Importe: ";
            cin >> importe;

            importeTotal += importe;
            qtyComandas += 1;

            switch (tipoPlato) {
                case 1:
                    qtyEntrada++;
                    break;
                case 2:
                    qtyPlatoPrincipal++;
                    if (nroMozoPlatoPrincipalMenorImporte == -1 || importe < platoPrincipalMenorImporte) {
                        platoPrincipalMenorImporte = importe;
                        nroMozoPlatoPrincipalMenorImporte = nroMozo;
                    }
                    break;
                case 3:
                    qtyPostre++;
                    break;

            }
        }

        //Por cada mozo, la cantidad de platos de cada tipo.
        cout << endl << endl << "=== MOZO nro " << nroMozo << " ===" << endl;
        cout << "Cantidad de entradas servidas: " << qtyEntrada << endl;
        cout << "Cantidad de Platos principales servidos: " << qtyPlatoPrincipal << endl;
        cout << "Cantidad de Postres servidos: " << qtyPostre << endl;

        qtyEntrada = 0;
        qtyPlatoPrincipal = 0;
        qtyPostre = 0;


        cout << "Ingrese numero de mozo: ";
        cin >> nroMozo;
    }

    importePromedio = importeTotal / qtyComandas;

    //El número de mozo que haya atendido el Plato Principal de menor importe.
    if (nroMozoPlatoPrincipalMenorImporte != -1) {
        cout << endl << "Nro mozo que atendio el plato principal con menor importe: " << nroMozoPlatoPrincipalMenorImporte << endl;
    }
    //El importe promedio por comanda (entre todas las comandas).
    cout << "Importe promedio por comanda: " << importePromedio << endl;


    cout << endl << endl << "====== FIN DEL PROGRAMA ======";

    return 0;
}
