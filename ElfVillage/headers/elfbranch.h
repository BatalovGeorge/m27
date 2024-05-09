#ifndef ELFBRANCH_H
#define ELFBRANCH_H

#include <iostream>
#include <map>
#include <algorithm>
#include <vector>

class ElfBranch
{
private:
    std::vector<std::string> _houses;
public:
    ElfBranch(const int& housesAmount);

    [[nodiscard]]const std::vector<std::string> &houses() const;
    void changeStatus(const std::string& elfName,const int& elfNum);
    void findNeighbor(const std::string& nameElf);
    void check_valuable(int,int);

};

#endif // ELFBRANCH_H
