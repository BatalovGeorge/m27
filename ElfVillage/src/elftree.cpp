#include "elftree.h"

int getRandomValue(int min, int max) {
    srand(static_cast<unsigned int>(time(nullptr)));
    return min + (rand() % (max - min + 1));
}

bool isNonPositive(const int& number)
{
    return (number <= 0);
}

void ElfTree::makeTree()
{

    int branches = 2;//getRandomValue(1,3);

    if(isNonPositive(branches)){std::cout<<"Branches connot be null or negative num"; return;}
    int i=1;
    while(branches>0)
    {
        int houses = getRandomValue(2,3);
        i++;
        ElfBranch* branch = new ElfBranch(houses);

        _branches.push_back(branch);
        branches--;
    }
    std::cout<<"Random generated amount of branches:"<<this->branches().size()<<std::endl;


//set name of each elf
    for(auto branch: this->_branches)
    {
        int index=branch->houses().size()-1;
        for(auto houses:branch->houses())
        {
            std::string elf = getElfName();
            branch->changeStatus(elf,index);
            index--;
        }
    }

        std::cout<<"Searching: "<<std::endl;
        std::string elf =getElfName();

        getNeighbors(elf);
}

void ElfTree::getNeighbors(const std::string& name)
{
    for(auto branch:branches())
    {
        branch->findNeighbor(name);
    }
}

const std::vector<ElfBranch*> &ElfTree::branches() const
{
    return _branches;
}

std::string ElfTree::getElfName()
{
    std::cin.clear();
    std::string nameElf;
    std::cout<<"Input name of elf: ";
    getline(std::cin,nameElf);
    return nameElf;
}
