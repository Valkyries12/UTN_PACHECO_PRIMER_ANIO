#ifndef LUGAR_H
#define LUGAR_H


class Lugar
{
    public:
        //constructores y destructores
        Lugar();
        Lugar(std::string lugar);
        virtual ~Lugar();

        //getters y setters
        std::string getPuntoDeEncuentro();
        void setPuntoDeEncuentro(std::string lugar);

    protected:

    private:
        //propiedades
        std::string _puntoDeEncuentro;
};

#endif // LUGAR_H
