#ifndef RECTANGLE_H
#define RECTANGLE_H

#include "AbstractShape.h"

class Rectangle: public AbstractShape
{
protected:
    double _sideX, _sideY;

public:
    Rectangle(const int& centerX, const int& centerY, const Color& color,
              const double& sideX, const double& sideY ):
        AbstractShape(centerX,centerY,color), _sideX(sideX), _sideY(sideY){};

    ~Rectangle(){std::cout<<"rectangle destructor\n";}


    double getArea() const override;
    double getPerimeter() const override;
    double getRectangleArea() const override;

};

#endif // RECTANGLE_H
