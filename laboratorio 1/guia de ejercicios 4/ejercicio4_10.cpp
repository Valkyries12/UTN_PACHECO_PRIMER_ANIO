#include <iostream>

using namespace std;
/*
El festival Larapalooza, el mejor festival musical del mundo, brindará una serie de conciertos distribuidos en tres jornadas distintas.
Se desea un programa que registre los artistas que participarán. Por cada artista se registró:
Número de artista (entero)
Integrantes (entero)
Jornada (1, 2 o 3)
Duración del show en minutos (entero)

La información no se encuentra ordenada bajo ningún criterio. La carga de datos se finaliza con un número de artista igual a cero. Calcular e informar:
El número de artista que realice el show más largo de la jornada 1.
La cantidad de solistas (artistas de 1 integrante) que participaron en cada una de las jornadas. (se muestran tres resultados).
La jornada más extensa (en minutos).
Duración promedio de show por artista (se muestra un resultado).

*/


int main() {
    int numeroArtista = 1, integrantes, jornada, duracionShow, promedio;
    int maxDuracionShow, numeroArtistaMaxDuracionShow;
    int contSolistaJornada1 = 0, contSolistaJornada2 = 0, contSolistaJornada3 = 0, acumDuracionJornada1 = 0, acumDuracionJornada2 = 0, acumDuracionJornada3 = 0, jornadaMasExtensa, acumDuracion = 0, contArtistas = 0;
    bool yaPaso = false;

    cout << "numero artista: ";
    cin >> numeroArtista;

    while (numeroArtista != 0) {

        cout << "integrantes: ";
        cin >> integrantes;
        cout << "jornada 1, 2 o 3 : ";
        cin >> jornada;
        cout << "duracion del show: ";
        cin >> duracionShow;
        cout << endl;

        acumDuracion += duracionShow;
        contArtistas++;

        //La cantidad de solistas (artistas de 1 integrante) que participaron en cada una de las jornadas. (se muestran tres resultados).
        if (integrantes == 1) {
            switch (jornada) {
                case 1:
                    contSolistaJornada1++;
                break;
                case 2:
                    contSolistaJornada2++;
                break;
                case 3:
                    contSolistaJornada3++;
                break;
            }
        }

        if (!yaPaso) {
            yaPaso = true;
            numeroArtistaMaxDuracionShow = numeroArtista;
            maxDuracionShow = duracionShow;
        }
        //El número de artista que realice el show más largo de la jornada 1.
        if (jornada == 1 && duracionShow > maxDuracionShow) {
            maxDuracionShow = duracionShow;
            numeroArtistaMaxDuracionShow = numeroArtista;
        }

        //La jornada más extensa (en minutos).
            switch (jornada) {
                case 1:
                    acumDuracionJornada1 += duracionShow;
                break;
                case 2:
                    acumDuracionJornada2 += duracionShow;
                break;
                case 3:
                    acumDuracionJornada3 += duracionShow;
                break;
            }

        if (acumDuracionJornada1 > acumDuracionJornada2 && acumDuracionJornada2 > acumDuracionJornada3) {
            jornadaMasExtensa = 1;
        } else if (acumDuracionJornada3 > acumDuracionJornada2 && acumDuracionJornada2 > acumDuracionJornada1) {
            jornadaMasExtensa = 3;
        } else {
            jornadaMasExtensa = 2;
        }

        cout << "numero artista: ";
        cin >> numeroArtista;
    }

    promedio = acumDuracion / contArtistas;

    cout << endl;
    cout << "=========== RESULTADO ===========" << endl;
    //El número de artista que realice el show más largo de la jornada 1.
    cout << "Numero artista que realizo el show mas largo de la jornada 1: " << numeroArtistaMaxDuracionShow << endl;
    //La cantidad de solistas (artistas de 1 integrante) que participaron en cada una de las jornadas. (se muestran tres resultados).
    cout << "Solistas de la jornada 1: " << contSolistaJornada1 << endl;
    cout << "Solistas de la jornada 2: " << contSolistaJornada2 << endl;
    cout << "Solistas de la jornada 3: " << contSolistaJornada3 << endl;
    //La jornada más extensa (en minutos).
    cout << "La jornada mas extensa es la numero: " << jornadaMasExtensa << endl;
    //Duración promedio de show por artista (se muestra un resultado).
    cout << "Duracion promedio de show por artista: " << promedio << endl;
    cout << "========== FIN ===========";
    return 0;
}
