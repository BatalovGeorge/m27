#include "rectangle.h"

double Rectangle::getArea() const
{
    return this->_sideX * this->_sideY;
}

double Rectangle::getPerimeter() const
{
    return (this->_sideX + this->_sideY)*2 ;
}

double Rectangle::getRectangleArea() const
{
    return getArea();
}


