#include <iostream>
#include <vector>
#include <iomanip>
#include "calcTotalCharges.h"
#include "validateUserInput.h"
using namespace std;

int main()
{
    char patient;
    double hospitalCharge, dailyRoomRate, labFees, medicationCharges;
    int numDays;
    bool validateUser = false;
    
    cout << "This program will calculate a patient's hospital charges." << endl;
    
    cout << "Enter I for in-patient or O for out-patient: ";
    cin >> patient;
    
    while (patient != 'I' && patient != 'O')
    {
        cout << "Invalid input. Please try again." << endl;
        cout << "Enter I for in-patient or O for out-patient: ";
        cin >> patient;
    }
    
    do {
        if (patient == 'I') {  // Inpatient
            cout << "Number of days in the hospital: ";
            cin >> numDays;
            cout << "Daily room rate ($): ";
            cin >> dailyRoomRate;
            cout << "Lab fees and other service charges ($): ";
            cin >> labFees;
            cout << "Medication charges ($): ";
            cin >> medicationCharges;
            
            // Validate the input
            if (validateUserInput(numDays, dailyRoomRate, labFees, medicationCharges))
            {
                validateUser = true;
                hospitalCharge = calcTotalCharges(numDays, dailyRoomRate, labFees, medicationCharges);
                cout << "Your total hospital bills is $" << fixed << setprecision(2) << hospitalCharge << endl;
            }
            else
            {
                cout << "Invalid input: Values can not be negative. Please try entering again." << endl;
            }
        }
        else // Outpatient
        {
            cout << "Lab fees and other service charges ($): ";
            cin >> labFees;
            cout << "Medication charges ($): ";
            cin >> medicationCharges;
            
            // Validate the input
            if (validateUserInput(0, 0.0, labFees, medicationCharges))
            {
                validateUser = true;
                hospitalCharge = calcTotalCharges(labFees, medicationCharges);
                cout << "Your total hospital bills is $" << fixed << setprecision(2) << hospitalCharge << endl;
            }
            else
            {
                cout << "Invalid input: Values can not be negative. Please try entering again." << endl;
            }
        }
    } while (validateUser == false);
    
    return 0;
}
