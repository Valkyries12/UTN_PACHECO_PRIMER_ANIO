#ifndef BIDON_H
#define BIDON_H
#include "Vaso.h"


class Bidon
{
    public:
        //constructores y destructores
        Bidon();
        Bidon(int codigo, std::string sabor, float mlitros);
        virtual ~Bidon();

        //getters y setters
        void setCodigo(int codigo);
        void setSabor(std::string sabor);
        void setLitros(float mLitros);
        void setCantidadVendida(int cantidad);
        int getCodigo();
        std::string getSabor();
        float getLitros();
        int getCantidadVendida();

        //metodos
        void servirBatido(Vaso vaso);


    protected:

    private:
        //atributos
        int _codigo;
        std::string _sabor;
        float _litros;
        int _cantidadVendida;
};

#endif // BIDON_H
