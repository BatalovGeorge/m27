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
    int branches = 2;

    std::cout<<"Random generated amount of branches:"<<branches<<std::endl;

    if(isNonPositive(branches)){std::cout<<"Branches connot be null or negative num"; return;}
    int i=1;
    while(branches>0)
    {
        int houses = getRandomValue(2,3);
        std::cout<<"Generated amount of houses:"<<houses<<" on branch "<<i<<std::endl;
        i++;
        ElfBranch* branch = new ElfBranch(houses);

        _branches.push_back(branch);
        branches--;
    }

    std::cout<<std::endl;
    std::string elf = getElfName();
    getNeighbors(elf);

}

void ElfTree::getNeighbors(const std::string& name)
{
    auto branch = std::find_if(branches().begin(),branches().end(),[&]( ElfBranch& brnch){
    return brnch.findName(name);
    });

    if(branch!=branches().end())
    {
        int indexBranch = std::distance(branches().begin(),branch);
        std::cout<<branches().at(indexBranch)->houses().at()
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
