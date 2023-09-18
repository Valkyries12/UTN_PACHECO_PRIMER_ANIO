#ifndef EMPRESA_H
#define EMPRESA_H


class Empresa
{
    public:
        //constructores y destructores
        Empresa();
        Empresa(int numeroEmpresa, const char * nombre, int cantidadEmpleados, int categoria, int codigoMunicipio, bool estado);
        virtual ~Empresa();

        //getters y setters
        int getNumeroEmpresa() const;
        void setNumeroEmpresa(int numeroEmpresa);

        std::string getNombre() const;
        void setNombre(const std::string nombre);

        int getCantidadEmpleados() const;
        void setCantidadEmpleados(int cantidadEmpleados);

        int getCategoria() const;
        void setCategoria(int categoria);

        int getCodigoMunicipio() const;
        void setCodigoMunicipio(int codigoMunicipio);

        bool getEstado() const;
        void setEstado(bool estado);

        //metodos
        std::string toString() const;
        void mostrarEmpresa() const;

    protected:

    private:
        //atributos
        int _numeroEmpresa;
        char _nombre[30];
        int _cantidadEmpleados;
        int _categoria;
        int _codigoMunicipio;
        bool _estado;
};

#endif // EMPRESA_H
