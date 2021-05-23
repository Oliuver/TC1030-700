// Randy Oliver Ortega Cota
// A00232304
// TC1030 gpo 700
// 22 de mayo de 2021
#include <iostream>
using namespace std;

#include "LaserMan.h"
#include "Archer.h"
#include "Mage.h"

int main(){
    LaserMan arreLM[100];
    Mage arreM[100];
    Archer arreA[100];

    int opc,eCrear,eVer,eProbar,elecE,skill=1,contL=0,contM=0,contA=0;

    cout<<"\nActividad de Personajes con Herencia"<<endl;

    while (true){
        cout<<"\nIngrese la accion deseada."<<endl;
        cout<<"1. Crear personaje."<<endl;
        cout<<"2. Ver personajes creados."<<endl;
        cout<<"3. Prueba de personajes."<<endl;
        cout<<"4. <<Salir>>"<<endl;
        cout<<"Eleccion: ";
        cin>>opc;
        if (opc == 1){
            eCrear=1;
            while (eCrear != 4){
            cout<<"\nQue tipo de personaje quieres CREAR?"<<endl;
            cout<<"1. Hombre laser"<<endl;
            cout<<"2. Mago"<<endl;
            cout<<"3. Arquero"<<endl;
            cout<<"4. <<Volver>>"<<endl;
            cout<<"Eleccion: ";
            cin>>elecE;
            eCrear=elecE;
                if (eCrear == 1){
                    arreLM[contL].setName();
                    arreLM[contL].setLevel();
                    contL++;
                }
                else if (eCrear == 2){
                    arreM[contM].setName();
                    arreM[contM].setLevel();
                    contM++;
                }
                else if (eCrear == 3){
                    arreA[contA].setName();
                    arreA[contA].setLevel();
                    contA++;
                }
                else if (eCrear == 4){
                    cout<<"Ok\n";
                }
                else {
                    while (eCrear<1 || eCrear>4){
                    cout<<"\nIngrese una opcion valida: ";
                    cin>>eCrear;
                    }
                }
            }
        }
        else if (opc == 2){
            eVer=1;
            while (eVer != 4){
            cout<<"\nQue tipo de personaje quieres VER?"<<endl;
            cout<<"1. Hombre laser"<<endl;
            cout<<"2. Mago"<<endl;
            cout<<"3. Arquero"<<endl;
            cout<<"4. <<Volver>>"<<endl;
            cout<<"Eleccion: ";
            cin>>eVer;
            if (eVer == 1){
                if (contL>0)
                {
                    cout<<"\nNombre\tLevel"<<endl;
                    for (int i = 0; i < contL; i++){
                        cout<<"\n"<<arreLM[i].getName()<<"\t"<<arreLM[i].getLevel()<<endl;
                    }
                }
                else {
                    cout<<"\n<<No hay personajes de este tipo creados>>"<<endl;
                }
            }
            else if(eVer == 2){
                if (contM>0)
                {
                    cout<<"\nNombre\tLevel";
                    for (int i = 0; i < contM; i++){
                        cout<<"\n"<<arreM[i].getName()<<"\t"<<arreM[i].getLevel()<<endl;
                    }
                    
                }
                else{
                    cout<<"\n<<No hay personajes de este tipo creados>>"<<endl;
                }
            }
            else if(eVer == 3){
                if (contA>0)
                {
                    cout<<"\nNombre\tLevel"<<endl;
                    for (int i = 0; i < contA; i++){
                        cout<<"\n"<<arreA[i].getName()<<"\t"<<arreA[i].getLevel()<<endl;
                    }
                    
                }
                else{
                    cout<<"\n<<No hay personajes de este tipo creados>>"<<endl;
                }
            }
            else if(eVer == 4){
                cout<<"Ok\n";
            }
            else {
                while (eVer<1 || eVer>4){
                cout<<"\nIngrese una opcion valida";
                cin>>eVer;
                }
            }
        }
        }
        else if(opc == 3){
            eProbar=1;
            cout<<"\nQue tipo de personaje quieres PROBAR?"<<endl;
            cout<<"1. Hombre laser"<<endl;
            cout<<"2. Mago"<<endl;
            cout<<"3. Arquero"<<endl;
            cout<<"4. <<Volver>>"<<endl;
            cout<<"Eleccion: ";
            cin>>eProbar;
            skill=1;
            if (eProbar == 1){
                cout<<"\nAgregue un nombre y nivel a su Hombre Laser"<<endl;
                arreLM[contL].setName();
                arreLM[contL].setLevel();
                cout<<"Listo!\n\n";
                cout<<"Habilidades del Hombre Laser:"<<endl;
                cout<<"1. <<Salto>>"<<endl;
                cout<<"2. <<Correr>>"<<endl;
                cout<<"3. <<Disparo laser>> "<<endl;
                cout<<"Para utilzar una habilidad ingrese cualquier numero. Para salir pulse <<0>>"<<endl;
                skill=1;
                while (skill!=0)
                {
                    cin>>skill;
                    if (skill == 1)
                    {
                        arreLM[contL].Jump();
                    }
                    else if(skill == 2){
                        arreLM[contL].Run();
                    }
                    else if(skill == 3){
                        arreLM[contL].shootLaser();
                    }
                    else if(skill == 0){
                        cout<<"Ok.\n";
                    }
                    else{
                        while (skill<0 || skill>3){
                            cout<<"\nIngrese una opcion valida: ";
                            cin>>skill;
                        }
                    }
                } 
            }
            else if (eProbar == 2){
                cout<<"\nAgregue un nombre y nivel a su Mago"<<endl;
                arreM[contM].setName();
                arreM[contM].setLevel();
                cout<<"Listo!\n\n";
                cout<<"Habilidades del Mago:"<<endl;
                cout<<"1. <<Salto>>"<<endl;
                cout<<"2. <<Correr>>"<<endl;
                cout<<"3. <<Bola de fuego>> "<<endl;
                cout<<"4. <<Clarividencia>>"<<endl;
                cout<<"Para utilzar una habilidad ingrese cualquier numero. Para salir pulse <<0>>"<<endl;
                skill=1;
                while (skill != 0)
                {
                    cin>>skill;
                    if (skill == 1)
                    {
                        arreM[contM].Jump();
                    }
                    else if(skill == 2){
                        arreM[contM].Run();
                    }
                    else if(skill == 3){
                        arreM[contM].FireBall();
                    }
                    else if(skill == 4){
                        arreM[contM].Clarividencia();
                    }
                    else if(skill == 0){
                        cout<<"Ok\n";
                    }
                    else{
                        while (skill<0 || skill!=3){
                            cout<<"\nIngrese una opcion valida.";
                            cin>>skill;
                        }  
                    }
                }
                
            }
            else if (eProbar == 3){
                cout<<"\nAgregue un nombre y nivel a su Arquero"<<endl;
                arreA[contA].setName();
                arreA[contA].setLevel();
                cout<<"Listo!\n\n";
                cout<<"Habilidades del Arquero:"<<endl;
                cout<<"1. <<Salto>>"<<endl;
                cout<<"2. <<Correr>>"<<endl;
                cout<<"3. <<Disparar Flecha>> "<<endl;
                cout<<"Para utilzar una habilidad ingrese cualquier numero. Para salir pulse <<0>>"<<endl;
                skill=1;
                while (skill != 0)
                {
                    cin>>skill;
                    if (skill == 1)
                    {
                        arreA[contA].Jump();
                    }
                    else if(skill == 2){
                        arreA[contA].Run();
                    }
                    else if(skill == 3){
                        arreA[contA].shootArrow();
                    }
                    else if(skill == 0){
                        cout<<"Ok.\n";
                    }
                    else{
                        while (skill<1 || skill>4){
                            cout<<"Ingrese una opcion valida."<<endl;
                            cin>>skill;
                        }
                    }
                }
            }
            else if(eProbar == 4){
                cout<<"Ok.\n";
            }
            else {
                while (eProbar < 1 || eProbar > 4){
                cout<<"Ingrese una opcion valida"<<endl;
                cin>>eProbar;
            }
        }
        }
        else if(opc == 4){
            cout<<"\n\n\nGracias por usar este programa.\n\n"<<endl;
            break;
        }
        else {
            while (opc < 1 || opc > 4){
            cout<<"\nIngrese una opcion valida"<<endl;
            cout<<"Eleccion: ";
            cin>>opc;
            }
        }
    }

    return 0;
}