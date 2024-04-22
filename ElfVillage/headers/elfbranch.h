#ifndef ELFBRANCH_H
#define ELFBRANCH_H

#include <map>
#include <algorithm>

#include "elfhouse.h"


class ElfBranch
{
private:
    std::vector<ElfHouse*> _houses;
public:
    ElfBranch(const int& housesAmount);

    const std::vector<ElfHouse*> &houses() const;
    void changeStatus(const std::string& elfName,ElfHouse* house);
};

#endif // ELFBRANCH_H
