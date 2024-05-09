#ifndef ELFBRANCH_H
#define ELFBRANCH_H

#include <iostream>
#include <map>
#include <algorithm>

class ElfBranch
{
private:
    std::vector<std::string> _houses;
    unsigned _numHouse;
public:
    ElfBranch(const int& housesAmount);

    [[nodiscard]]const std::vector<std::string> &houses() const;
    void changeStatus(const std::string& elfName,const int& elfNum);
    bool findName(const std::string& nameElf);
    const unsigned &numHouse() const;
    void setNumHouse(const unsigned &newNumHouse);
};

#endif // ELFBRANCH_H
