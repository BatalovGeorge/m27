#ifndef SHAPE_H
#define SHAPE_H

#include <iostream>
#include <cmath>

#define PI 3.14

enum class Color
{
    GREEN=0,
    RED,
    BLUE
};

class AbstractShape
{

protected:
    int _centerX,_centerY;
    Color _color;
    std::string col;

public:
    AbstractShape( const int& centerX=0, const int& centerY=0, const Color& color=Color::GREEN):
        _centerX(centerX),_centerY(centerY), _color(color)
    {
        switch(_color)
        {
            case Color::RED:
                col="RED";
                break;
            case Color::BLUE:
                col="BLUE";
                break;
            case Color::GREEN:
                col="GREEN";
                break;
            default:
                col="undef color";
            break;
        }
    };

    virtual double getArea() const          =0;
    virtual double getPerimeter() const     =0;
    virtual double getRectangleArea()const  =0;

    ~AbstractShape(){std::cout<<"shape destructor\n";};
    void show()
    {
        std::cout<<"Color:\t\t"<<col
            <<";\nRectangle area:\t"<<getRectangleArea()
            <<";\nArea:\t\t"<<getArea()
            <<";\nPerimeter:\t"<<getPerimeter()<<";\n\n";
    }

};

#endif // SHAPE_H
