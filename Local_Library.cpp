//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 13 Activity: C++ Files

/*
1. A local library wants to keep track of the titles of books borrowed each day. Write a C++
program that allows the librarian to enter book titles and store each title in a text file
named borrowed_books.txt.
i. The program should not delete existing records when a new title is added.
ii. Display a confirmation message once the title is successfully stored.
*/
#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {
    ofstream txt("borrowed_books.txt", ios::app);

    if (!txt.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    string bookTitle;
    cout << "Enter the book title to add: ";
    getline(cin, bookTitle);

    if (!bookTitle.empty()) {
        txt << bookTitle << endl;
        cout << "\"" << bookTitle << "\" has been successfully stored " << endl;
    } else {
        cout << "No title entered. Nothing was saved." << endl;
    }

    txt.close();
    return 0;
}