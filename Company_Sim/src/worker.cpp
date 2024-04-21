#include "worker.h"

Worker::Worker(std::string name):_name(name)
{
    this->_task=Task::EMPTY_TASK;
}

void Worker::setTask(const Task &t){this->_task=t;}

Task Worker::getTask() const {return this->_task;}

void Worker::showCurTask()
{
    std::string msg=_name;
    switch(_task)
    {
        case Task::TASK_A:
        msg+=": Task A";
        break;
        case Task::TASK_B:
        msg+=": Task B";
        break;
        case Task::TASK_C:
        msg+=": Task C";
        break;
        case Task::EMPTY_TASK:
       msg+=" EMPTY TASK";
        break;
    }
    std::cout<<msg<<std::endl;
}
