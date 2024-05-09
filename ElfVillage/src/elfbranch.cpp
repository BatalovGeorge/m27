#include "elfbranch.h"

const unsigned &ElfBranch::numHouse() const
{
    return _numHouse;
}

void ElfBranch::setNumHouse(const unsigned &newNumHouse)
{
    _numHouse = newNumHouse;
}

ElfBranch::ElfBranch(const int& housesAmount)
{
    //generate empty houses
    this->_houses.reserve(housesAmount);
}

const std::vector<std::string> &ElfBranch::houses() const
{
    return _houses;
}

void ElfBranch::changeStatus(const std::string &elfName,const int& elfNum)
{
    if(elfName.empty()||((elfNum<0)&&(elfNum>this->houses().size()))){return;}
}

bool ElfBranch::findName(const std::string& nameElf)
{
    const auto& name_it = std::find(houses().begin(),houses().end(), nameElf);
    if(name_it!=houses().end()){return true;}
    return false;
}



