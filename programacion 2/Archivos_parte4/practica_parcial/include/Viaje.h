#ifndef VIAJE_H
#define VIAJE_H

#include "Fecha.h"


class Viaje
{
    public:
        //constructores y detructores
        Viaje();
        Viaje(std::string numeroTarjeta, int medioTransporte, int dia, int mes, int anio);
        virtual ~Viaje();

        //getters y setters
        int getNumeroViaje() const;
        void setNumeroViaje(int numeroViaje);
        std::string getNumeroTarjeta() const;
        void setNumeroTarjeta(std::string numeroTarjeta);
        int getMedioTransporte() const;
        void setMedioTransporte(int medioTransporte);
        Fecha getFechaViaje() const;
        void setFechaViaje(int dia, int mes, int anio);
        float getImporte() const;
        void setImporte(float importe);
        bool getEstado() const;
        void setEstado(bool estado);

        //atributos
        static int _numeroViaje;

        //metodos
        void calcularImporte();


    protected:

    private:
        //atributos
        char _numeroTarjeta[17];
        int _medioTransporte;
        Fecha _fechaViaje;
        float _importe;
        bool _estado;
};

#endif // VIAJE_H
