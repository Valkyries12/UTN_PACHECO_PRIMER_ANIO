#ifndef FECHAHORARIO_H
#define FECHAHORARIO_H
#include "fecha.h"
#include "horario.h"


class FechaHorario
{
    public:
        //constructores y destructores
        FechaHorario();
        FechaHorario(Fecha fecha, Horario horario);
        FechaHorario(int dia, int mes, int anio, int segundo, int minuto, int hora);
        virtual ~FechaHorario();

        //getters y setters
        Fecha getFecha();
        Horario getHorario();
        void setFecha(Fecha fecha);
        void setHorario(Horario horario);
        void setFecha(int dia, int mes, int anio);
        void setHorario(int segundo, int minuto, int hora);

        //metodos
        std::string toString();


    protected:

    private:
        //propiedades
        Fecha _fecha;
        Horario _horario;
};

#endif // FECHAHORARIO_H
