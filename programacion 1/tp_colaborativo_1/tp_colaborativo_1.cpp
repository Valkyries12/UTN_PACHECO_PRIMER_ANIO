#include <iostream>

using namespace std;

/*
Una casa de ventas de libros con varias sucursales registró las ventas durante el mes anterior
en un lote de registros. Para cada venta se registraron los siguientes datos:
Sucursal de la venta (1 a 20)
Número del vendedor que efectuó la venta (1 a 150)
Día de la venta (1 a 31)
Importe de la venta
Tipo de Cliente ("U"= Universitario, "N"= No Universitario )
Editorial del libro("A"= Alvarez, "B"= Benitez, "P"= Perez)
El lote finaliza con un registro con importe igual a cero. Los datos se ingresan agrupados por
sucursal.
A partir de esta información se pide determinar e informar:
a) La comisión total pagada a todos los vendedores en el mes para cada sucursal.
Considerar que la comisión es un 10% del importe de la venta si se trata de un libro de la
editorial Alvarez, un 12% para Benitez y un 15% para Perez.
b) La cantidad total vendida de libros por cada sucursal y discriminado por cada editorial.
Se deberán mostrar tres cantidades por sucursal.
c) El número de vendedor que haya efectuado la venta individual de mayor importe, informando en qué sucursal trabaja y el día en que se realizó esa venta.
Se esperan los datos de un único vendedor.
*/


int main() {
    int  numVendedor, diaVenta, sucursalVentaActual, sucursalVentaAnterior;
    float importeVenta, comisionTotal = 0;
    char tipoCliente, editorialLibro;

    cout << "=== INICIO DEL PROGRAMA ===" << endl << endl << endl;


    cout << "Sucursal de la venta [1 al 20]: ";
    cin >> sucursalVentaActual;
    cout << endl << "Numero de vendedor [1 a 150]: ";
    cin >> numVendedor;
    cout << endl << "Dia de la venta [1 a 31]: ";
    cin >> diaVenta;
    cout << "Tipo cliente" << endl;
    cout << "U- universitario" << endl;
    cout << "N- no universitario" << endl << endl;
    cout << "Ingrese una opcion: ";
    cin >> tipoCliente;
    cout << "Editorial del libro" << endl;
    cout << "A- Alvarez" << endl;
    cout << "B- Benitez" << endl;
    cout << "P- Perez" << endl << endl;
    cout << "Ingrese una opcion: ";
    cin >> editorialLibro;
    cout << endl << "Importe de la venta: ";
    cin >> importeVenta;

    while (importeVenta != 0) {
        sucursalVentaAnterior = sucursalVentaActual;


        while (sucursalVentaActual == sucursalVentaAnterior && importeVenta != 0) {

            switch (editorialLibro) {
                case 'A':
                    comisionTotal += importeVenta * 0.10;
                    break;
                case 'B':
                    comisionTotal += importeVenta * 0.12;
                    break;
                case 'P':
                    comisionTotal += importeVenta * 0.15;
                    break;
            }


            cout << endl << "Sucursal de la venta [1 al 20]: ";
            cin >> sucursalVentaActual;
            cout << endl << "Numero de vendedor [1 a 150]: ";
            cin >> numVendedor;
            cout << endl << "Dia de la venta [1 a 31]: ";
            cin >> diaVenta;
            cout << "Tipo cliente" << endl;
            cout << "U- universitario" << endl;
            cout << "N- no universitario" << endl << endl;
            cout << "Ingrese una opcion: ";
            cin >> tipoCliente;
            cout << "Editorial del libro" << endl;
            cout << "A- Alvarez" << endl;
            cout << "B- Benitez" << endl;
            cout << "P- Perez" << endl << endl;
            cout << "Ingrese una opcion: ";
            cin >> editorialLibro;
            cout << endl << "Importe de la venta: ";
            cin >> importeVenta;
        }

        cout << endl << "===SUCURSAL " << sucursalVentaAnterior << endl << endl;
        //a) La comisión total pagada a todos los vendedores en el mes para cada sucursal.
        //Considerar que la comisión es un 10% del importe de la venta si se trata de un libro de la
        //editorial Alvarez, un 12% para Benitez y un 15% para Perez.
        cout << "Comision total pagada en el mes: " << comisionTotal << endl;
        comisionTotal = 0;
    }


















    cout << endl << endl << "=== FIN DEL PROGRAMA ===";

    return 0;
}
