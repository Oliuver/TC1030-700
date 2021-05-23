#ifndef Character_h
#define Character_h

class Character{
    public:
        Character();
        Character(int,string);
        void Run();
//        void Run(double);
        void Jump();
//        void Jump(double);
//        void setRun();
//        void setJump();
        void setLevel();
        int getLevel();
        void setName();
        string getName();
    protected:
        int Level;
        string Name;
};
Character::Character(){
    Level = 1;
    Name = "Nadie";
};
Character::Character(int lvl, string n){
    Level = lvl;
    Name = n;
};
void Character::Run(){
    cout<<"\n\n...Corriendo...\n\n"<<endl;
};
void Character::Jump(){
    cout<<"\n\n- Salto -\n\n"<<endl;
};
void Character::setLevel(){
    cout<<"Ingrese el nivel del personaje: ";
    cin>>Level;
};
int Character::getLevel(){
    return Level;
};
void Character::setName(){
    cout<<"\nIngrese el nombre del personaje: ";
    cin>>Name;
    cout<<"\n"<<endl;
};
string Character::getName(){
    return Name;
};
#endif