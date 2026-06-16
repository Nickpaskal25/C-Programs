//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 2 Activity: Control Structures

/*
Task 2: Admission Decision (Nested if)
A college in Ruiru is processing student applications for admission. A student is admitted
only if they meet both academic and age requirements. Write a C++ program that performs
the following tasks:
i. Declares variables to store student name, age, and exam score. Prompts the
user to enter the required details.
ii. Uses nested if statements to determine admission:
o First check if age is 18 and above
• If true, check if score is 50 and above
• If true → “Admitted”
• Otherwise → “Not Admitted: Low Score”
o If age is below 18 → “Not Admitted: Underage”
iii. Displays the admission decision clearly.
*/

#include <iostream>
using namespace std;

int main()
 {
    string Student_Name;
    int age, Exam_Score;

    cout <<"\t Admission Decision " <<endl;
    cout <<"Enter Student Details:" <<endl;
    cout <<"Student_Name: ";
    getline(cin, Student_Name);
    cout <<"Age: ";
    cin >> age ;
    cout <<"Exam_Score: ";
    cin>> Exam_Score;

    cout <<"\nAdmission Details"
        <<"\n\t Student_Name: " <<Student_Name
        <<"\n\t Age: " <<age
        <<"\n\t Exam_Score: " <<Exam_Score
    ;

    if (age >= 18)
        {
        if (Exam_Score >= 50)
            { cout <<"\n Student Admitted";}
        else { cout <<"\n Not Admitted: Low Score";}
        }

    else { cout << "\n Not Admitted:  Underage";}

    return 0;
 };