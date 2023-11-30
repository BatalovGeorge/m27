#ifndef SUB_BRANCH_H
#define SUB_BRANCH_H

#include "elf_tree.h"

class Sub_Branch:public Elf_Tree
{
    std::string _houseHolder_name;
public:
    Sub_Branch();
    std::string get_holder_name();
};

#endif // SUB_BRANCH_H
