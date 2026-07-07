//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 8 Activity: Constructors and Destructors

/*
Task 2: Hotel Room Booking System (Constructors and Destructors)
A hotel wants to develop a simple C++ system to manage room bookings. Each time a room is
booked, the system should initialize booking details automatically, and when the booking ends, it
should display a cleanup message. Write a C++ program that performs the following tasks:
i) Create a class named RoomBooking with the following attributes:
• Guest name
• Room number
• Number of days booked
ii) Implement a constructor that:
• Initializes all attributes when an object is created
• Displays a message: “Room booking confirmed”
iii) Include a member function displayBooking() to show booking details.
iv) Implement a destructor that:
• Displays a message: “Booking ended, room released”
v) In the main function:
• Create an object of the class
• Display booking detail
 */

#include <iostream>
using namespace std;

class RoomBooking {
public:
 string Guest_name, Room_No;
 int Days;

 RoomBooking(string n, string r, int d) {
  Guest_name = n;
  Room_No = r;
  Days = d;

  cout << "\nRoom booking confirmed";
 }

 void displayBooking() {
    cout << "\n Guest_name: " << Guest_name
       << "\n Room_No: " << Room_No
       << "\n Days: " << Days
   ;
 }

 ~RoomBooking() {
  cout <<"\nBooking ended, room released";
 }

};

int main() {
 RoomBooking G1("Nick otieno","RM26", 5);
 G1.displayBooking();
 return 0;
}
