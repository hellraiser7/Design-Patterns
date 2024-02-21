#ifndef SHAPE_FACTORY_H
#define SHAPE_FACTORY_H

#include "circle.h"
#include "square.h"
#include "shapeoptions.h"

#include <string>

class ShapeFactory
{
public:
    Shape* getShape(const ShapeOptions& option);
};
#endif