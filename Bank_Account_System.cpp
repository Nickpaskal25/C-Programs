//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 8 Activity: Constructors and Destructors

/*
Task 1: Bank Account System
A bank wants to develop a simple C++ program to manage customer accounts. The system
should automatically initialize account details when a new account is created and display a
message when the account is closed. Write a C++ program that performs the following tasks:
i) Create a class named BankAccount with the following attributes:
• Account holder name
• Account number
• Account balance
ii) Implement a constructor that:
• Initializes all data members when an object is created
• Displays a message: “Account successfully created”
iii) Include a member function displayAccount() to display account details.
iv) Implement a destructor that:
• Displays a message: “Account closed successfully” when the object is destroyed
v) In the main function:
• Create an object of the class
• Display account details
 */

#include  <iostream>
using namespace std;

class BankAccount {
 public:
 string Account_holder, Account_number;
 double Account_balance;

 BankAccount(string ah, string accNo, double bal) {
  Account_holder = ah;
  Account_number = accNo;
  Account_balance = bal;

  cout <<"Account successfully created" <<endl;
 }
 void displayAccount() {
  cout <<" Account_holder : " <<Account_holder <<"\n"
       <<" Account_number : " <<Account_number <<"\n"
       <<" Account_balance : Ksh." <<Account_balance <<endl;
 }

 ~BankAccount() {
  cout <<"Account closed successfully";
 }
};

int main () {
 BankAccount Acc1("Norine Keziah","BCS-05-0046/2025", 50000);

 Acc1.displayAccount();
 return 0;
}

