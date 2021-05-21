#include "Operacion.h"

class Resta: public Operacion{
    public:
        void Operar();
};
void Resta::Operar(){
    resultado = valor1 - valor2;
};