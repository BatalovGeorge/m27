#ifndef COMPANY_H
#define COMPANY_H

#include "ceo.h"

#include <memory>
class company
{
private:
    unsigned int _managers,_workers,_tasks;

public:
    company(const int m,const int w, const int t);
};

#endif // COMPANY_H
