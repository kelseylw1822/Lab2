// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 01/29/2025
// Desc: Determines if input from the user is valid.
// Time: Once I found out I had to change the parameters to just one, it took me about 5 minutes.

#include "validateUserInput.h"

bool validateUserInput(double input)
{
    if (input < 0)
    {
        return false;
    }
    return true;
}

