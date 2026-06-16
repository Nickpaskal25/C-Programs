//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 1 Activity: C++ Basics

/*
* Task 1: Mobile Phone Sales Receipt System
A mobile phone shop in Ruiru has introduced a computerized system to help sales attendants
calculate customer purchases and print sales details accurately. The shop owner wants a simple
C++ program that can capture phone sale information and display a customer receipt. Write a C++
program that performs the following tasks:
i. Declares variables to store: Customer name, Phone model purchased, Quantity
bought, Price per phone. Prompts the user to enter the given details.
ii. Calculates the total sales amount using the formula: Total Sales Amount=Quantity
Bought × Price Per Phone
iii. Displays a well-formatted receipt showing: Customer name, Phone model
purchased, Quantity bought, Price per phone, Total sales amount.
 */

#include <iostream>
using namespace std;

int main()
 {
    string Customer_Name, Phone_Model;
    int Quantity_Purchased;
    float Price_Per_Phone;

    cout <<"\t Mobile Phone Sales Receipt System" <<endl;

    cout <<"\n Enter Sale details: Customer name, Phone model purchased, Quantity bought, Price per phone"<<endl;
    getline(cin,Customer_Name);
    getline(cin, Phone_Model);
    cin >> Quantity_Purchased >> Price_Per_Phone;

    float Total_Sales_Amount = Quantity_Purchased * Price_Per_Phone;

    cout <<"\n PHONE RECEIPT" <<endl;
    cout <<"\t: Customer_Name"<< Customer_Name
         <<"\n\t: Phone_Model"<<Phone_Model
         <<"\n\t: Quantity_Purchased"<< Quantity_Purchased
         <<"\n\t: Price_Per_Phone"<< Price_Per_Phone <<endl
    <<"Total sales amount: Ksh."<<Total_Sales_Amount
    ;

    return 0;
 };