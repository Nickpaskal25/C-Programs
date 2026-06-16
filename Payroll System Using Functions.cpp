//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 3 Activity: Functions

/*
Task One:Payroll System Using Functions
A small manufacturing company wants to develop a simple C++ program to calculate
employee salaries in a structured way using functions. Write a C++ program that performs
the following tasks:
i. Defines a function getEmployeeDetails() that prompts the user to enter
employee name, basic salary, and overtime hours.
ii. Defines a function calculateOvertimePay() that calculates overtime pay
using the formula: Overtime Pay=Overtime Hours×Rate Per Hour
iii. Defines a function calculateNetSalary() that computes net salary using: Net
Salary=Basic Salary+Overtime Pay
iv. Defines a function displayPayslip() that prints a well-formatted payslip
showing all details.
v. The main function should call all the above functions in a logical sequence.
*/

#include <iostream>
using namespace std;

string name; float basic_salary,overtime_hours;
float overtime_pay, net_Salary;

void  getEmployeeDetails()
 {
    cout <<"Enter Employee Details."<<endl;
    cout <<"Employee name: ";
    getline(cin,name);
    cout <<"basic salary: ";
    cin >> basic_salary;
    cout <<"overtime_hours: ";
    cin>> overtime_hours ;

 };

float calculateOvertimePay()
 {
    float Rate_Per_Hour = 1000;
    overtime_pay = overtime_hours * Rate_Per_Hour;
    return overtime_pay ;
 };

float calculateNetSalary()
 {
    net_Salary =   overtime_pay + basic_salary;
    return net_Salary;
 };
void displayPayslip()
 {
    cout <<"Payslip Details"
         << "\n\t Employee Name: " <<name
         <<"\n\t basic_salary: " <<basic_salary
         <<"\n\t overtime_hours: " <<overtime_hours
         <<"\n\t overtime_pay: " <<overtime_pay
         <<"\n\t net_Salary: " <<net_Salary
    ;
 };


int main()
 {

    cout <<"\tPayroll System " <<endl;
    getEmployeeDetails();
    calculateOvertimePay();
    calculateNetSalary();
    displayPayslip();

    cout <<"\n!!We Value you As Our Employee!!";

 return 0;
 }