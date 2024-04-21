#include "circle.h"

double Circle::getArea() const
{
    std::cout<<";\nRadius:"<<getPerimeter();
    return std::sqrt(_radius*PI);
}
double Circle::getPerimeter() const
{
    return (2*(_radius*PI));
}

double Circle::getRectangleArea() const
{
    return (_radius*2)*2;
}
