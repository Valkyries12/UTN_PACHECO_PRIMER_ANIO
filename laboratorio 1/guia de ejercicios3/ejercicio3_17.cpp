#include <iostream>

using namespace std;

/*
Una estaci�n meteorol�gica registr� una muestra clim�tica de los �ltimos 15 d�as. Por cada d�a registr�:
N�mero de d�a (entero)
Temperatura (float)
Mil�metros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada d�a. La informaci�n se encuentra ordenada por d�a. Se pide calcular e informar:
El n�mero de d�a que se haya registrado la temperatura m�xima.
La amplitud t�rmica de todo el per�odo.
La cantidad de d�as con neblina.
Mostrar "Quincena lluviosa" si hubo m�s d�as de lluvia que d�as sin lluvia. Mostrar "Quincena h�meda" si llovi� al menos un tercio de los d�as. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud t�rmica es la diferencia entre la temperatura m�xima y la temperatura m�nima.
NOTA: Se considera neblina a una visibilidad menor a 2 km.

*/

int main() {
    int numeroDia, diaTemperaturaMaxima, cantidadDiasConNeblina = 0, cantidadDiasConLluvia = 0;
    float temperaturaInput, milimetrosLluviaInput, visibilidadInput, amplitudTermicaXPeriodo, maximaTemperatura, minimaTemperatura;
    string mensajeLluvia;

    for (int i = 1; i < 16; i++) {
        numeroDia = i;
        cout << "==========================" << endl;
        cout << "=====      DIA " << numeroDia << "     =====" << endl;
        cout << "==========================" << endl;
        cout << "Ingrese la temperatura del dia: ";
        cin >> temperaturaInput;
        cout << "Ingrese la cantidad de lluvia en mm: ";
        cin >> milimetrosLluviaInput;
        cout << "Visibilidad en km: ";
        cin >> visibilidadInput;

        if (i == 1) {
            maximaTemperatura = temperaturaInput;
            diaTemperaturaMaxima = numeroDia;
            minimaTemperatura = temperaturaInput;
        }

        if (temperaturaInput > maximaTemperatura) {
            maximaTemperatura = temperaturaInput;
            diaTemperaturaMaxima = numeroDia;
        }

        if (temperaturaInput < minimaTemperatura) {
            minimaTemperatura = temperaturaInput;
        }

        if (milimetrosLluviaInput > 0) {
            cantidadDiasConLluvia++;
        }

        if (visibilidadInput < 2) {
            cantidadDiasConNeblina++;
        }

        if (cantidadDiasConLluvia > 7) {
            mensajeLluvia = "Quincena lluviosa";
        }
        else if (cantidadDiasConLluvia >= 5 && cantidadDiasConLluvia < 8) {
            mensajeLluvia = "Quincena humeda";
        } else {
            mensajeLluvia = "Quincena seca";
        }
    }

    amplitudTermicaXPeriodo = maximaTemperatura - minimaTemperatura;
    if (amplitudTermicaXPeriodo < 0) {
        amplitudTermicaXPeriodo *= -1;
    }

    cout << "El dia con mayor temperatura fue " << diaTemperaturaMaxima << " e hizo " << maximaTemperatura << "�C" << endl;
    cout << "La amplitud termina del periodo fue de: " << amplitudTermicaXPeriodo << "�C" << endl;
    cout << "Hubo " << cantidadDiasConNeblina << " dias con neblina" << endl;
    cout << mensajeLluvia << endl;



    return 0;
}
