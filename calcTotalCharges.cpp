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
