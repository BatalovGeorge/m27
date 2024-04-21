#include "triangle.h"

double Triangle::getArea() const
{
    return _sideX * _sideY * std::sqrt(3)/4;
}

double Triangle::getPerimeter() const
{
    return _sideX+_sideY+_sideZ;
}

double Triangle::getRectangleArea() const
{
    return (getPerimeter()*2);
}

