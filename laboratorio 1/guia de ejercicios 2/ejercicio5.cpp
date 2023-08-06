#include <iostream>

using namespace std;

/*
Un negocio de perfumería efectúa descuentos según el importe de la venta.
- Si el importe es menor a $100 aplicar un descuento del 5%
- Si el importe es entre $100 y hasta $500 aplicar un descuento del 10%
- Si el importe es mayor a $500 aplicar un descuento del 15%
Hacer un programa donde se ingresa el importe original sin descuento y que se informe por pantalla el importe con el descuento ya aplicado.
*/

int main() {
    float importeVenta, total;

    cout << "Ingrese el importe de la venta: ";
    cin >> importeVenta;

    if (importeVenta > 500) {
        total = importeVenta * 0.85;
    } else {
        if (importeVenta > 100) {
            total = importeVenta * 0.90;
        } else {
            total = importeVenta * 0.95;
        }
    }

    cout << "El total es: " << total;
    return 0;
}
