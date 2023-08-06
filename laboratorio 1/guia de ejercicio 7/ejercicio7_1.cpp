#include <iostream>

using namespace std;

/*
Hacer una función que reciba como parámetro dos números enteros y devuelva verdadero si el primero de ellos es múltiplo del segundo.
Caso contrario debe devolver falso.
*/

bool esMultiplo(int num1, int num2);

int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;
    int num1, num2;

    cout << "Ingrese el primer numero: ";
    cin >> num1;
    cout << "Ingrese el segundo numero: ";
    cin >> num2;

    cout << num1 << " es multiplo de " << num2 << " = " << esMultiplo(num1, num2);


    cout << endl << endl << "=== FIN DEL PROGRAMA ===";
    return 0;
}


bool esMultiplo(int num1, int num2) {
    bool resultado = false;
    if (num2 % num1 == 0) {
        resultado = true;
    }

    return resultado;
};
