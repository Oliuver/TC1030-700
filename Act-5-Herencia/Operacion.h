#ifndef Operacion_h
#define Operacion_h

class Operacion{
    protected:
        int valor1,valor2,resultado;
    public:
        Operacion();
        Operacion(int,int,int);
        void setValor1();
        void setValor2();
        void mostraValor();
};
Operacion::Operacion(){
    valor1 = 0;
    valor2 = 0;
    resultado = 0;
};
Operacion::Operacion(int v1,int v2, int resul){
    valor1 = v1;
    valor2 = v2;    
    resultado = resul;
};
void Operacion::setValor1(){
    cout<<"\nIngrese el primer valor: ";
    cin>>valor1;
};
void Operacion::setValor2(){
    cout<<"\nIngrese el segundo valor: ";
    cin>>valor2;
};
void Operacion::mostraValor(){
    cout<<"\nEl resultado es: "<<resultado;
};
#endif