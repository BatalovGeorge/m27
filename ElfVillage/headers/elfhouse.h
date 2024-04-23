#ifndef ELFHOUSE_H
#define ELFHOUSE_H

#include <iostream>

class ElfHouse
{
    bool _isInhabited;
    std::string _name;
public:
    ElfHouse(){};
    ElfHouse(std::string name);

    const std::string &name() const;
    bool isInhabited() const;
    void setName(const std::string &newName);

};

#endif // ELFHOUSE_H
