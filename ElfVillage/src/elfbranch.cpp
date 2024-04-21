#include "elfbranch.h"

ElfBranch::ElfBranch(const int& housesAmount)
{
    //generate empty houses
    for(int am=0;am<housesAmount;am++)
    {
        this->_houses.insert(std::make_pair(false,new ElfHouse("NONE")));
    }
}

const std::multimap<bool, ElfHouse *> &ElfBranch::houses() const
{
    return _houses;
}

void ElfBranch::changeStatus(const std::string &elfName,ElfHouse* house)
{
    //set isInhabited -> true
    house->setName(elfName);
}
