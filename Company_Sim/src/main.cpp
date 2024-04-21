#include "company.h"

#include <cassert>
int main()
{
    std::string input;
    while(true)
    {
        int m,w,t;
        std::cout<<"Enter amount of managers:";
        std::cin>>m;
        assert(m>0);
        std::cout<<"Enter amount of employees in team:";
        std::cin>>w;
        assert(w>0);
        std::cout<<"Enter amount of tasks to do:";
        std::cin>>t;
        assert(t>0);

        std::unique_ptr<company> comp(new company(m,w,t));
        std::cout<<"create new company? y/n:";
        std::cin>>input;
        if(input=="n"){break;}
    }
    return 0;
}
