// Randy Oliver Ortega Cota
// A00232304
// TC1030 gpo 700
// 19 de mayo de 2021
#include <iostream>
#include <string>

using namespace std;

class Persona{
    public:
        Persona();
        Persona(string, int);
        void setNombre(string nomb){nombre = nomb;};
        string getNombre(){return nombre;};
        void setEdad(int ed){edad = ed;};
        int getEdad(){return edad;};
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

class Estudiante: public Persona{
    public:
    Estudiante();
    Estudiante(string, int, string);
    string getCarrera(){return carrera;};
    void setCarrera(string carr){carrera = carr;};
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
/*string Estudiante::getCarrera(){
    return carrera;
};*/

void Estudiante::muestraDatos(){
    cout<<"\nNombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Carrera: "<<carrera<<endl;
};

class Maestro: public Persona{
    public:
        Maestro();
        Maestro(string, int, string);
        void setDepto(string dto){Depto = dto;};
        string getDepto(){return Depto;};
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

void Maestro::muestraDatos(){
    cout<<"\nNombre: "<<nombre<<endl;
    cout<<"Edad: "<<edad<<endl;
    cout<<"Departamento: "<<Depto<<endl;
};

int main(){
    Estudiante arregloEst[3];
    Maestro arregloMae[2];
    
    Estudiante e1("Oliver Ortega",19,"ITC");
    arregloEst[0] = e1;

    arregloEst[1].setNombre("Marcos Joshua");
    arregloEst[1].setEdad(19);
    arregloEst[1].setCarrera("IMT");

    Estudiante e3;
    arregloEst[2] = e3;

    Maestro m1,m2;
    m1.setNombre("Profe Yi");
    m1.setEdad(45);
    m1.setDepto("Artes marciales WuJu");

    arregloMae[0] = m1;
    arregloMae[1] = m2;

    arregloEst[0].muestraDatos();
    arregloEst[1].muestraDatos();
    arregloEst[2].muestraDatos();
    arregloMae[0].muestraDatos();
    arregloMae[1].muestraDatos();
    
    return 0;
};