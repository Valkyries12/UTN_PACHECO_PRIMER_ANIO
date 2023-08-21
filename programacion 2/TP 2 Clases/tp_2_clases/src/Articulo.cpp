#include <iostream>
#include <cstring>
#include "Articulo.h"


using namespace std;


Articulo::Articulo(const char* codigo, const char* descripcion, float precio, int stock, bool estado) {
    setCodigo(codigo);
    setDescripcion(descripcion);
    setPrecio(precio);
    setStock(stock);
    setEstado(estado);
}

Articulo::Articulo(const char *descripcion) {
    setCodigo("abc");
    setDescripcion(descripcion);
    setPrecio(0.0);
    setStock(0);
    setEstado(false);
}


Articulo::~Articulo()
{
    //dtor
}


//getters y setters
char* Articulo::getCodigo() {
    return _codigo;
}

void Articulo::setCodigo(const char *codigo) {
    strcpy(_codigo, codigo);
}

char* Articulo::getDescripcion() {
    return _descripcion;
}

void Articulo::setDescripcion(const char *descripcion) {
    strcpy(_descripcion, descripcion);
}

float Articulo::getPrecio() {
    return _precio;
}

void Articulo::setPrecio(float precio) {
    precio > 0.0 ? _precio = precio : _precio = 0.0;
}

int Articulo::getStock() {
    return _stock;
}

void Articulo::setStock(int stock) {
    stock > 0 ? _stock = stock : _stock = -1;
}

bool Articulo::getEstado() {
    return _estado;
}

void Articulo::setEstado(bool estado) {
    _estado = estado;
}


//metodos
void Articulo::cargar() {
    int estado;
    std::cout << "Ingrese codigo: ";
    std::cin >> _codigo;
    std::cout << "Ingrese descripcion: ";
    std::cin >> _descripcion;
    std::cout << "Ingrese precio: ";
    std::cin >> _precio;
    std::cout << "Ingrese stock: ";
    std::cin >> _stock;
    std::cout << "Ingrese estado [0/1]: ";
    std::cin >> estado;
    estado == 0 ? _estado = false : _estado = true;
    system("cls");
}

void Articulo::mostrar() {
    std::cout << "Codigo: " << getCodigo() << endl;
    std::cout << "Descripcion: " << getDescripcion() << endl;
    std::cout << "Precio: " << getPrecio() << endl;
    std::cout << "Stock: " << getStock() << endl;
    std::cout << "Estado: " << getEstado() << endl << endl;

}
