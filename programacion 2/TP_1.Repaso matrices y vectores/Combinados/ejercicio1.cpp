#include <iostream>

using namespace std;


void calcularArticuloMasVendidoPorSucursal(int mat[3][5]);

int main() {
    int cantidadArticulosVendidosPorSucursal[3][5] = {0};
    int numeroArticulo, numeroSucursal, cantidadVendida;

    cout << "numero articulo [1 a 5]: ";
    cin >> numeroArticulo;

    while (numeroArticulo != 0) {
        cout << "numero sucursal [1 a 3]: ";
        cin >> numeroSucursal;
        cout << "cantidad vendida: ";
        cin >> cantidadVendida;
        system("cls");

        cantidadArticulosVendidosPorSucursal[numeroSucursal-1][numeroArticulo-1] = cantidadVendida;

        cout << "numero articulo [1 a 5]: ";
        cin >> numeroArticulo;
    }

    calcularArticuloMasVendidoPorSucursal(cantidadArticulosVendidosPorSucursal);
    return 0;
}

/*int calcularArticuloMasVendido(int sucursales[], int len) {
    int masVendido = 0;
};*/


void calcularArticuloMasVendidoPorSucursal(int mat[3][5]) {
    string articulos[5] = { "Articulo 1", "Articulo 2", "Articulo 3", "Articulo 4", "Articulo 5" };
    int indiceArticuloMasVendido;
    int maxArticulo = 0;
    int articuloActual;

    for (int sucursal = 0; sucursal < 3; sucursal++) {
        for (int articulo = 0; articulo < 5; articulo++) {
            articuloActual = mat[sucursal][articulo];
            if (articuloActual > maxArticulo) {
                maxArticulo = articuloActual;
                indiceArticuloMasVendido = articulo;
            }
        }
        cout << articulos[indiceArticuloMasVendido] << " fue el mas vendido en la sucursal " << sucursal +1 << endl;
        maxArticulo = 0;
    }
}

