#include "../include/shapefactory.h"

int main()
{
    ShapeFactory* factoryObj = new ShapeFactory();
    Shape* obj = factoryObj->getShape(ShapeOptions::Square);
    obj->doStuff();
}