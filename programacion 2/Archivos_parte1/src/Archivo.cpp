#include <iostream>
#include <cstring>
#include "Archivo.h"
#include "Empresa.h"

Archivo::Archivo()
{
    //ctor
}

Archivo::Archivo(std::string nombreArchivo) {
    setNombreArchivo(nombreArchivo);
}

Archivo::~Archivo()
{
    //dtor
}


//getters y setters
void Archivo::setNombreArchivo(std::string nombreArchivo) {
    strcpy(_nombreArchivo, nombreArchivo.c_str());
}

std::string Archivo::getNombreArchivo() {
    return _nombreArchivo;
}


//metodos
void Archivo::crearArchivo() {
    std::string mensaje;
    FILE* pArchivo;
    pArchivo = fopen(_nombreArchivo, "wb");
    pArchivo == nullptr ? mensaje = "Error en la creacion del archivo" :  mensaje = "Archivo creado con exito";
    std::cout << mensaje << std::endl;
}

bool Archivo::realizarAltaEnLote(Empresa * empresas) {
    bool isSuccesfull = false;
    FILE* pArchivo;

    pArchivo = fopen(_nombreArchivo, "wb");
    if (pArchivo != nullptr) {
        isSuccesfull = fwrite(empresas, sizeof(Empresa), 5, pArchivo);
        fclose(pArchivo);
    }

    return isSuccesfull;
}

bool Archivo::listarEmpresas() {
    bool isSuccesfull = false;
    FILE* pArchivo;
    Empresa empresa;

    pArchivo = fopen(_nombreArchivo, "rb");
    if (pArchivo != nullptr) {
        while(fread(&empresa, sizeof empresa, 1, pArchivo) == 1) {
            empresa.mostrarEmpresa();
        }
        isSuccesfull = true;
        fclose(pArchivo);
    }

    return isSuccesfull;
}
