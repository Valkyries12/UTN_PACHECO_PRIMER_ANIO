#include <iostream>

using namespace std;

/*
Hacer una funci�n que reciba como par�metro un n�mero float y devuelva un n�mero entero con el redondeo del mismo.
Por ejemplo:
Si recibe 7.78 debe devolver 8.
Si recibe 7.48 debe devolver 7.
Si recibe 7.5 debe devolver 8.

*/

int redondear(float num);

int main() {
    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl;
    float num;

    cout << "Ingrese un numero: ";
    cin >> num;

    cout << redondear(num);

    cout << endl << endl << "=== FIN DEL PROGRAMA ===";
    return 0;
}

int redondear(float num) {
    int parteEntera = (int) num;
    float parteDecimal = num - parteEntera;

    if (parteDecimal >= 0.50) {
        parteEntera++;
    }

    return parteEntera;
};
