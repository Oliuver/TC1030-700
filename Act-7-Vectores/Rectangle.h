#include "Polimorfismo_Shape.h"

class Rectangle:public Shape {
private:
    int xr;
    int yr;
public:
    Rectangle();
    Rectangle(int,int,int,int);
    void draw();
};

Rectangle::Rectangle(){
    xr = 0;
    yr = 0;
}

Rectangle::Rectangle(int valX, int valY, int valXR, int valYR):Shape(valX, valY){
    xr = valXR;
    yr = valYR;
}
void Rectangle::draw(){
    cout << "Soy un Rectangulo"<<endl;

}