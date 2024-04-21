#include <iostream>

#include "elfbranch.h"
int main()
{
    ElfBranch* br = new ElfBranch(3);
    for(auto house:br->houses())
    {
        br->changeStatus("IGOR",house.second);
    }
    ElfHouse * hs = new ElfHouse("IGOR");

    for(auto srchHouse = br->houses().find(hs); srchHouse!=br->houses().end();srchHouse++)
    {

        std::cout<< srchHouse->second->name();
    }

    delete br;
    return 0;
}
