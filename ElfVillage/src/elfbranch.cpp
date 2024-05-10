#include "elfbranch.h"

ElfBranch::ElfBranch(const int& housesAmounts)
{
    //generate empty houses
    for(int h=0;h<housesAmounts;h++){this->_houses.push_back(std::string());}

    std::cout<<"Random generated amount of houses:"<<this->houses().size()<<std::endl;

}

const std::vector<std::string> &ElfBranch::houses() const
{
    return _houses;
}

void ElfBranch::changeStatus(const std::string &elfName,const int& elfNum)
{
    if(elfName.empty()||((elfNum<0)&&(elfNum>this->houses().size()))){return;}
    this->_houses.at(elfNum)=elfName;
}

void ElfBranch::check_valuable(int val1, int val2)
{
    val2-=1;
    std::string name;
    if(val1<=val2){std::cout<<"prev neighbor:"<<houses().at(val1+1)<<std::endl;}
    if(val1>0){std::cout<<"post neighbor:"<<houses().at(val1-1)<<std::endl;}
}

void ElfBranch::findNeighbor(const std::string& nameElf)
{
    auto house =this->_houses.begin();
    while(house!=this->_houses.end())
    {
        if(*house==nameElf)
        {
            int indexHouse = std::distance(this->_houses.begin(),house);
            std::cout<<indexHouse<<" INDEX HOUSE\t";
            std::cout<<this->_houses.size()<<" HOUSEs\t";

            check_valuable(indexHouse,this->_houses.size());
        }
        house++;
    }
}
