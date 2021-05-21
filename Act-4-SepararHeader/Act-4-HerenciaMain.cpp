// Randy Oliver Ortega Cota
// A00232304
// TC1030 gpo 700
// 20 de mayo de 2021
#include <iostream>
#include <string>
using namespace std;

#include "Persona.h"
#include "Estudiante.h"
#include "Maestro.h"

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