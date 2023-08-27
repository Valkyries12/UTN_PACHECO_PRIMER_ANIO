#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    public:
        //constructores y destructores
        Fecha();
        Fecha(int dia, int mes, int anio);
        virtual ~Fecha();

        //metodos
        int getDia();
        int getMes();
        int getAnio();
        std::string getNombreDia();
        void setDia(int dia);
        void setMes(int mes);
        void setAnio(int anio);
        std::string toString();

    protected:

    private:
        //propiedades
        int _dia;
        int _mes;
        int _anio;
        int _diaSemana;
};

#endif // FECHA_H
