#include <iostream>

using namespace std;

/*
La asociaci�n de maratonistas de maratones de verdad (no de series) quiere registrar la informaci�n de las �ltimas 5 maratones que se realizaron en el pa�s.
Por cada participante se registr� la siguiente informaci�n:
N�mero de marat�n (entero)
N�mero de participante (entero)
G�nero ('F' - Femenino, 'M' - Masculino, 'X' - Prefiere no indicarlo)
Tiempo (en minutos)
Finaliza (1 - Finaliza, 0 - Abandona)

La informaci�n se encuentra agrupada por n�mero de marat�n. Cada marat�n puede tener una cantidad distinta de participantes.
Para indicar el fin de la carga de datos de una marat�n se ingresa un n�mero de participante negativo.

Se pide calcular e informar:
-   El porcentaje de participantes por g�nero.
- El tiempo promedio (en minutos) entre todos los que hayan finalizado maratones.
- Por cada marat�n, la persona que haya realizado el menor tiempo y haya finalizado la competencia. Indicar el n�mero de participante y el tiempo.

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

    //El porcentaje de participantes por g�nero.
    porcenGeneroF = (qtyGeneroF * 100) / qtyGeneros;
    porcenGeneroM = (qtyGeneroM * 100) / qtyGeneros;
    porcenGeneroX = (qtyGeneroX * 100) / qtyGeneros;

    cout << endl << endl << "Total participantes: " << qtyGeneros << endl;
    cout << "Masculinos: " << qtyGeneroM << " %" << endl;
    cout << "Femeninos: " << qtyGeneroF << " %" << endl;
    cout << "Prefieren no decir: " << qtyGeneroX << " %" << endl;
    return 0;
}
