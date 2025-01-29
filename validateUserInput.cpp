#include "validateUserInput.h"

bool validateUserInput(double input)
{
    if (input < 0)
    {
        return false;
    }
    return true;
}

