#ifndef HORARIO_H
#define HORARIO_H
#include <string>


class Horario
{
    public:
        //constructores y destructores
        Horario();
        Horario(int segundo, int minuto, int hora);
        virtual ~Horario();

        //getters y setters
        int getSegundo();
        int getMinuto();
        int getHora();
        void setSegundo(int segundo);
        void setMinuto(int minuto);
        void setHora(int hora);

        //metodos
        std::string toString();

    protected:

    private:
        int _hora;
        int _minuto;
        int _segundo;
};

#endif // HORARIO_H
