#include "rand_vals.h"

int rand_vals(int min,int max)
{
    std::srand(time(nullptr));
    int rand_num = min + std::rand() % (max - min +1);
    return rand_num;
}
