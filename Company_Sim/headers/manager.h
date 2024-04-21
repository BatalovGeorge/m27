#ifndef MANAGER_H
#define MANAGER_H

#include <vector>
#include <algorithm>

#include "worker.h"

class Manager{
private:
    std::vector<Worker*> _workersTeam;
    std::string _mgrName;

public:
    Manager(int workersCount, std::string mgrName);
    ~Manager(){};
    const std::vector<Worker*> getWorkers() const ;

    Task setTask(int taskIndex);

    bool availableWorkers();

    const std::string &mgrName() const;

};
#endif // MANAGER_H
