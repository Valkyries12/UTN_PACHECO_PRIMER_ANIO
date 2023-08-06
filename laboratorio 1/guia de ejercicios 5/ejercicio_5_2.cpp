#include <iostream>

using namespace std;

/*
Un banco tiene tres sucursales, ubicadas en las siguientes localidades:
- Sucursal 1: Virreyes
- Sucursal 2: San Fernando
- Sucursal 3: Tigre

En cada una de ellas se registra para cada transacción que realiza un cliente, los siguientes datos:
- Nro. de Cliente (100 al 1200)
- Nro. de Sucursal (1, 2 ó 3)
- Código de Transacción (‘D’ para depósitos, ‘E’ para extracciones)
- Monto en pesos de la transacción

El último registro se indica con nro. de cliente igual a cero. Se pide a partir de estos datos, determinar e informar:
a) Cantidad de depósitos por más de $1000.-.
b) El nro. de cliente que hizo la extracción por mayor monto, y en que sucursal la hizo.
c) El porcentaje de transacciones realizadas en cada una de las sucursales, respecto al total de las mismas.
d) Total de pesos depositados en cada una de las sucursales.
e) Cantidad de depósitos en la sucursal de Tigre.
f) El nro. de sucursal que recibió más cantidad de depósitos (sin importar el monto de los mismos).


*/


int main() {
    int numeroCliente, numeroSucursal, cantidadDepositoMayor1000 = 0, nroClienteMayorMonto, sucursalClienteMayorMonto, cantidadTransacciones = 0, cantidadTransaccionesSucu1 = 0, cantidadTransaccionesSucu2 = 0, cantidadTransaccionesSucu3 = 0;
    int porcenTransaccionSucu1, porcenTransaccionSucu2, porcenTransaccionSucu3,  totalPesosSucu1 = 0, totalPesosSucu2 = 0, totalPesosSucu3 = 0, cantidadDepositoTigre = 0, cantidadDepositoVirreyes = 0, cantidadDepositoSanfer = 0, nroSucuMayorCantDeposito;
    float montoPesos, maxMonto;
    char codigoTransaccion;
    bool yaPaso = false;

    /*do {
        cout << "Ingrese numero de cliente: ";
        cin >> numeroCliente;

        if (numeroCliente < 100 || numeroCliente > 1200) {
            cout << "Por favor ingrese un numero de cliente entre 100 y 1200" << endl << endl;
        }
    } while (numeroCliente < 100 || numeroCliente > 1200);*/

numeroCliente = 1;

    while (numeroCliente != 0) {
        cout << "Ingrese numero de cliente: ";
        cin >> numeroCliente;
        cout << "numero de sucursal [1 -> virreyes, 2 -> San Fernando, 3 -> Tigre]: ";
        cin >> numeroSucursal;
        cout << "ingrese el codigo de transaccion  [D / E]: ";
        cin >> codigoTransaccion;
        cout << "monto en pesos: ";
        cin >> montoPesos;

        cantidadTransacciones++;

        if (codigoTransaccion == 'D') {
            if (montoPesos > 1000) {
                cantidadDepositoMayor1000++;
            }
            switch(numeroSucursal) {
                case 1:
                    totalPesosSucu1 += montoPesos;
                    cantidadDepositoVirreyes++;
                    break;
                case 2:
                    totalPesosSucu2 += montoPesos;
                    cantidadDepositoSanfer++;
                    break;
                case 3:
                    totalPesosSucu3 += montoPesos;
                    cantidadDepositoTigre++;
                    break;
            }
        } else {
            if (!yaPaso || montoPesos > maxMonto) {
                maxMonto = montoPesos;
                nroClienteMayorMonto = numeroCliente;
                sucursalClienteMayorMonto = numeroSucursal;
            }
        }


        switch(numeroSucursal) {
            case 1:
                cantidadTransaccionesSucu1++;
                totalPesosSucu1 += montoPesos;
                break;
            case 2:
                cantidadTransaccionesSucu2++;
                totalPesosSucu2 += montoPesos;
                break;
            case 3:
                cantidadTransaccionesSucu3++;
                totalPesosSucu3 += montoPesos;
                cantidadDepositoTigre++;
                break;
        }



        /*do {
            cout << "Ingrese numero de cliente: ";
            cin >> numeroCliente;

            if (numeroCliente < 100 || numeroCliente > 1200) {
                cout << "Por favor ingrese un numero de cliente entre 100 y 1200" << endl << endl;
            }
        } while (numeroCliente > 99 && numeroCliente < 1201);*/
cout << "Ingrese numero de cliente: ";
            cin >> numeroCliente;
        cout << "numero de sucursal [1 -> virreyes, 2 -> San Fernando, 3 -> Tigre]: ";
        cin >> numeroSucursal;
        cout << "ingrese el codigo de transaccion  [D / E]: ";
        cin >> codigoTransaccion;
        cout << "monto en pesos: ";
        cin >> montoPesos;
    }

    if (cantidadDepositoVirreyes > cantidadDepositoSanfer && cantidadDepositoSanfer > cantidadDepositoTigre) {
        nroSucuMayorCantDeposito = 1;
    } else if (cantidadDepositoTigre > cantidadDepositoSanfer && cantidadDepositoSanfer > cantidadDepositoVirreyes) {
        nroSucuMayorCantDeposito = 3;
    } else {
        nroSucuMayorCantDeposito = 2;
    }
    porcenTransaccionSucu1 = (cantidadTransaccionesSucu1 * 100) / cantidadTransacciones;
    porcenTransaccionSucu2 = (cantidadTransaccionesSucu2 * 100) / cantidadTransacciones;
    porcenTransaccionSucu3 = (cantidadTransaccionesSucu3 * 100) / cantidadTransacciones;

    cout << "====== INICIO DEL PROGRAMA ======" << endl << endl;
    //a) Cantidad de depósitos por más de $1000.
    cout << endl << endl << "Cantidad de depositos mayor a 1000: " << cantidadDepositoMayor1000 << endl;
    //b) El nro. de cliente que hizo la extracción por mayor monto, y en que sucursal la hizo.
    cout << "Nro cliente que hizo la extraccion por mayor monto: " << nroClienteMayorMonto << endl;
    cout << "Sucursal cliente que hizo la extraccion por maor monto: " << sucursalClienteMayorMonto << endl;
    //c) El porcentaje de transacciones realizadas en cada una de las sucursales, respecto al total de las mismas.
    cout << "% transacciones sucursal 1: " << porcenTransaccionSucu1 << endl;
    cout << "% transacciones sucursal 2: " << porcenTransaccionSucu2 << endl;
    cout << "% transacciones sucursal 3: " << porcenTransaccionSucu3 << endl;
    //d) Total de pesos depositados en cada una de las sucursales.
    cout << "TOTAL sucursal 1: " << totalPesosSucu1 << endl;
    cout << "TOTAL sucursal 2: " << totalPesosSucu2 << endl;
    cout << "TOTAL sucursal 3: " << totalPesosSucu3 << endl;
    //e) Cantidad de depósitos en la sucursal de Tigre.
    cout << "Cantidad de depositos en TIGRE: " << cantidadDepositoTigre << endl;
    //f) El nro. de sucursal que recibió más cantidad de depósitos (sin importar el monto de los mismos).
    cout << "Nro de sucursal que recibio mas depositos: " << nroSucuMayorCantDeposito << endl << endl;
    cout << "====== FIN DEL PROGRAMA ======";


    return 0;
}
