#include "Character.h"

class Archer: public Character{
    protected:
        int Arrows;
    public:
        void shootArrow();
};
void Archer::shootArrow(){
    cout<<"\n\n"<<Name<<": *FLECHA* ha causado "<<Level*85<<" de dano"<<"\n\n"<<endl;
};