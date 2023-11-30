#ifndef BRANCH_H
#define BRANCH_H

#pragma once

#include <iostream>

#include "sub_branch.h"
#include "elf_tree.h"

class Branch:public Elf_Tree
{
private:
    std::vector<Elf_Tree*> _sub_branches;
    int _branch_num;
    std::string _branch_identity;
public:
    Branch();
    void show();
};

#endif // BRANCH_H
