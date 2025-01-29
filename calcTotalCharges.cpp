// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 01/29/2025
// Desc: Calculates the total cost of the hospital stay.
// Time: About 15 minutes.

#include <iostream>
#include "calcTotalCharges.h"
using namespace std;

//for inpatient
double calcTotalCharges(int daysSpent, double roomRate, double services, double medication)
{
    double cost = 0;
    cost += (daysSpent * roomRate) + services + medication;
    return cost;
}

//for outpatient
double calcTotalCharges(double services, double medication)
{
    double cost = 0;
    cost += services + medication;
    return cost;
}
