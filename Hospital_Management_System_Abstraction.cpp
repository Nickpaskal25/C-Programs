//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week12 Activity: Abstraction

/*
Task 1: Hospital Management System (Abstraction)
A hospital wants to develop a C++ system to manage different types of medical staff. The system
should use abstraction to hide implementation details while exposing only essential operations.
Write a C++ program that performs the following tasks:
i) Create an abstract class named MedicalStaff with the following:
• Protected attributes:
o Staff name
o Staff ID
ii) Include a pure virtual function:
• calculateSalary() → to be implemented differently by each type of staff
iii) Include a non-virtual function:
• displayDetails() → to display staff name and ID
iv) Create derived classes:
• Doctor
• Nurse
Each class should:
• Implement calculateSalary() differently:
o Doctor salary includes basic salary + allowance
o Nurse salary includes basic salary + overtime pay
v) In the main function:
• Use a base class pointer
• Create objects of both derived classes
• Demonstrate runtime behavior using abstraction
 */

#include <iostream>
using namespace std;

class MedicalStaff {
protected:
 string Staff_name, Staff_ID;
public:
 virtual double calculateSalary() = 0;
 virtual  ~MedicalStaff(){};
 void displayDetails() {
  cout <<"\n\tStaff Details"
       <<"\nStaff_name: "<<Staff_name
       <<"\nStaff_ID: "<<Staff_ID<<endl;
 }
};

class Doctor: public MedicalStaff {
private:
 double basic_salary, allowance;
public:
 Doctor(string N, string id,double bs, double all) {
  Staff_name = N;
  Staff_ID = id;
  basic_salary = bs;
  allowance = all;
 }
 double calculateSalary() override {
  double salary =basic_salary + allowance;
  return salary;
 }
};

class Nurse: public MedicalStaff {
private:
 double basic_salary, overtime_pay;
public:
 Nurse(string N, string id, double bs, double ov) {
  Staff_name = N;
  Staff_ID = id;
  basic_salary = bs;
  overtime_pay = ov;
 }
 double calculateSalary() override {
  double salary =basic_salary + overtime_pay;
  return salary;
 }
};

int main() {
 MedicalStaff* D1 = new Doctor("Nick","BCS34",100000,30000);
 MedicalStaff* N1 = new Nurse("Norine","BCS35",500000,30000);
 D1->displayDetails(); cout<< "Salary: "<<D1->calculateSalary();
 N1->displayDetails(); cout<< "Salary: "<< N1->calculateSalary();

 delete D1;
 delete N1;
 return 0;
}