#include <iostream>

using namespace std;

/*
Una estación meteorológica registró una muestra climática de los últimos 15 días. Por cada día registró:
Número de día (entero)
Temperatura (float)
Milímetros de lluvia (float)
Visibilidad en km (float)

Hay un registro por cada día. La información se encuentra ordenada por día. Se pide calcular e informar:
El número de día que se haya registrado la temperatura máxima.
La amplitud térmica de todo el período.
La cantidad de días con neblina.
Mostrar "Quincena lluviosa" si hubo más días de lluvia que días sin lluvia. Mostrar "Quincena húmeda" si llovió al menos un tercio de los días. De lo contrario mostrar "Quincena seca".

NOTA: La amplitud térmica es la diferencia entre la temperatura máxima y la temperatura mínima.
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

    cout << "El dia con mayor temperatura fue " << diaTemperaturaMaxima << " e hizo " << maximaTemperatura << "ºC" << endl;
    cout << "La amplitud termina del periodo fue de: " << amplitudTermicaXPeriodo << "ºC" << endl;
    cout << "Hubo " << cantidadDiasConNeblina << " dias con neblina" << endl;
    cout << mensajeLluvia << endl;



    return 0;
}
