#ifndef CEO_H
#define CEO_H

#include <ctime>
#include <cstdlib>
#include <random>

#include "manager.h"

class CEO{
private:
    std::vector<Manager*> _managers;
public:
    CEO(int managerCount, int workersCount);
    ~CEO(){};

    std::vector<Manager*> getManagers() const;
    void taskPlan(const int& tasksCount);

    bool availableTeam();
    void showStatusTeam() const;

};
#endif // CEO_H
