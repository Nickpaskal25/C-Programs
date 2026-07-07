//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 9 Activity: Inheritance

/*
Task 1: School Management System
A school wants to develop a C++ system to manage different types of users in the school system.
The system should reduce repetition of code by using inheritance. Write a C++ program that
performs the following tasks:
i) Create a base class named Person with the following attributes:
• Name
• Age
ii) Include a member function in the base class:
• displayPerson() → to display name and age
iii) Create a derived class named Student that inherits from Person and adds:
• Admission number
• Class
iv) Include a member function in the derived class:
• displayStudent() → to display student details together with inherited details
v) In the main function:
• Create an object of the Student class
• Input and display all details
 */

#include <iostream>
using namespace std;

class Person {
public:
    string Name;
    int Age;

    Person(string n, int a) {
        Name = n;
        Age = a;
    }

    void displayPerson() {
        cout <<"Name: "<<Name <<"\n"
             <<"Age: "<<Age <<endl;
    }
};

class Student: public Person {
public:
    string Admission_Number,Class;
    Student (string n, int a,string ADM, string C) : Person(n,a) {
        Admission_Number = ADM;
        Class = C;
    }

    void DisplayStudent() {
        cout <<"ADM: "<<Admission_Number <<"\n"
             <<"Class: "<<Class <<endl;
    }
};

int main() {
    cout <<"    School Management System "<<endl;
    Student std1("Nicholas Otieno",20,"BCS-05-0046/2025","CompScience");

    std1.displayPerson();
    std1.DisplayStudent();

    return 0;
}