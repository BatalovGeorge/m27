#include "branch.h"

Elf_Tree::Elf_Tree()
{

}

void Elf_Tree::create_branches()
{
    int rand_val = rand_vals(MIN_SUBBRANCH,MAX_SUBBRANCH);
    std::cout<<"Elf_tree"<<std::endl;
    for(int branch_num=0; branch_num<rand_val;branch_num++)
    {
        _branches.push_back(new Branch);
    }
    show();
}

void Elf_Tree::show()
{
    std::cout<<_branches.size();
}
