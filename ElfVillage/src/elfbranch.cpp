#include "elfbranch.h"

ElfBranch::ElfBranch(const int& housesAmount)
{
    //generate empty houses
    for(int am=0;am<housesAmount;am++)
    {
        this->_houses.insert(std::make_pair(false,new ElfHouse()));
    }
}

void ElfBranch::getNeighbors(const ElfHouse *house)
{
    auto nearNeighbor = std::find(houses().begin(),houses().end(),house);
    if(nearNeighbor!=houses().end())
    {
        auto prevNeighbor = nearNeighbor--;
        auto postNeighbor = nearNeighbor++;
        std::cout<<"PREV: "<<prevNeighbor->second->name()<<";\nPOST: "<<
                   postNeighbor->second->name();
    }else {std::cout<<"no such elf or neighbour";}
}


const std::multimap<bool, ElfHouse *> &ElfBranch::houses() const
{
    return _houses;
}

void ElfBranch::changeStatus(const std::string &elfName,ElfHouse* house)
{
    if(elfName.empty()){return;}
    house->setName(elfName);
}
