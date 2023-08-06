#include <iostream>

using namespace std;

/*
Cargar un conjunto de 100 números reales y formar con los valores positivos un vector llamado pos y con los valores negativos un vector llamado nega.
 Mostrar por pantalla la cantidad de elementos que contiene cada vector y luego cada uno de los vectores. Sólo deben utilizarse dos vectores en el programa: pos y nega
*/

int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;
    const int LONGITUD = 10;
    int contPos = 0, contNeg = 0, num;
    float pos[LONGITUD] = {};
    float nega[LONGITUD] = {};



    for (int i = 0; i < LONGITUD; i++) {
        cout << "Ingrese un numero: ";
        cin >> num;

        if (num < 0) {
            contNeg++;
            nega[contNeg-1] = num;
        } else {
            if (num > 0) {
                contPos++;
                pos[contPos-1] = num;
            }
        }
    }

    cout << "Hay " << contNeg << " numeros negativos. " << endl;
    for (int i = 0; i < contNeg; i++) {
        cout << nega[i] << " , ";
    }

    cout << endl << endl << "Hay " << contPos << " numeros positivos. " << endl;
    for (int i = 0; i < contPos; i++) {
        cout << pos[i] << " , ";
    }





    cout << endl << endl << "=== FIN DEL PROGRAMA ===";
    return 0;
}
