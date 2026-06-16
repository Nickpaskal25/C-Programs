//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 1 Activity: C++ Basics

/*
Task 2: Driving Test Result Evaluation System
Rocky driving school wants to develop a simple C++ program to determine whether a learner
driver has passed or failed the driving test. The program should help instructors record marks and
automatically provide results. Write a C++ program that performs the following tasks:
i. Declares variables to store: Student name, Theory test marks, Practical test marks.
Prompts the user to enter the given details.
ii. Calculates the average score using the formula: Average Score= (Theory Marks +
Practical Marks)/2
iii. Displays the student name, theory marks, practical marks, average score, and
whether the student has passed or failed. A student passes if the average score is
50 and above.
*/

#include <iostream>
using namespace std;

int main()
{
    string Student_Name;
    int Theory_Test_Marks, Practical_Test_Mark;

    cout <<"\t Driving Test Result Evaluation System"<<endl;
    cout <<"Enter the Student name, Theory test marks, Practical test marks respectively"  <<endl;

    getline(cin,Student_Name);
    cin >>Theory_Test_Marks >>Practical_Test_Mark;

    double Average_score = (Theory_Test_Marks + Practical_Test_Mark)/2;

    cout <<"Student Details: \n";
    cout <<"\tName:" <<Student_Name <<"\n\tMarks1: " << Theory_Test_Marks <<"\n\tMarks2: " <<Practical_Test_Mark
            <<"\n\tAverage Score: "<<Average_score <<endl;


    if (Average_score>=50) {
        cout <<"Bravo You Passed The Tests ";
    }
    else {cout <<"Nice Try Keep It Up";}
    return 0;
};