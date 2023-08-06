#include <iostream>

using namespace std;

/*
Al ingresar a la opción 1, nos pedirá una medida (float) en metros que con las siguientes opciones del menú podremos mostrarla convertida a otras unidades.
El programa debe permitir al usuario ingresar a las opciones las veces que lo desee y sólo finalizará al ingresar a la opción 0.

*/

int main() {
    int opcion;
    float metros = 0, conversion;

    do {
        cout << endl << "Menu principal" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "1 - Ingresar medida en metros" << endl;
        cout << "2 - Convertir a centimetros" << endl;
        cout << "3 - Convertir a kilometros" << endl;
        cout << "4 - Convertir a pulgadas" << endl;
        cout << "5 - Convertir a pies" << endl;
        cout << "-----------------------------------------" << endl;
        cout << "0 - Salir del programa" << endl << endl;
        cout << "Ingrese opcion:";
        cin >> opcion;

        switch (opcion) {
            case 1:
                cout << endl << "Ingrese una medida en metros: ";
                cin >> metros;
                break;
            case 2:
                if (metros == 0) {
                    cout << "Por favor ingrese una medida en metros" << endl;
                } else {
                    conversion = metros * 100;
                    cout << endl << metros << " metros son " << conversion << " centimetros" << endl;
                }

                break;
            case 3:
                if (metros == 0) {
                    cout << "Por favor ingrese una medida en metros" << endl;
                } else {
                    conversion = metros / 1000;
                    cout << endl << metros << " metros son " << conversion << " kilometros" << endl;
                }
                break;
            case 4:
                if (metros == 0) {
                    cout << "Por favor ingrese una medida en metros" << endl;
                } else {
                    conversion = metros * 39.37;
                    cout << endl << metros << " metros son " << conversion << " pulgadas" << endl;
                }
                break;
            case 5:
                if (metros == 0) {
                    cout << "Por favor ingrese una medida en metros" << endl;
                } else {
                    conversion = metros * 3.281;
                    cout << endl << metros << " metros son " << conversion << " pies" << endl;
                }
                break;
            default:
                cout << "Por favor ingrese una opcion valida" << endl;

        }
    } while (opcion != 0);

    cout << "==== FIN DEL PROGRAMA ====";

    return 0;
}
