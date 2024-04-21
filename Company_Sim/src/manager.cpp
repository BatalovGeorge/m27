#include "manager.h"

Manager::Manager(int workersCount, std::string mgrName):_mgrName(mgrName)
{
    std::generate_n(std::back_inserter(_workersTeam),workersCount,[this](){return new Worker("Worker"+std::to_string(_workersTeam.size()+1));});
}

const std::string &Manager::mgrName() const
{
    return _mgrName;
}

const std::vector<Worker*> Manager::getWorkers() const {return _workersTeam;}

Task Manager::setTask(int taskIndex)
{
    Task curTask;

    switch(taskIndex)
    {
    case 1:
        curTask=Task::TASK_A;
    break;
    case 2:
        curTask=Task::TASK_B;
    break;
    case 3:
        curTask=Task::TASK_C;
    break;
    default:
        curTask=Task::EMPTY_TASK;
    break;
    }

    return curTask;
}

bool Manager::availableWorkers()
{
    int count =0;
   for(auto worker:getWorkers())
   {
       if(worker->getTask()==Task::EMPTY_TASK){
           return true;
       }
   }

   return false;
}

