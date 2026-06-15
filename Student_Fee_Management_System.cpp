//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 6 Activity: Classes and Objects

/*
Task 2: Student Fee Management System (Classes and Objects)
A school wants to automate student fee processing using a C++ object-oriented program. Write a
C++ program that performs the following tasks:
i) Create a class named Student with the following attributes:
• Student name • Admission number • Fee balance
ii) Include member functions to:
• inputStudent() → to input student details
• makePayment() → to reduce fee balance when a payment is made
• displayStatus() → to display student details and remaining balance
iii) In the main function:
• Create an object of the class • Allow the user to input student details
• Process a fee payment  • Display updated fee status
 */

#include <iostream>
using namespace std;

class Student
{
public:
    string Student_name, Admission_number;
    float Fee_balance, Paid_Amount, New_Bal;

    void inputStudent() {
        cout << "Enter Student Name ADM Number and Fee Balance" <<endl;
        getline(cin , Student_name);
        getline( cin, Admission_number);
        cin >> Fee_balance;

    };

    double makePayment() {
        cout <<"Enter Amount Paid" <<endl;
        cin >> Paid_Amount;
        New_Bal = Fee_balance - Paid_Amount;

        return  New_Bal;

    };

    void displayStatus() {
        cout  <<"\nFee Status"
        <<"\n\t Student Name: " <<Student_name
        <<"\n\t Fee Balance: "<<Fee_balance
        <<"\n\t Amount Paid: "<<Paid_Amount
        <<"\n\t New Balance: "  <<New_Bal;
    };
};

int main()
{
    Student Std1;

    cout <<"\t Student Fee Management System";
    Std1.inputStudent();
    Std1.makePayment();
    Std1.displayStatus();

    cout <<"\n Payment Successful";
    return 0;
};