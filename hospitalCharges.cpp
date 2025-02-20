// My Name: Kelsey Wessel
// My Class: CPSC 1021
// Date: 01/29/2025
// Desc: Determines the total hospital charge of a patient depending on their input.
// Time: About 1 hour for 2 days.

#include <iostream>
#include <iomanip>
#include "calcTotalCharges.h"
#include "validateUserInput.h"
using namespace std;

int main()
{
    char patient;
    double hospitalCharge, dailyRoomRate, labFees, medicationCharges;
    int numDays;
    
    cout << "This program will calculate a patient's hospital charges." << endl;
    
    cout << "Enter I for in-patient or O for out-patient: ";
    cin >> patient;
    
    while (patient != 'I' && patient != 'O')
    {
        cout << "Invalid input. Please try again." << endl;
        cout << "Enter I for in-patient or O for out-patient: ";
        cin >> patient;
    }
    
    if (patient == 'I') {  // Inpatient
        cout << "Number of days in the hospital: ";
        cin >> numDays;
        while (!validateUserInput(numDays))
        {
            cout << "Invalid input: Values can not be negative. Please try entering again: ";
            cin >> numDays;
        }
        cout << "Daily room rate ($): ";
        cin >> dailyRoomRate;
        while (!validateUserInput(dailyRoomRate))
        {
            cout << "Invalid input: Values can not be negative. Please try entering again: " ;
            cin >> dailyRoomRate;
        }
        cout << "Lab fees and other service charges ($): ";
        cin >> labFees;
        while (!validateUserInput(labFees))
        {
            cout << "Invalid input: Values can not be negative. Please try entering again: " ;
            cin >> labFees;
        }
        cout << "Medication charges ($): ";
        cin >> medicationCharges;
        while (!validateUserInput(medicationCharges))
        {
            cout << "Invalid input: Values can not be negative. Please try entering again: " ;
            cin >> medicationCharges;
        }
            
        hospitalCharge = calcTotalCharges(numDays, dailyRoomRate, labFees, medicationCharges);
        cout << "Your total hospital bills is $" << fixed << setprecision(2) << hospitalCharge << endl;
        
    }
    else // Outpatient
    {
        cout << "Lab fees and other service charges ($): ";
        cin >> labFees;
        while (!validateUserInput(labFees))
        {
            cout << "Invalid input: Values can not be negative. Please try entering again: ";
            cin >> labFees;
        }
        cout << "Medication charges ($): ";
        cin >> medicationCharges;
        while (!validateUserInput(medicationCharges))
        {
            cout << "Invalid input: Values can not be negative. Please try entering again: " ;
            cin >> medicationCharges;
        }
        
        hospitalCharge = calcTotalCharges(labFees, medicationCharges);
        cout << "Your total hospital bills is $" << fixed << setprecision(2) << hospitalCharge << endl;
    }
    
    return 0;
}
