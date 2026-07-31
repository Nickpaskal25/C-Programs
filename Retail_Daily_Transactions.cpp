//
//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 13 Activity: C++ Files

/*
3. A small retail shop stores daily sales transactions in a file named sales.txt. Each line
contains the amount of a single transaction. Write a C program that:
i. Reads all transactions from the file.
ii. Calculates and displays the total sales for the day.
iii. Ensures the file is properly closed after reading
 */
#include <iostream>
#include <fstream>

using namespace std;

int main() {
    // Open sales.txt for reading
    ifstream inFile("sales.txt");

    // Verify the file exists and opened successfully
    if (!inFile.is_open()) {
        cerr << "Error: Could not open sales.txt. Make sure the file exists." << endl;
        return 1;
    }

    double transaction = 0.0;
    double totalSales = 0.0;
    int count = 0;

    // Read amounts line by line until reaching the end of the file
    while (inFile >> transaction) {
        totalSales += transaction;
        count++;
    }

    // Explicitly close the file (requirement iii)
    inFile.close();

    // Display the calculated results
    cout << "--- Daily Sales Summary ---" << endl;
    cout << "Total Transactions Read: " << count << endl;
    cout << "Total Sales Amount: $" << totalSales << endl;

    return 0;
}