//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 2 Activity: Control Structures

/*
Task1: Grading System (if-else ladder)
A secondary school wants to develop a simple C++ program to automatically assign
grades based on students’ exam marks. Write a C++ program that performs the following
tasks:
i. Declares a variable to store student name and exam marks. Prompts the
user to enter the required details.
ii. Uses an if–else ladder to assign grades based on the following criteria:
70 – 100 → A
60 – 69 → B
50 – 59 → C
40 – 49 → D
Below 40 → E
iii. Displays the student name, marks, and the corresponding grade.
*/

#include <iostream>
using namespace std;

int main()
 {
    string Name;
    int Marks;

    cout << "\t Grading System"<<endl;

    cout <<"Enter student name and exam marks"<< endl;
    cout <<"Name: ";
    getline(cin, Name);
    cout <<"Marks: ";
    cin >> Marks;

    char Grade;

    if (Marks >=70) {  Grade = 'A';}
    else if (Marks >=60) {  Grade = 'B';}
    else if (Marks >=50) {  Grade = 'C';}
    else if (Marks >=40) {  Grade = 'D';}
    else {Grade = 'E';}

    cout <<"\n Student Graded"
        <<"\n\tStudent Name: " <<Name
        <<"\n\tStudent Marks: "<<Marks
        <<"\n\tStudent Grade:" <<Grade
    ;

    return 0;
 }