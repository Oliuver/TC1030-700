#include "Persona.h"

class Estudiante: public Persona{
    public:
    Estudiante();
    Estudiante(string, int, string);
    string getCarrera();
    void setCarrera(string);
    void muestraDatos();

    private:
        string carrera;
};
Estudiante::Estudiante() : Persona(){
    carrera = "Ninguna";
};
Estudiante::Estudiante(string n, int e, string c) : Persona(n,e){
    carrera = c;
};
string Estudiante::getCarrera(){
    return carrera;
};
void Estudiante::setCarrera(string carr){
    carrera = carr;
};
void Estudiante::muestraDatos(){
    cout<<"\nNombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Carrera: "<<carrera<<endl;
};
