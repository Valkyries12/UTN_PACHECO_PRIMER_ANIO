#include <iostream>
#include "Bidon.h"
#include "Vaso.h"

using namespace std;
/*
Un comerciante que tiene una tienda en la que vende batidos a turistas. En la tienda se venden 3 tipos de batidos con diferentes sabores,
los cuales se almacenan en bidones de diferentes tamaños: un bidón de 20L con sabor a "Banana", un bidón de 35L con sabor a "Ananá" y un bidón de 44L con sabor a "Sandia".

Al inicio de cada día, los 3 bidones se llenan completamente para comenzar a vender. Cada vez que se hace una venta, se registra el código de batido y
el tipo de vaso que el cliente desea: el código de batido puede ser 1 para "Banana", 2 para "Ananá" o 3 para "Sandia",
mientras que el tipo de vaso puede ser 1 para 150 ml, 2 para 200 ml o 3 para 300 ml.

Cada venta que se realiza implica el descuento de una cantidad de litros del bidón correspondiente al sabor y tamaño del vaso elegido.
Además, se debe tener en cuenta que no se pueden realizar ventas si no hay suficiente batido en el bidón correspondiente.

Al final del día, se debe leer el nivel de cada bidón para saber cuánto batido sobró en cada uno de ellos.

La carga de ventas finaliza cuando se ingresa un código de batido igual a cero. Para resolver este problema, se debe hacer un programa que procese todas las ventas del día y
calcule cuánto batido queda en cada bidón al final del mismo.

Al finalizar la carga de ventas, el programa debe imprimir la cantidad de litros que quedó en cada bidón y cuántos batidos vendió de cada uno.

*/
int main()
{
    int opcionBatido;
    int opcionVaso;
    Bidon batidoBanana(1, "banana", 20000);
    Bidon batidoAnana(2, "anana", 35000);
    Bidon batidoSandia(3, "sandia", 44000);
    Vaso vasoChico(1, 150);
    Vaso vasoMediano(2, 200);
    Vaso vasoGrande(3, 300);
    Vaso vasoActual;
    Bidon batidoActual;

    Bidon bidones[3] = {batidoBanana, batidoAnana, batidoSandia};
    Vaso vasos[3] = {vasoChico, vasoMediano, vasoGrande};

    do {
        cout << "¿Cual batido desea tomar?" << endl;
        cout << "1- Banana" << endl;
        cout << "2- Anana" << endl;
        cout << "3- Sandia" << endl << endl;
        cout << "Ingrese una opcion: ";
        cin >> opcionBatido;

        if (opcionBatido != 0) {
            cout << endl << endl << "Por favor elija un vaso" << endl;
            cout << "1- Chico" << endl;
            cout << "2- Mediano" << endl;
            cout << "3- Grande" << endl << endl;
            cout << "Ingrese una opcion: ";
            cin >> opcionVaso;

            batidoActual = bidones[opcionBatido-1];
            vasoActual = vasos[opcionVaso-1];
            batidoActual.servirBatido(vasoActual);
        }

        system("cls");
    } while(opcionBatido != 0);

    for (int i = 0; i < 3; i++) {
        bidones[i].mostrarCantidadVendida();
        bidones[i].mostrarLitrosRestante();
    }


    return 0;
}
