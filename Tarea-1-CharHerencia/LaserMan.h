#include "Character.h"

class LaserMan: public Character{
    protected:
        int Charges;
    public:
        void shootLaser();
};
void LaserMan::shootLaser(){
    cout<<"\n\n"<<Name<<": *DISPARO LASER* ha causado "<<Level*150<<" de dano"<<"\n\n"<<endl;
};