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
    void changeStatus(const std::string& elfName,ElfHouse* house);
    const std::multimap<bool, ElfHouse *> &houses() const;
};

#endif // ELFBRANCH_H
