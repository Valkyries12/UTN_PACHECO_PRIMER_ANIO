#ifndef VASO_H
#define VASO_H


class Vaso
{
    public:
        //constructores y destructores
        Vaso();
        Vaso(int codigo, float capacidad);
        virtual ~Vaso();

        //getters y setters
        void setCodigo(int codigo);
        void setCapacidad(float capacidad);
        int getCodigo();
        float getCapacidad();

    protected:

    private:
        //atributos
        int _codigo;
        float _capacidad;

};

#endif // VASO_H
