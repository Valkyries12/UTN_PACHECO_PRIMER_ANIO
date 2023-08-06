#include <iostream>

using namespace std;
/*
La asociación tigrense de panaderos desea registrar la información de los productos que comercializó el día de ayer. Por cada producto registró:
Código de producto
Tipo (1 - Factura, 2 - Torta, 3 - Panificado)
Cantidad de kilogramos vendidos
Total recaudado ($)

La información no se encuentra agrupada ni ordenada. Para indicar el fin de la carga de datos se ingresa un código de producto negativo. Calcular e informar:
1 - El código de producto que haya recaudado la menor cantidad de dinero.
2 - El porcentaje de recaudación para cada tipo de producto.

*/


int main() {
    int codProducto, tipoProd, qtyKgVendidos, totalRecaudadoXProd;
    int codProdMenorDineroRecaudado = -1, prodMenorCantidadRecaudada;
    float porcenTipo1, porcenTipo2, porcenTipo3, recaudacionXTipo1 = 0, recaudacionXTipo2 = 0, recaudacionXTipo3 = 0, recaudacionTotal = 0;

    cout << "====== INICIO DEL PROGRAMA ======" << endl << endl;

    cout << "Codigo del producto: ";
    cin >> codProducto;

    while (codProducto > -1) {
        cout << "Tipo de producto [1 - Factura, 2- Torta, 3 - Panificado]: ";
        cin >> tipoProd;
        cout << "Cantidad de kg: ";
        cin >> qtyKgVendidos;
        cout << "Importe: ";
        cin >> totalRecaudadoXProd;

        recaudacionTotal += totalRecaudadoXProd;

        if (codProdMenorDineroRecaudado == -1 || totalRecaudadoXProd < codProdMenorDineroRecaudado) {
            codProdMenorDineroRecaudado = codProducto;
            prodMenorCantidadRecaudada = totalRecaudadoXProd;
        }

        switch (tipoProd) {
            case 1:
                recaudacionXTipo1 += totalRecaudadoXProd;
                break;
            case 2:
                recaudacionXTipo2 += totalRecaudadoXProd;
                break;
            case 3:
                recaudacionXTipo3 += totalRecaudadoXProd;
                break;

        }

        cout << endl << "Codigo del producto: ";
        cin >> codProducto;
    }

    porcenTipo1 = (recaudacionXTipo1 * 100) / recaudacionTotal;
    porcenTipo2 = (recaudacionXTipo2 * 100) / recaudacionTotal;
    porcenTipo3 = (recaudacionXTipo3 * 100) / recaudacionTotal;


    //El código de producto que haya recaudado la menor cantidad de dinero.
    if (codProdMenorDineroRecaudado != -1) {
        cout << endl << "El codigo del producto que recaudo menos dinero es: " << codProdMenorDineroRecaudado << endl;
    }
    //El porcentaje de recaudación para cada tipo de producto.
    cout << "El tipo 1 recaudo: " << porcenTipo1 << " %" << endl;
    cout << "El tipo 2 recaudo: " << porcenTipo2 << " %" << endl;
    cout << "El tipo 3 recaudo: " << porcenTipo3 << " %" << endl;

    cout << endl << endl << "====== FIN DEL PROGRAMA ======";
    return 0;
}
