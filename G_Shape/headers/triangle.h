#ifndef TRIANGLE_H
#define TRIANGLE_H

#include "rectangle.h"

class Triangle: public Rectangle
{
    double _sideZ;
public:

    Triangle(const int& centerX, const int& centerY, const Color& color,
           const double& sideX, const double& sideY, const double& sideZ):
        Rectangle(centerX,centerY,color,sideX,sideY), _sideZ(sideZ){};

    ~Triangle(){std::cout<<"triangle distructor\n";};

    double getArea() const override;
    double getPerimeter() const override;
    double getRectangleArea() const override;


};

#endif // TRIANGLE_H
