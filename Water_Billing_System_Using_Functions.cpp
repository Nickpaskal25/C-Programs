//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 3 Activity: Functions

/*
Task Two: Water Billing System Using Functions
A water supply company wants to develop a simple C++ program to calculate monthly
water bills using modular programming (functions). Write a C++ program that performs the
following tasks:
i. Defines a function getCustomerDetails() that prompts the user to enter
customer name and number of units consumed.
ii. Defines a function calculateBill() that computes the water bill using the
formula: Water Bill=Units Consumed × Rate Per Unit
iii. Defines a function applyDiscount() that reduces the bill by 10% if the
customer uses more than 100 units.
iv. Defines a function displayBill() that prints a full bill showing customer
name, units consumed, total bill before discount, discount (if any), and final
amount payable.
v. The main function should call all functions in a logical sequence to complete the
program.
*/

#include <iostream>
using namespace std;
string name;
float Units_Consumed, Water_Bill, discount, Discounted_bill;

void getCustomerDetails()
 {
  cout << "Enter customer details." <<endl;
    cout <<"Name: ";
    getline(cin, name);
    cout <<"Units: ";
    cin >>Units_Consumed;
 };

float calculateBill()
{
    float Rate_Per_Unit = 15;
    Water_Bill = Units_Consumed * Rate_Per_Unit;
    return Water_Bill;
};

float applyDiscount()
 {
    if (Units_Consumed >= 100)
      {
        float discount_Rate = (0.1);
        discount = (Water_Bill * discount_Rate);
        Discounted_bill =Water_Bill - discount;
       }
    else {
        cout <<"No Discount";
        Discounted_bill = Water_Bill;
    };

    return  Discounted_bill;
 };

void displayBill() {
  cout << "Water Bill" <<endl
       <<"\tName: " <<name
       <<"\n\tUnits_Consumed: " <<Units_Consumed
       <<"\n\tWater_Bill: " <<Water_Bill
       <<"\n\tDiscount:" <<discount
       <<"\n\tDiscounted_bill :" <<Discounted_bill
  ;

};


int main()
  {
  cout <<" Water Billing System"<<endl;
  getCustomerDetails();
  calculateBill();
  applyDiscount();
  displayBill();

  cout <<"\n!!Pleasure to have used our services!!";

  return 0;
  };

