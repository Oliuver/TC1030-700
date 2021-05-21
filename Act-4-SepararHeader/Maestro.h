#include "Persona.h"

class Maestro: public Persona{
    public:
        Maestro();
        Maestro(string, int, string);
        void setDepto(string);
        string getDepto();
        void muestraDatos();

    private:
        string Depto;
};
Maestro::Maestro() : Persona(){
    Depto = "Ninguno";
};
Maestro::Maestro(string n, int e,string d) : Persona(n,e){
    Depto = d;
};
void Maestro::setDepto(string dto){
    Depto = dto;
};
string Maestro::getDepto(){
    return Depto;
};
void Maestro::muestraDatos(){
    cout<<"\nNombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Departamento: "<<Depto<<endl;
};