#include "../include/shapefactory.h"

Shape* ShapeFactory::getShape(const ShapeOptions& option)
{
    switch (option) {
        case ShapeOptions::Circle :
            return (new Circle());
        case ShapeOptions::Square :
            return (new Square());
        default:
            return nullptr;
    }
}