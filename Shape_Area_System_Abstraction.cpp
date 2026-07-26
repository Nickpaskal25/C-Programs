//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week12 Activity: Abstraction

/*
Task 2: Shape Area System (Abstraction)
A graphics design company wants to calculate areas of different shapes using a C++ program.
The system should use abstraction to ensure that each shape defines its own method of
calculating area. Write a C++ program that performs the following tasks:
i) Create an abstract class named Shape with:
• A pure virtual function:
o calculateArea()
ii) Create derived classes:
• Circle
• Rectangle
iii) Each class should:
• Implement calculateArea() using the appropriate formula:
o Circle: Area=πr2
o Rectangle: Area=Length×Width
iv) In the main function:
• Use a base class pointer
• Create objects of each shape
• Call calculateArea() for each object
 */

#include<iostream>
#include <cmath>
using namespace std;

class Shape {
public:
 virtual double CalculateArea() = 0 ;
 virtual ~Shape(){};;
};

class Circle : public Shape {
private:
 double radius;
 public:
 Circle(double r) {
  radius = r;
 }
 double CalculateArea() override {
  double Area = M_PI*pow(radius,2);
  return Area;
 }
};

class Rectangle: public Shape {
private:
 double length,height;
public:
 Rectangle(double l, double h) {
  length = l;
  height = h;
 }
  double CalculateArea() override {
  double Area = length* height;
  return Area;
 }
};

int main() {
 Shape* C1 = new Circle(5) ; cout<<"Area Of Circle: "<< C1->CalculateArea() <<endl;
 Shape* R1 = new Rectangle(5,6); cout<<"Area Of Circle: "<< R1->CalculateArea()<<endl;

 delete C1;
 delete R1;

 return 0;
}