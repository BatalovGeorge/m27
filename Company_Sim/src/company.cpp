#include "company.h"

company::company(const int m, const int w, const int t):_managers(m),_workers(w), _tasks(t)
{
    std::unique_ptr<CEO> companyName(new CEO(_managers,_workers));
    companyName->taskPlan(_tasks);
}
