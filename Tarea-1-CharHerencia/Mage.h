#include "Character.h"

class Mage: public Character{
    protected:
        int Mana;
    public:
        void setMana();
        void setMana(int);
        void FireBall();
        void Clarividencia();
};
void Mage::FireBall(){
    cout<<"\n\n"<<Name<<": *BOLA DE FUEGO* ha causado "<<Level*210<<" de dano"<<"\n\n"<<endl;
    Mana = Mana - 20;
};
void Mage::Clarividencia(){
    cout<<"\n\n"<<Name<<": *CLARIVIDENCIA* Ahora lo sabe todo"<<"\n\n"<<endl;
    Mana = Mana + 30;
};
void Mage::setMana(){
    Mana = 1500;
};
void Mage::setMana(int){
    cout<<"Ingresa el mana del mago: ";
    cin>>Mana;
};