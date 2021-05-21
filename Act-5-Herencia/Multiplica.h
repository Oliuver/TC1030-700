#include "Operacion.h"
class Multiplica: public Operacion{
    public:
        void Operar();
};
void Multiplica::Operar(){
    resultado = valor1 * valor2;
};