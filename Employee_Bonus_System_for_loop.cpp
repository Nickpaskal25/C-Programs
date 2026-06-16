///Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 4 Activity: Loops

/*
Task 1: Employee Bonus System (for loop)
A company wants to automate the calculation of bonuses for its employees using a C++
program. Write a C++ program that performs the following tasks:
i. Declares variables to store employee name and basic salary.
ii. Uses a for loop to input details for 5 employees.
iii. For each employee, calculates bonus using the formula: Bonus=0.05�Basic
Salary
iv. Calculates total salary using: Total Salary=Basic Salary+Bonus
v. Displays a report for each employee showing name, basic salary, bonus, and
total salary
 */

#include <iostream>
using namespace std;

int main()
 {
    string Employee_Name;
    double Basic_Pay,Bonus, total_pay;

    cout <<"\tEmployee Bonus System ";

    for(int empl = 1; empl <= 5; empl++) {

        cout <<"\n Enter Empl"<<empl <<" Details:"<<endl;

        // This prevents the program from accidentally skipping the Name input.
        if (empl > 1) {
            cin.ignore();
        }
        cout<<"Name: ";
        getline(cin, Employee_Name);
        cout <<"Basic_Pay: ";
        cin >>Basic_Pay;

        Bonus = (0.05 * Basic_Pay);

        total_pay = Basic_Pay + Bonus;

        cout <<"\n Employee Details"
             <<"\n\tName: " <<Employee_Name
             <<"\n\tBonus: " <<Bonus
             <<"\n\tTotal Pay: "<<total_pay<<endl;
    }
    return 0;
 };
