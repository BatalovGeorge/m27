#ifndef ELFTREE_H
#define ELFTREE_H

#include "elfbranch.h"
#include "cctype"
//#include "algorithm"
#include <cstdlib>
#include <ctime>


class ElfTree
{
private:
    std::vector <ElfBranch*> _branches;
public:
    ElfTree(){};

    void makeTree();
    const std::vector<ElfBranch *> &branches() const;
    std::string getElfName();
    void getNeighbors(const std::string& name);

};

#endif // ELFTREE_H
