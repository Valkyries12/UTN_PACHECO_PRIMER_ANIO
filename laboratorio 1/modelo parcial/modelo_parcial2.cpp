#include <iostream>

using namespace std;

/*
Una zapatería dispone de la información de los calzados vendidos en el primer cuatrimestre de 2023 en sus 10 sucursales. Por cada venta se registra:
Sucursal (número entero)
Mes (1 a 4)
Tipo de calzado ('Z' - Zapatos, 'X' - Zapatillas, 'P' - Pantuflas, 'O' - Ojotas)
Número de talle (entero)
Importe (float)

Todas las sucursales han registrado ventas. La información se encuentra agrupada por sucursal.
Para indicar el fin de la carga de datos de una sucursal se ingresa un código de sucursal igual a cero. Se pide calcular e informar:

Se pide calcular e informar

A)Por cada sucursal, el promedio de importe de los calzados de talle 40.
B)La cantidad de sucursales que vendieron zapatos pero no pantuflas.
C)El tipo de calzado que haya totalizado más dinero en concepto de ventas
D)Los tipos de calzados que haya vendido la sucursal número 50. Se deben listar los nombres de los tipos de calzados vendidos sin repetir.

Aclaraciones
Una venta solamente registra un tipo de calzado.
Solamente habrá un tipo de calzado que haya totalizado la mayor cantidad de dinero en total en concepto de ventas.

*/

int main() {
    const int CANTIDAD_SUCURSALES = 4;
    int nroSucursal, nroSucursalActual, nroMes, nroTalle, cantTalle40 = 0, cantSucuVendieronZapatosNoPantuflas = 0;
    char tipoCalzado;
    float importeVenta, totalImporteTalle40 = 0, totalImporteZapatos = 0, totalImporteZapatillas = 0, totalImportePantuflas = 0, totalImporteOjotas = 0, maxTotalImporte;
    bool vendioZapatos = false, vendioPantuflas = false, vendioZapatillas = false, vendioOjotas = false, yaPaso = false;
    string maxTotalImporteTipoCalzado, calzadosSucu50 = "";

    for (int i = 1; i <= CANTIDAD_SUCURSALES; i++) {
        cout << endl << "numero de sucursal: ";
        cin >> nroSucursal;


        while (nroSucursal != 0) {
            nroSucursalActual = nroSucursal;
            cout << "Ingrese mes" << endl;
            cout << "1- Enero" << endl;
            cout << "2- Febrero" << endl;
            cout << "3- Marzo" << endl;
            cout << "4- Abril" << endl << endl;
            cout << "Ingrese una opcion: ";
            cin >> nroMes;
            cout << endl << "Tipo Calzado" << endl;
            cout << "Z- Zapatos" << endl;
            cout << "X- Zapatillas" << endl;
            cout << "P- Pantuflas" << endl;
            cout << "O- Ojotas" << endl << endl;
            cout << "Ingrese una opcion: ";
            cin >> tipoCalzado;
            cout << endl << "Numero de talle: ";
            cin >> nroTalle;
            cout << endl << "Importe venta: ";
            cin >> importeVenta;

            if (i == 1) {
                maxTotalImporte = importeVenta;
            }

            switch (tipoCalzado) {
                case 'Z':
                    vendioZapatos = true;
                    totalImporteZapatos += importeVenta;
                    if (totalImporteZapatos > maxTotalImporte) {
                        maxTotalImporte = totalImporteZapatos;
                        maxTotalImporteTipoCalzado = "Zapatos";
                    }
                    break;
                case 'X':
                    vendioZapatillas = true;
                    totalImporteZapatillas += importeVenta;
                    if (totalImporteZapatillas > maxTotalImporte) {
                        maxTotalImporte = totalImporteZapatillas;
                        maxTotalImporteTipoCalzado = "Zapatillas";
                    }
                    break;
                case 'P':
                    vendioPantuflas = true;
                    totalImportePantuflas += importeVenta;
                    if (totalImportePantuflas > maxTotalImporte) {
                        maxTotalImporte = totalImportePantuflas;
                        maxTotalImporteTipoCalzado = "Pantuflas";
                    }
                    break;
                case 'O':
                    vendioOjotas = true;
                    totalImporteOjotas += importeVenta;
                    if (totalImporteOjotas > maxTotalImporte) {
                        maxTotalImporte = totalImporteOjotas;
                        maxTotalImporteTipoCalzado = "Ojotas";
                    }
                    break;
            }



            if (nroTalle == 40) {
                cantTalle40++;
                totalImporteTalle40 += importeVenta;
            }

            cout << endl << "numero de sucursal: ";
            cin >> nroSucursal;
        }

        if (vendioZapatos && !vendioPantuflas) {
            cantSucuVendieronZapatosNoPantuflas++;
        }


        cout << endl << "=== SUCURSAL "  << nroSucursalActual << " ===" << endl;
        //A)Por cada sucursal, el promedio de importe de los calzados de talle 40.
        if (cantTalle40 > 0) {
            cout << "Promedio importa para calzados talle 40: " << totalImporteTalle40 / cantTalle40 << endl;
        } else {
            cout << "No se vendieron calzados talle 40 " << endl;
        }

        if (nroSucursalActual == 50) {
            if (vendioZapatos) {
                calzadosSucu50 += " - Zapatos";
            }
            if (vendioZapatillas) {
                calzadosSucu50 += " - Zapatillas";
            }
            if (vendioPantuflas) {
                calzadosSucu50 += " - Pantuflas";
            }
            if (vendioOjotas){
                calzadosSucu50 += " - Ojotas";
            }
        }

        cantTalle40 = 0;
        totalImporteTalle40 = 0;

        vendioZapatos = false;
        vendioPantuflas = false;
        vendioZapatillas = false;
        vendioOjotas = false;
    }


    cout << endl << endl << endl;
    //B)La cantidad de sucursales que vendieron zapatos pero no pantuflas.
    cout << "Cantidad de sucursales que vendieoron zapatos pero no pantuflas: " << cantSucuVendieronZapatosNoPantuflas << endl;
    //C)El tipo de calzado que haya totalizado más dinero en concepto de ventas
    cout << maxTotalImporteTipoCalzado << " fue el calzado que mas dinero hizo con $ " << maxTotalImporte << endl;
    //D)Los tipos de calzados que haya vendido la sucursal número 50. Se deben listar los nombres de los tipos de calzados vendidos sin repetir.
    if (calzadosSucu50 != "") {
        cout << "La sucursal numero 50 vendio: " << calzadosSucu50 << endl;
    } else {
        cout << "La sucursal numero 50 no tuvo ventas." << endl;
    }

    return 0;
}
