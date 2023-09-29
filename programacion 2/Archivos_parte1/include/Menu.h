#ifndef MENU_H
#define MENU_H

#include "Empresa.h"



class Menu
{
    public:
        //constructores y destructores
        Menu();
        virtual ~Menu();

        //metodos
        void dibujarMenu(int &opcionMenu);
        void cargarHardcodeo(Empresa* empresas);
        void mostrar(Empresa* empresas);

    protected:

    private:
};

#endif // MENU_H
