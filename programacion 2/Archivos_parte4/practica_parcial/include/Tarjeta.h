#ifndef TARJETA_H
#define TARJETA_H

#include "Fecha.h"

class Tarjeta
{
    public:
        //constructores y destructores
        Tarjeta();
        Tarjeta(std::string numeroTarjeta, int dia, int mes, int anio, std::string dniDuenio, float saldo);
        virtual ~Tarjeta();

        //getters y setters
        std::string getNumeroTarjeta() const;
        void setNumeroTarjeta(std::string numeroTarjeta);
        Fecha getFechaAlta() const;
        void setFechaAlta(int dia, int mes, int anio);
        std::string getDniDuenio() const;
        void setDniDuenio(std::string dniDuenio);
        float getSaldo() const;
        void setSaldo(float saldo);
        bool getEstado() const;
        void setEstado(bool estado);

        //metodos
        std::string toString();

    protected:

    private:
        //atributos
        char _numeroTarjeta[17];
        Fecha _fechaAlta;
        char _dniDuenio[9];
        float _saldo;
        bool _estado;
};

#endif // TARJETA_H
