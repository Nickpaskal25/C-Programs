//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 2 Activity: Control Structures

/*
Task 3: Simple Calculator (switch statement)
A small electronics shop in Ruiru wants to build a simple calculator system for sales
assistants. Write a C++ program that performs the following tasks:
i. Declares variables to store two numbers and an operator (+, -, *, /). Prompts the
user to enter the values.
ii. Uses a switch statement to perform the selected operation:
‘+’ → Addition
‘-’ → Subtraction
‘*’ → Multiplication
‘/’ → Division (ensure division by zero is handled)
Result=Number1operatorNumber2
iii. Displays the result of the operation.
*/

#include <iostream>
using namespace std;

int main()
 {
    cout <<"\t Simple Calculator"<<endl;

    double num1,num2,result;

    cout <<"Enter the two values"<<endl;
    cout <<"Num1: ";
    cin >>num1;
    cout <<"Num1: ";
    cin>>num2;

    cout <<"Reply with An Operator option:"<<endl;

    cout <<"OPTIONS:\n"
           "\n\t 1: Add"
           "\n\t 2: Difference"
           "\n\t 3: Product"
           "\n\t 4: Divide\n";
    int option;
    cin >> option;

    switch (option)
      {
        case 1: result = num1 + num2;
            cout << num1 <<" + " << num2 <<" = " << result;
            break;
        case 2: result = num1 - num2;
            cout << num1 <<" - " << num2 <<" = " << result;
            break;
        case 3: result = num1 * num2;
            cout << num1 <<" * " << num2 <<" = " << result;
            break;
        case 4: result = num1 / num2;
            cout << num1 <<" / " << num2 <<" = " << result;
            break;
        default: cout<<"Entered an Invalid Option" <<endl;
      }


    return 0;
 }