#ifndef CIRCLE_H
#define CIRCLE_H

#include "AbstractShape.h"

class Circle: public AbstractShape
{
private:
    double _radius;

public:
    Circle(const int& centerX, const int& centerY, const Color& color, const double& radius):
        AbstractShape(centerX,centerY,color), _radius(radius){};

    ~Circle(){std::cout<<"circle destructor\t";}

    double getArea() const override;
    double getPerimeter() const override;
    double getRectangleArea() const override;
};

#endif // CIRCLE_H
