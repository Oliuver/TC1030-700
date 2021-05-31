/*  Randy Oliver Ortega Cota
    A00232304
    TC1030 gpo 700
    31 de mayo de 2021         */

#include <iostream>
using namespace std;

class Operacion{
    private:
        int operando;

    public:
        Operacion();
        Operacion(int);
        void Display();
        Operacion operator+(const Operacion &op1){
            Operacion opera;
            opera.operando = this->operando + op1.operando;
            return opera;
        };
        Operacion operator*(const Operacion &op1){
            Operacion opera;
            opera.operando = this->operando * op1.operando;
            return opera;
        };
};
Operacion::Operacion(){operando = 0;};
Operacion::Operacion(int op){
    operando = op;
};
void Operacion::Display(){
    cout<<"El operando es: "<<operando<<endl;
};

int main(){
    Operacion var1(10);
    Operacion var2(20);
    Operacion var3(0);
    Operacion var4(4);

    cout<<"\nSumar:"<<endl;
    var3 = var1 + var2;
    var3.Display();

    cout<<"\nMultiplicar:"<<endl;
    var4 = var1 * var2;
    var4.Display();

    return 0;
}