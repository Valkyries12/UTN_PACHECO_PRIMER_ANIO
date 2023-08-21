#ifndef ARTICULO_H
#define ARTICULO_H


class Articulo
{
    public:
        //constructores y destructores
        //Articulo();
        Articulo(const char *codigo="abc", const char *descripcion="Sin descripcion", float precio=0.0, int stock=0, bool estado=false);
        Articulo(const char *descripcion);
        virtual ~Articulo();

        //getters y setters
        char *getCodigo();
        void setCodigo(const char *codigo);
        char *getDescripcion();
        void setDescripcion(const char *descripcion);
        float getPrecio();
        void setPrecio(float precio);
        int getStock();
        void setStock(int stock);
        bool getEstado();
        void setEstado(bool estado);

        //metodos
        void cargar();
        void mostrar();


    protected:

    private:
        //propiedades
        char _codigo[5];
        char _descripcion[30];
        float _precio;
        int _stock;
        bool _estado;
};

#endif // ARTICULO_H
