// Randy Oliver Ortega Cota
// A00232304
// TC1030 gpo 700
// 20 de mayo de 2021
#include <iostream>
using namespace std;

#include "Suma.h"
#include "Resta.h"
#include "Multiplica.h"

int main(){
    Suma s;
    Resta r;
    Multiplica m;

    cout<<"\n-----Suma-----"<<endl;
    s.setValor1();
    s.setValor2();
    s.Operar();
    s.mostraValor();
    cout<<"\n-----Resta-----"<<endl;
    r.setValor1();
    r.setValor2();
    r.Operar();
    r.mostraValor();
    cout<<"\n-----Multiplicacion-----"<<endl;
    m.setValor1();
    m.setValor2();
    m.Operar();
    m.mostraValor();

    cout<<"\n\nEso es todo, gracias."<<endl;
    return 0;
}