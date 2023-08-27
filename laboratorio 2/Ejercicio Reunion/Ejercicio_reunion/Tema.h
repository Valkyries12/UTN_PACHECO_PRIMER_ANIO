#ifndef TEMA_H
#define TEMA_H


class Tema
{
    public:
        //constructores y destructores
        Tema();
        Tema(std::string contenido);
        virtual ~Tema();

        //getters y setters
        std::string getContenido();
        void setContenido(std::string contenido);

    protected:

    private:
        //propiedades
        std::string _contenido;
};

#endif // TEMA_H
