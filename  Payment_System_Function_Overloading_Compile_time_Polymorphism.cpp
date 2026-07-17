//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 10 Activity: Polymorphism

/*
Task 1: Payment System (Function Overloading – Compile-time Polymorphism)
A mobile money company wants to develop a C++ system that processes different types of
payments using a single function name. The system should use function overloading to handle
different payment methods. Write a C++ program that performs the following tasks:
i) Create a class named Payment with overloaded functions named processPayment() that:
• Accepts an integer amount for cash payment
• Accepts two parameters (amount and transaction fee) for card payment
• Accepts three parameters (amount, fee, and discount) for mobile payment
ii) Each function should calculate and display the final payment amount.
iii) In the main function:
• Create an object of the class
• Demonstrate all three types of payments
 */

#include <iostream>
using namespace std;

class Payment {
public:
 void processPayment(int amount) {
  cout <<" \n Cash Payment";
  cout<<"\nAmount: "<<amount<< endl;
 }

 void processPayment(double amount,double fee) {
  cout <<"\n Card Payment";
  cout <<"\nAmount: " << amount <<"\nFee: "<<fee<<endl;
 }

 void processPayment(double amount,double fee,double discount) {
  cout<<" \n Mobile Payment";
  cout <<"\n\tAmount: " << amount <<"\n\tFee: "<<fee <<"\n\tDiscount: "<<discount<<endl;
 }
};


int main() {
 cout<< " \tPayment System ";

 Payment P1;
 P1.processPayment(200);
 P1.processPayment(300,200);
 P1.processPayment(500,600,100);
 return 0;
}