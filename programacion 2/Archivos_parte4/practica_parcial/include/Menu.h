#ifndef MENU_H
#define MENU_H


class Menu
{
    public:
        //constructores y destructores
        Menu();
        Menu(std::string mensaje, std::string mensajeError, int maximo, int minimo, int reintentos);
        virtual ~Menu();

        //getters y setters
        int getOpcionMenu() const;
        void setOpcionMenu(int opcionMenu);
        int getMinimo() const;
        void setMinimo(int minimo);
        int getMaximo() const;
        void setMaximo(int maximo);
        int getReintentos() const;
        void setReintentos(int reintentos);
        std::string getMensaje() const;
        void setMensaje(std::string mensaje);
        std::string getMensajeError() const;
        void setMensajeError(std::string mensajeError);

        //metodos
        bool dibujarMenu();

    protected:

    private:
        //atributos
        int _opcionMenu;
        int _minimo;
        int _maximo;
        int _reintentos;
        char _mensaje[200];
        char _mensajeError[50];

        //metodos
        void cargarCadena(char *palabra, int tamano);
};

#endif // MENU_H
