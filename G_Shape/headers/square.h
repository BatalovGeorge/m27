#ifndef SQUARE_H
#define SQUARE_H

#include "rectangle.h"

class Square :public Rectangle
{

public:
    Square(const int& centerX, const int& centerY, const Color& color,
           const double& sideX, const double& sideY ):
        Rectangle(centerX,centerY,color,sideX,sideY){};

    ~Square(){std::cout<<"square destructor\n";};
};

#endif // SQUARE_H
