//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 6 Activity: Classes and Objects

/*Task 1: Library Book Management System (Classes and Objects)
A library wants to develop a simple C++ system to manage book records and track borrowing
status using object-oriented programming. Write a C++ program that performs the following
tasks:
i) Create a class named Book with the following attributes:
      • Book title • Author • Number of copies available
ii) Include member functions to:
      • inputDetails() → to input book details
      • borrowBook() → to reduce the number of available copies when a book is borrowed
      • displayDetails() → to display book information
iii) In the main function, create an object of the class and demonstrate:
       • Input of book details • Borrowing a book • Displaying updated book details
 */

#include <iostream>
using namespace std;

class  Book
 {
   public:
     string Book_Title, Author;
     int Number_of_Copies;

   void inputDetails()
    {
       cout << "Enter Book Title, Author, Copies: " <<endl;
       getline(cin,Book_Title);
       getline(cin,Author);
       cin >>Number_of_Copies ;
    };

   void borrowBook()
   {
    if (Number_of_Copies>0)
     { cout << "\n Book borrowed successfully"<<endl;
        int copies_after_borrowing = Number_of_Copies-1;
       cout <<"\n \t Copies after Borrowing: " <<copies_after_borrowing;
     }
    else
     {  cout << "\n Book not available for borrowing" <<endl; }
   };

   void displayDetails()
   {
    cout << "\n You Entered \n";
    cout <<"\t Book_Title: " << Book_Title<<endl;
    cout <<"\t Author: " << Author <<endl;
    cout <<"\t Number_of_Copies: " << Number_of_Copies<<endl;
   }

 };

int main()
 {
  Book Book1;
 cout <<"\n\t LIBRARY BOOK MANAGEMENT SYSTEM\n";

 Book1.inputDetails();
 Book1.displayDetails();
 Book1.borrowBook();


  return 0;
 }