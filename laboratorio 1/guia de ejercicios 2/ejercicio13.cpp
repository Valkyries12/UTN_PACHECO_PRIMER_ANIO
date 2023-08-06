#include <iostream>

using namespace std;

/*
Hacer un programa para ingresar por teclado la fecha de nacimiento de una persona, ingresando día, mes y año como 3 datos individuales.
Luego ingresar la fecha actual ingresando día, mes y año como 3 datos individuales.
Calcular luego la edad en años de esa persona y listarlo por pantalla.
Ejemplo 1. Si se ingresa como fecha de nacimiento: 3/12/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que los 19 recién los cumple en diciembre.
Ejemplo 2. Si se ingresa como fecha de nacimiento: 3/1/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 19.
Ejemplo 3. Si se ingresa como fecha de nacimiento: 28/2/2000 y la fecha actual es 26/2/2019 la edad de esa persona es 18 ya que le faltan 2 días para cumplir los 19 años.

*/

int main() {
    int diaNacimiento, mesNacimiento, anioNacimiento, diaActual, mesActual, anioActual, anios;

    cout << "Ingrese su dia de nacimiento: ";
    cin >> diaNacimiento;
    cout << "Ingrerse su mes de nacimiento: ";
    cin >> mesNacimiento;
    cout << "Ingrese su ano de nacimiento: ";
    cin >> anioNacimiento;
    cout << "Ingrese el dia actual: ";
    cin >> diaActual;
    cout << "Ingrese el mes actual: ";
    cin >> mesActual;
    cout << "Ingrese el año actual: ";
    cin >> anioActual;

    anios = anioActual - anioNacimiento;
    if (mesActual > mesNacimiento) {
        anios ++;
    } else {
        anios --;
        if (mesActual == mesNacimiento) {
            if (diaActual >= diaNacimiento) {
                anios ++;
            }
        }
    }

    cout << "Tiene " << anios << " años";
    return 0;
}
