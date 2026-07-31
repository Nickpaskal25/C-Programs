//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 13 Activity: C++ Files

/*
2. A university stores student examination results in a binary file named results.dat. Each
record contains a student’s name, registration number, and total marks. Write a C++
program that:
i. Defines a structure to hold the student information.
ii. Reads all student records from the binary file.
iii. Displays the name and marks of each student on the screen.
 */
#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

// Requirement i: Define a structure with fixed sizes for binary compatibility
struct Student {
    char name[50];
    char regNumber[20];
    double totalMarks;
};

int main() {
    // Open the binary file for input (reading)
    ifstream inFile("results.dat", ios::binary);

    // Check if file opened successfully
    if (!inFile.is_open()) {
        cerr << "Error: Could not open results.dat" << endl;
        return 1;
    }

    Student tempStudent;

    cout << left << setw(30) << "Student Name"
         << setw(15) << "Marks" << endl;
    cout << string(45, '-') << endl;

    // Requirement ii & iii: Read binary records sequentially until EOF and display details
    while (inFile.read(reinterpret_cast<char*>(&tempStudent), sizeof(Student))) {
        cout << left << setw(30) << tempStudent.name
             << setw(15) << tempStudent.totalMarks << endl;
    }

    inFile.close();
    return 0;
}