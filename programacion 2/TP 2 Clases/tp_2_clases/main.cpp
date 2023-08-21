#include <iostream>
#include <cstring>
#include "Articulo.h"

using namespace std;

void cargarArticulos(Articulo* arr, int len);
void listarArticulos(Articulo* arr, int len);
void listarArticulosMayorAPesos(Articulo* arr, int len);
int buscarIndiceArticuloPorCodigo(Articulo* arr, const char* codigo, int len);
Articulo buscarArticuloPorCodigo(Articulo* arr, const char* codigo, int len);
int contarArticulosMenorAStock(Articulo* arr, const int qtyStock, int len);
void aumentarEnPorcentage(Articulo* arr, const float aumento, int len);

int main()
{
    const int LONGITUD_ARTICULOS = 2;
    Articulo articulos[LONGITUD_ARTICULOS];
    int opcionMenu;
    float aumento;

    do {
        cout << "1- Cargar articulos. \n2- ListarArticulos. \n3- Listar articulos cuyo precio sea mayor al valor ingresado. \n4- Buscar indice por codigo. \n5- Buscar articulo por codigo. \n6- Contar articulos cuyo stock sea menor al ingresado. \n7- Incrementar precio en porcentage: \n0- Salir. \n\nIngrese una opcion: ";
        cin >> opcionMenu;

        switch(opcionMenu) {
            case 1:
                cargarArticulos(articulos, LONGITUD_ARTICULOS);
                break;
            case 2:
                listarArticulos(articulos, LONGITUD_ARTICULOS);
                break;
            case 3:
                listarArticulosMayorAPesos(articulos, LONGITUD_ARTICULOS);
                break;
            case 4:
                cout << buscarIndiceArticuloPorCodigo(articulos, "qqq", LONGITUD_ARTICULOS) << endl;
                break;
            case 5:
                buscarArticuloPorCodigo(articulos, "qqq", LONGITUD_ARTICULOS).mostrar();
                break;
            case 6:
                cout << "Cantidad de articulos menor a stock: " << contarArticulosMenorAStock(articulos, 3, LONGITUD_ARTICULOS) << endl;
                break;
            case 7:
                cout << "Cuanto aumentaran los productos: ";
                cin >> aumento;
                aumentarEnPorcentage(articulos, 30.0, LONGITUD_ARTICULOS);
                cout << "Productos aumentados un " << aumento << " %" << endl;

        }
    } while(opcionMenu != 0);

    cout << "Saliendo..." << endl;



    return 0;
}


void cargarArticulos(Articulo* arr, int len) {
    for (int i = 0; i < len; i++) {
        cout << "Articulo Nº" << i+1 << endl;
        arr[i].cargar();
    }
}

void listarArticulos(Articulo* arr, int len) {
    for (int i = 0; i < len; i++) {
        cout << "Articulo Nº" << i+1 << endl;
        arr[i].mostrar();
    }
}

void listarArticulosMayorAPesos(Articulo* arr, int len) {
    float precio;
    Articulo articuloActual;
    cout << "Ingrese precio: ";
    cin >> precio;

    for (int i = 0; i < len; i++) {
        articuloActual = arr[i];
        if(articuloActual.getPrecio() > precio) {
            articuloActual.mostrar();
        }
    }
}

int buscarIndiceArticuloPorCodigo(Articulo* arr, const char* codigo, int len) {
    int indice = -1;
    Articulo articuloActual;

    for (int i = 0; i < len; i++) {
        articuloActual = arr[i];
        if (strcmp(articuloActual.getCodigo(), codigo) == 0) {
            indice = i;
            break;
        }
    }

    return indice;
}

Articulo buscarArticuloPorCodigo(Articulo* arr, const char* codigo, int len) {
    Articulo articuloActual;
    char* codigoActual;

    for (int i = 0; i < len; i++) {
        strcpy(codigoActual, arr[i].getCodigo());
        if (strcmp(codigoActual, codigo) == 0) {
            articuloActual = arr[i];
            articuloActual.setStock(-1);
            break;
        }
    }

    return articuloActual;
}

int contarArticulosMenorAStock(Articulo* arr, const int qtyStock, int len) {
    int cantidad = 0;
    int stockActual;

    for (int i = 0; i < len; i++) {
        stockActual = arr[i].getStock();
        if (stockActual < qtyStock) {
            cantidad++;
        }
    }

    return cantidad;
}

void aumentarEnPorcentage(Articulo* arr, const float aumento, int len) {
    Articulo* articuloActual;
    float precioActual;

    for (int i = 0; i < len; i++) {
        articuloActual = &arr[i];
        precioActual = articuloActual->getPrecio();
        articuloActual->setPrecio(precioActual * (precioActual + aumento) / 100);
    }
}


