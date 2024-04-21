#include "ceo.h"

int rand_val(int min, int max)
{
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(min,max);
    int rand = static_cast<int> (dis(gen));
    return rand;
}

CEO::CEO(int managerCount,int workersCount)
{
    std::generate_n(std::back_inserter(_managers),managerCount,[&, this, workersCount](){return new Manager(workersCount,"Manager"+std::to_string(getManagers().size()+1));});
}

std::vector<Manager*> CEO::getManagers()const {return this->_managers;}

void CEO::taskPlan(const int& tasksCount)
{
    int tasks=tasksCount;

    for(auto team:getManagers())
    {
        for(auto worker:team->getWorkers())
        {
            if(availableTeam()&& tasks>0)
            {

                worker->setTask(team->setTask(rand_val(1,3)));
                tasks--;
            }
        }
    }
    showStatusTeam();
    if(tasks>0){std::cout<<"tasks remaining:"<<tasks<<std::endl;}

}

bool CEO::availableTeam()
{
    for(auto team: getManagers())
    {
        if(team->availableWorkers())
        {
            return true;
        }
    }
    return false;
}

void CEO::showStatusTeam() const
{
    for(auto team:getManagers())
    {
        std::cout<<team->mgrName()<<":\n";
        for(auto worker:team->getWorkers())
        {
            worker->showCurTask();
        }
    }
}
