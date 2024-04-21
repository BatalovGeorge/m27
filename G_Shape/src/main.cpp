#include <memory>
#include <algorithm>

#include "circle.h"
#include "square.h"
#include "triangle.h"
#include "AbstractShape.h"

enum  class CMD
{
    RECTANGLE=0,
    TRIANGLE,   //1
    CIRCLE,     //2
    SQUARE,     //3
    UNDEF_SHAPE,//4
};

CMD user_cmd(std::string& input)
{
    CMD cmd;
    if(input=="circle"){cmd=CMD::CIRCLE;}
    else if(input=="triangle"){cmd=CMD::TRIANGLE;}
    else if(input=="square"){cmd=CMD::SQUARE;}
    else if(input=="rectangle"){cmd=CMD::RECTANGLE;}
    else{cmd=CMD::UNDEF_SHAPE;}
    return cmd;
}



void make_shape(CMD& cmd)
{
    int x=10;
    int y=20;
    double sideX=10.3;
    double sideY=10.2;
    double sideZ=15.1;
    double rad=5.0;

    std::unique_ptr<AbstractShape> a;
    std::string showShape;
    switch(cmd)
    {
        case CMD::TRIANGLE:
        showShape="TRIANGLE\n";
        a=std::make_unique<Triangle>(x,y,Color::BLUE,sideX,sideY,sideZ);
        break;

        case CMD::CIRCLE:
        showShape="CIRCLE\n";
        a=std::make_unique<Circle>(x,y,Color::RED,rad);
        break;

        case CMD::SQUARE:
        showShape="SQUARE\n";
        a=std::make_unique<Square>(x,y,Color::GREEN,sideX,sideY);
        break;

        case CMD::RECTANGLE:
        showShape="RECTANGLE\n";
        a=std::make_unique<Rectangle>(x,y,Color::BLUE,sideX,sideY);
        break;

        case CMD::UNDEF_SHAPE:
            showShape="UNDEF_SHAPE\n";
        break;
    default:
            showShape="DEF BLOCK";
        break;

    }
    std::cout<<showShape;
    a->show();

}

int main()
{

    std::string input[4]={"triangle","circle","rectangle","square"};

    for(auto in:input)
    {
        std::transform(in.begin(),in.end(),in.begin(),[](unsigned char c){return std::tolower(c);});
        CMD cmd=user_cmd(in);
        make_shape(cmd);
    }

    std::cout<<"\tEND\n";

    return 0;
}
