#include "branch.h"

Branch::Branch():Elf_Tree()
{
    std::cout<<"Branch"<<std::endl;
    for(int branch_num=0; branch_num<rand_vals(MIN_SUBBRANCH,MAX_SUBBRANCH);branch_num++)
    {
        _sub_branches.push_back(new Sub_Branch);
    }
    show();
}

void Branch::show()
{
    std::cout<<" "<<std::endl;
}
