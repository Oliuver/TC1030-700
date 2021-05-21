#ifndef Persona.h
#define Persona.h

class Persona{
    public:
        Persona();
        Persona(string, int);
        void setNombre(string);
        string getNombre();
        void setEdad(int ed);
        int getEdad();
        void muestraDatos();

    protected:
        string nombre;
        int edad;
};
Persona::Persona(){
    nombre = "Nadie";
    edad = 0;
};
Persona::Persona(string n, int e){
    nombre = n;
    edad = e;
};
void Persona::setNombre(string n){
    nombre = n;
};
string Persona::getNombre(){
    return nombre;
};
void Persona::setEdad(int ed){
    edad = ed;
};
int Persona::getEdad(){
    return edad;
};
void Persona::muestraDatos(){
    cout<<"Nombre: "<<nombre;
    cout<<"Edad: "<<edad;
};
#endif