#include <iostream>

#include "elftree.h"
int main()
{
    ElfTree *tr = new ElfTree();
    tr->makeTree();
    delete tr;
    return 0;
}
