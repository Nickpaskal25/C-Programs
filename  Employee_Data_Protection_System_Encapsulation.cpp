//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week11 Activity: Encapsulation

/*
Task 1: Employee Data Protection System (Encapsulation)
A company wants to develop a C++ system to store and manage employee details securely. The
system should ensure that sensitive data is protected from direct access using encapsulation.
Write a C++ program that performs the following tasks:
i) Create a class named Employee with the following private data members:
• Employee name
• Employee ID
• Basic salary
ii) Include public member functions to:
• setEmployeeDetails() → to input and assign values to the data members
• calculateSalary() → to compute net salary after adding a 10% allowance using the
formula:
Net Salary = Basic Salary + 0.10 × Basic Salary
• displayEmployeeDetails() → to display employee information and net salary
iii) In the main function:
• Create an object of the class
• Set employee details
• Display the employee details
*/

#include <iostream>
using namespace std;

class Employee {
private:
    string Empl_Name, Empl_ID;
    double Basic_Sal;

public:
    void setEmployeeDetails(string name, string ID, double bsSal) {
        Empl_Name = name;
        Empl_ID =ID;
        Basic_Sal = bsSal;
    }

    double calculateSalary() {
        double Net_Salary = Basic_Sal + 0.10 * Basic_Sal;
        return Net_Salary;
    }
    void displayEmployeeDetails() {
        cout <<"\t Employee Data Protection System \n"
             <<"\nEmployee name: "<<Empl_Name
             <<"\nEmployee ID: "<<Empl_ID
             <<"\nBasic salary: "<<Basic_Sal
             <<"\nNet_Salary: "<<calculateSalary()<<endl;
    }
};
int main() {
    Employee Emp1;
    Emp1.setEmployeeDetails("Norine","BcN345",100000);
    Emp1.displayEmployeeDetails();
    return 0;
}