#include "elfhouse.h"

void ElfHouse::setName(const std::string &newName)
{
    //can be nullptr, catch reference error lul
    _name=="None"?this->_isInhabited=false:this->_isInhabited=true;
    _name = newName;
}

ElfHouse::ElfHouse(std::string name):_name(name)
{
    setName(name);
}

bool ElfHouse::isInhabited() const
{
    return _isInhabited;
}

const std::string &ElfHouse::name() const
{
    return _name;
}
