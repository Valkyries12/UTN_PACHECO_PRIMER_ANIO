#ifndef DURACION_H
#define DURACION_H


class Duracion
{
    public:
        //constructores y destructores
        Duracion();
        Duracion(int minutos);
        virtual ~Duracion();

        //getters y setters
        int getMinutos();
        void setMinutos(int minutos);

    protected:

    private:
        //propiedades
        int _minutos;
};

#endif // DURACION_H
