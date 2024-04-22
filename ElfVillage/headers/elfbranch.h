#ifndef ELFBRANCH_H
#define ELFBRANCH_H

#include <map>
#include <algorithm>

#include "elfhouse.h"

class ElfBranch
{
private:
    std::multimap<bool,ElfHouse*> _houses;
public:
    ElfBranch(const int& housesAmount);
    const std::multimap<bool, ElfHouse *> &houses() const;
    void getNeighbors(const ElfHouse* house);
    void changeStatus(const std::string& elfName,ElfHouse* house);
};

#endif // ELFBRANCH_H
