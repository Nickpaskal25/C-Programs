//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 10 Activity: Polymorphism

/*
Task 2: Shape Drawing System (Function Overriding – Run-time Polymorphism)
A graphics software company wants to develop a C++ program that can draw different shapes
using runtime polymorphism. Write a C++ program that performs the following tasks:
i) Create a base class named Shape with a virtual function:
• draw()
ii) Create derived classes:
• Circle
• Rectangle
• Triangle
iii) Each derived class should override the draw() function to display:
• “Drawing Circle”
• “Drawing Rectangle”
• “Drawing Triangle”
iv) In the main function:
• Create a base class pointer
• Use it to call the draw() function for each derived class
v) Demonstrate runtime polymorphism by showing different outputs depending on the object
referenced.
*/

#include  <iostream>
using namespace std;

class Shape {
public:
    virtual  void draw() {
        cout<< "Lets Draw"<<endl;
    }
};
class Circle: public Shape {
public:
    void draw() override {
        cout<< "Drawing Circle"<<endl;
    }
};
class Rectangle: public Shape {
public:
    void draw() override {
        cout<< "Drawing Rectangle"<<endl;
    }
};
class Triangle: public Shape {
public:
    void draw() override {
        cout<< "Drawing Triangle"<<endl;
    }
};


int main() {
    Shape* shptr = new Shape(); shptr->draw();
    Circle* cptr = new Circle(); cptr->draw();
    Rectangle* rptr = new Rectangle(); rptr->draw();
    Triangle* tptr = new Triangle(); tptr->draw();

    delete shptr;
    delete cptr;
    delete rptr;
    delete tptr;

    return 0;
}