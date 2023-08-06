#include <iostream>
#include "Encuesta.h"
using namespace std;

int main()
{
    const int LONGITUD_ENCUESTA = 5000;
    Encuesta encuestas[LONGITUD_ENCUESTA] = {};
    bool paises[65] = {false};

    int indiceActual = 0;


    cout << "Numero de encuesta: ";
    cin >> encuestas[indiceActual].numeroEncuesta;

    while (encuestas[indiceActual].numeroEncuesta != 0) {
        cout << "Edad: ";
        cin >> encuestas[indiceActual].edad;

        cout << "Pais residencia [entre 50 y 115]: ";
        cin >> encuestas[indiceActual].paisResidencia;
        encuestas[indiceActual].paisResidencia -= 50;

        cout << "Grado satisfaccion [entre 1 y 5]: ";
        cin >> encuestas[indiceActual].gradoSatisfaccion;

        cout << "ID sistema operativo" << endl;
        cout << "100- DOS" << endl;
        cout << "200- Windows" << endl;
        cout << "300- Linux" << endl;
        cout << "400- MacOS" << endl;
        cout << "500- Android" << endl;
        cout << "600- IOS" << endl << endl;
        cout << "Ingrese una opcion: ";
        cin >> encuestas[indiceActual].idSistemaOperativo;

        cout << "Tiempo total jugado: ";
        cin >> encuestas[indiceActual].tiempoJugado;







        indiceActual++;
        cout << "Numero de encuesta: ";
        cin >> encuestas[indiceActual].numeroEncuesta;
    }

    //Hacer una función llamada Punto1 que muestre los nombres de los sistemas operativos que no registraron jugadores de más de 60 años
    cout << "Nombre de los sistemas operativos que no registraron  jugadores de mas de 60 anios: ";
    Punto1(encuestas, LONGITUD_ENCUESTA);
    cout << endl;

    //La cantidad de encuestados que jugaron entre 1 y 3 horas (ambos inclusive).
    cout << "Cantidad encuestados que jugaron entre 1 y 3 horas: " << calcularEncuestadosJugaronEntreUnaYTresHoras(encuestas, LONGITUD_ENCUESTA) << endl;

    //Hacer una función llamada Punto3 que informe la cantidad de países donde el grado de satisfacción promedio sea mayor a 3.
    cout << "cantidad de paises donde el grado de satisfaccion es mayor a 3: " << Punto3(encuestas, paises, 65) << endl;



    /*for (int i = 0; i < LONGITUD_ENCUESTA; i++) {
        cout << encuestas[i].edad;
    }*/

    return 0;
}
