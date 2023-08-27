#ifndef REUNION_H
#define REUNION_H
#include "Persona.h"
#include "Fecha.h"
#include "Horario.h"
#include "Lugar.h"
#include "Tema.h"
#include "Duracion.h"

class Reunion
{
    public:
        //constructores y destructores
        Reunion();
        Reunion(Fecha fecha, Horario horario, Lugar lugar, Tema tema, Duracion duracion);
        virtual ~Reunion();

        //getters y setters
        Fecha getFecha();
        void setFecha(Fecha fecha);
        Horario getHorario();
        void setHorario(Horario horario);
        Lugar getLugar();
        void setLugar(Lugar lugar);
        Tema getTema();
        void setTema(Tema tema);
        Duracion getDuracion();
        void setDuracion(Duracion duracion);
        Persona* getIntegrantes();

        //metodos
        void agregarPersona(Persona persona);
        Persona obtenerPersona(int indice);
        int contarParticipantes();

    protected:

    private:
        //propiedades
        Persona _integrantes[5];
        Fecha _fecha;
        Horario _horario;
        Lugar _lugar;
        Tema _tema;
        Duracion _duracion;

};

#endif // REUNION_H
