#include "Operacion.h"

class Suma: public Operacion{
    public:
        void Operar();
};
void Suma::Operar(){
    resultado = valor1 + valor2;
};