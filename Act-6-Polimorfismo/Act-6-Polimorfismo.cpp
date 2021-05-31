// Randy Oliver Ortega Cota
// A00232304
// TC1030 gpo 700
// 24 de mayo de 2021
#include <iostream>
#include <vector>
using namespace std;

#include "Circle.h"
#include "Rectangle.h"

int main()
{
    // Shape *Shapes[5]; // Crear un arreglo de objetos de tipo shape
    vector<Shape*> vecShapes;
    Shape *objShapes;

    objShapes = new Circle(5,7,8);
    vecShapes.push_back(objShapes);

    objShapes = new Rectangle(5,7,8,9);
    vecShapes.push_back(objShapes);

    objShapes = new Circle(15,23,22);
    vecShapes.push_back(objShapes);

    objShapes = new Rectangle(20,100,40,40);
    vecShapes.push_back(objShapes);

    for (int i = 0; i < vecShapes.size(); i++)
    {
        vecShapes[i]->draw();
    }

    return 0;
}