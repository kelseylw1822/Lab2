#include "validateUserInput.h"

bool validateUserInput(int days, double rate, double labFees, double medCharges)
{
    if (days < 0 || rate < 0.0 || labFees < 0.0 || medCharges < 0.0)
    {
        return false;
    }
    return true;
}

