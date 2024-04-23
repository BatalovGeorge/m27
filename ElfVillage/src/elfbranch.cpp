#include "elfbranch.h"

ElfBranch::ElfBranch(const int& housesAmount)
{
    //generate empty houses
    for(int am=0;am<housesAmount;am++)
    {
        this->_houses.push_back(new ElfHouse());
    }
}


const std::vector< ElfHouse*> &ElfBranch::houses() const
{
    return _houses;
}

void ElfBranch::changeStatus(const std::string &elfName,ElfHouse* house)
{
    if(elfName.empty()){return;}
    house->setName(elfName);
}



