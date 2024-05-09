#include "elfbranch.h"

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

void ElfBranch::check_valuable(int val1, int val2)
{
    bool ok;
    std::string name;
    if(val1<val2-1){std::cout<<"prev neighbor:"<<houses().at(val1+1);}
    if(val1>0){std::cout<<"post neighbor:"<<houses().at(val1-1);}
}

void ElfBranch::findNeighbor(const std::string& nameElf)
{
    auto house =this->_houses.begin();
    while(house!=this->_houses.end())
    {
        if(*house==nameElf)
        {
            int indexHouse = std::distance(this->_houses.begin(),house);
            check_valuable(indexHouse,houses().size());
        }else{std::cout<<nameElf<<" not found;";}
        house++;
    }
}
