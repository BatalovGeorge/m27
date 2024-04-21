#ifndef WORKER_H
#define WORKER_H

#include <iostream>

enum class Task
{
    TASK_A=1,
    TASK_B,     //2
    TASK_C,     //3
    EMPTY_TASK  //4
};

class Worker{
private:
    std::string _name;
    Task _task;
public:
    Worker(std::string name);

    ~Worker(){};

    void setTask(const Task& t);
    Task getTask() const;

    void showCurTask();
};

#endif // WORKER_H
