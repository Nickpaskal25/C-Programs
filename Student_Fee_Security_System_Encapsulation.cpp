//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week11 Activity: Encapsulation

/*
Task 2: Student Fee Security System (Encapsulation)
A school wants to develop a C++ program to securely manage student fee information. The
system should prevent direct access to sensitive fee data using encapsulation. Write a C++
program that performs the following tasks:
i) Create a class named Student with the following private data members:
• Student name
• Admission number
• Fee balance
ii) Include public member functions to:
• inputStudentData() → to input student details
• makePayment() → to reduce the fee balance when a payment is made
• displayStatus() → to show student details and remaining balance
iii) Ensure that the fee balance cannot be accessed or modified directly from outside the class.
iv) In the main function:
• Create an object of the class
• Input student details
• Process a fee payment
• Display updated status
 */
#include <iostream>
using namespace std;

class Student {
private:
 string Stud_Name,ADM_NO;
 double Fee_Bal;
public:
 void inputStudentData(string name, string ADM, double balance) {
  Stud_Name = name;
  ADM_NO = ADM;
  Fee_Bal = balance;
 }
 void makePayment(double Paid) {
  Fee_Bal -= Paid;
 }
 void displayStatus() {
  cout <<"\nStudent name: "<<Stud_Name
       <<"\nAdmission number: "<<ADM_NO
       <<"\nFee balance: "<<Fee_Bal;
 }
};

int main() {
 Student s1;
 s1.inputStudentData("Nick Paskal","BcS0046",50000);
 s1.makePayment(40000);
 s1.displayStatus();
 return 0;
}