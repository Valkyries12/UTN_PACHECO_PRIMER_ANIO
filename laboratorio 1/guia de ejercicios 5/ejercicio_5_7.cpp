#include <iostream>

using namespace std;

/*
La asociación de maratonistas de maratones de verdad (no de series) quiere registrar la información de las últimas 5 maratones que se realizaron en el país.
Por cada participante se registró la siguiente información:
Número de maratón (entero)
Número de participante (entero)
Género ('F' - Femenino, 'M' - Masculino, 'X' - Prefiere no indicarlo)
Tiempo (en minutos)
Finaliza (1 - Finaliza, 0 - Abandona)

La información se encuentra agrupada por número de maratón. Cada maratón puede tener una cantidad distinta de participantes.
Para indicar el fin de la carga de datos de una maratón se ingresa un número de participante negativo.

Se pide calcular e informar:
-   El porcentaje de participantes por género.
- El tiempo promedio (en minutos) entre todos los que hayan finalizado maratones.
- Por cada maratón, la persona que haya realizado el menor tiempo y haya finalizado la competencia. Indicar el número de participante y el tiempo.

*/

int main() {
    const int CANTIDAD_MARATONES = 5;
    int nroMaraton, nroParticipante, tiempo, finaliza;
    int porcenGeneroF, porcenGeneroM, porcenGeneroX, qtyGeneroF = 0, qtyGeneroM = 0, qtyGeneroX = 0, qtyGeneros = 0, minutosTotales = 0, minutosTotalesFinaliza = 0, qtyFinalizan = 0, tiempoPromedio;
    int nroParticipanteMenorTiempo, tiempoParticipanteMenorTiempo;
    char genero;

    for (int i = 1; i <= CANTIDAD_MARATONES; i++) {
        nroMaraton = i;
        cout << endl << "=== MARATON " << nroMaraton << " ===" << endl << endl;
        cout << "Nro participante: ";
        cin >> nroParticipante;

        while (nroParticipante > -1) {
            cout << "Genero del participante [F- femenino, M- masculino, X- prefiere no indicar]: ";
            cin >> genero;
            cout << "Tiempo tardado: ";
            cin >> tiempo;
            cout << "Finaliza [1- finaliza, 0- abandona]: ";
            cin >> finaliza;

            minutosTotales += tiempo;
            qtyGeneros++;
            switch (genero) {
                case 'F':
                    qtyGeneroF++;
                    break;
                case 'M':
                    qtyGeneroM++;
                    break;
                case 'X':
                    qtyGeneroX++;
                    break;
            }

            if (finaliza == 1) {
                minutosTotalesFinaliza += tiempo;
                qtyFinalizan++;
            }


            cout << endl << "Nro participante: ";
            cin >> nroParticipante;
        }
    }

    //El porcentaje de participantes por género.
    porcenGeneroF = (qtyGeneroF * 100) / qtyGeneros;
    porcenGeneroM = (qtyGeneroM * 100) / qtyGeneros;
    porcenGeneroX = (qtyGeneroX * 100) / qtyGeneros;

    cout << endl << endl << "Total participantes: " << qtyGeneros << endl;
    cout << "Masculinos: " << qtyGeneroM << " %" << endl;
    cout << "Femeninos: " << qtyGeneroF << " %" << endl;
    cout << "Prefieren no decir: " << qtyGeneroX << " %" << endl;
    return 0;
}
