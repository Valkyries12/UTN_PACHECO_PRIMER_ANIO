#ifndef FECHA_H
#define FECHA_H


class Fecha
{
    public:
        Fecha();
        Fecha(int dia, int mes, int anio);
        virtual ~Fecha();
        void setDia(int dia);
        int getDia();
        void setMes(int mes);
        int getMes();
        void setAnio(int anio);
        int getAnio();
        void AgregarDia();
        void RestarDia();
        void AgregarDias(int dias);
        char* toString();

    protected:

    private:
        int _dia;
        int _mes;
        int _anio;

        bool esBisiesto(int anio);
};

#endif // FECHA_H
