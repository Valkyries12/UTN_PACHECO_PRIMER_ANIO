#ifndef PERSONA_H
#define PERSONA_H


class Persona
{
    public:
        //constructores y destructores
        Persona();
        Persona(std::string nombre, std::string apellido);
        virtual ~Persona();

        //getters y setters
        std::string getNombre();
        std::string getApellido();
        void setNombre(std::string nombre);
        void setApellido(std::string apellido);

    protected:

    private:
        //propiedades
        std::string _nombre;
        std::string _apellido;

};

#endif // PERSONA_H
