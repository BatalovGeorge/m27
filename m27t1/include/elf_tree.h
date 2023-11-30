#ifndef ELF_TREE_H
#define ELF_TREE_H
#pragma once
#include <vector>
#include <iostream>

#include "rand_vals.h"


class Elf_Tree
{
private:
    std::vector<Elf_Tree*> _branches;
public:
    Elf_Tree();
    void create_branches();
    void show();
};

#endif // ELF_TREE_H
