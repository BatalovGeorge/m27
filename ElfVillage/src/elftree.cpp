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
    int branches = getRandomValue(1,2);

    std::cout<<"Random generated amount of branches:"<<branches<<std::endl;

    if(isNonPositive(branches)){std::cout<<"Branches connot be null or negative num"; return;}
    int i=1;
    while(branches>0)
    {
        int houses = getRandomValue(2,3);
        std::cout<<"Generated amount of houses:"<<houses<<" on branch "<<i<<std::endl;
        i++;
        ElfBranch* branch = new ElfBranch(houses);
        for(auto house: branch->houses())
        {
            branch->changeStatus(getElfName(),house);
        }

        _branches.push_back(branch);
        branches--;
    }

    std::cout<<std::endl;
    std::string elf = getElfName();
    getNeighbors(elf);



}

void ElfTree::getNeighbors(const std::string& name)
{
    for(size_t branch=0;branch<branches().size();branch++)
    {
        for(size_t house=0;house<branches().at(branch)->houses().size();house++)
        {
            if(branches().at(branch)->houses().at(house)->name()==name)
            {
                auto prevNeighbor=branches().at(branch)->houses().at(house--)->name();
                auto postNeighbor =branches().at(branch)->houses().at(house++)->name();

                std::cout<<"PREV: "<<prevNeighbor;
                std::cout<<"; POST: "<<postNeighbor;
            }
        }
    }


}


const std::vector<ElfBranch*> &ElfTree::branches() const
{
    return _branches;
}

std::string ElfTree::getElfName()
{
    std::string nameElf;
    std::cout<<"Input name of elf: ";
    getline(std::cin,nameElf);
    return nameElf;
}
