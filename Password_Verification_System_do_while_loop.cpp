///Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 4 Activity: Loops

/*
Task 3: Password Verification System (do-while loop)
An online system requires users to enter correct login credentials before accessing
services. Write a C++ program that performs the following tasks:
i. Stores a predefined username and password.
ii. Uses a do-while loop to repeatedly prompt the user to enter
username and password.
iii. Checks the input:
• If correct → Display “Access Granted” and exit the
loop
• If incorrect → Display “Incorrect credentials, try
again”
iv. The system should continue until correct credentials are entered.
 */

#include <iostream>
using namespace std;

int main()
 {
 cout <<"\t Password Verification System" <<endl;
 string User_Name, Pass ;

 int trials = 0;

 do {
  cout <<"Username: ";
  cin >>User_Name;

  cout << "Password: ";
  cin >> Pass;
  if (User_Name == "NickOti" and Pass == "Nick45?" ) {
   cout <<"\n\t Access Granted" <<endl;
  break;
  }

  else {cout <<"\n\tIncorrect credentials, try again" <<endl;}

  trials++;
 } while (trials >= 0);

  return 0;
 }