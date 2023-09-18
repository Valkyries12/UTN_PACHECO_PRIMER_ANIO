#ifndef ARCHIVO_H
#define ARCHIVO_H

#include "Empresa.h"

class Archivo
{
    public:
        //constructores y destructores
        Archivo();
        Archivo(std::string nombreArchivo);
        virtual ~Archivo();

        //getters y setters
        void setNombreArchivo(std::string nombreArchivo);
        std::string getNombreArchivo();

        //metodos
        void crearArchivo();
        bool realizarAltaEnLote(Empresa * empresas);
        bool listarEmpresas();


    protected:

    private:
        //atributos
        char _nombreArchivo[30];
};

#endif // ARCHIVO_H
