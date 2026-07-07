//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 9 Activity: Inheritance

/*
Task 2: Vehicle System
A transport company wants to develop a C++ system to manage different types of vehicles. The
system should use inheritance to represent shared and specific properties of vehicles. Write a
C++ program that performs the following tasks:
i) Create a base class named Vehicle with the following attributes:
• Brand
• Year of manufacture
ii) Include a member function in the base class:
• displayVehicle() → to display vehicle details
iii) Create a derived class named Car that inherits from Vehicle and adds:
• Number of doors
• Engine capacity
iv) Include a member function in the derived class:
• displayCar() → to display all car details including inherited attributes
v) In the main function:
• Create an object of the Car class
• Input and display all details
 */
#include  <iostream>
using namespace std;

class Vehicle {
public:
    string Brand;
    int Year_of_manufacture;

    Vehicle(string b, int y) {
        Brand =b;
        Year_of_manufacture = y;
    }

    void DisplayVehicle() {
        cout <<" Brand: "<<Brand <<"\n"
             <<" Year_of_manufacture: "<<Year_of_manufacture <<endl;
    }
};

class Car: public Vehicle {
public:
    int Number_of_doors;
    double Engine_capacity;

    Car(string b, int y, int d, double e) : Vehicle(b,y){
        Number_of_doors =d;
        Engine_capacity = e;
    }

    void DisplayCar() {
        cout <<" Number_of_doors: "<<Number_of_doors <<"\n"
             <<" Engine_capacity: "<<Engine_capacity <<" hp"<<endl;
    }
};

int main() {
    cout <<"Vehicle System"<<endl;
    Car c1("Xiaomi",2025,4,1527);
    c1.DisplayVehicle();
    c1.DisplayCar();
    return 0;
}