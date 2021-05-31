#include <iostream>
#include <vector>
using namespace std;

class Item {
protected:
    string descripcion;
public:
    Item();
    Item(string);
    virtual void interaccion();
};
Item::Item(){
    descripcion = "";
}
Item::Item(string in_descripcion){
    descripcion = in_descripcion;
}
void interaccion(){
    cout<<"ERROR NO ITEM"<<endl;
};

class Personaje{
    private:
        string nombre;
        vector <Item*> vecItems;
        int vida_actual;
        int vida_max;
    public:
        void abrir_puerta();
        void ataque_basico();
        void dialogar();
};

class Monstruo{
    private:
        string nombre;
        int vida;
    public:
        void ataque();
        void dialogar();
};

class Jefe_Final{
    private:
        string nombre;
        int vida;
        int MAPEJ;
    public:
        void ataque();
        void dialogar();
        void desbloquear_puerta();
};