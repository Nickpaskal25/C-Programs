//Name : Nicholas Otieno
//ADM : BCS-05-0045/2025
//Week 5 Activity: Arrays

/*
Hotel Management System Using Arrays
A hotel chain wants to develop a simple system to monitor revenue and room occupancy.
Write a C++ program that performs the following tasks:

1D Array – Weekly Revenue Tracker
The hotel records its total revenue for each day of the week (7 days).
1. Use a 1D array revenue[7] to store the daily revenues.
2. Input the revenue for each day.
3. Calculate and display:
• The total weekly revenue.
• The average daily revenue.

2D Array – Room Occupancy (One Branch)
Each branch has 5 floors, and each floor has 10 rooms.
1. Use a 2D array occupancy[5][10] where each element represents a room (1 =
occupied, 0 = vacant).
2. Input random occupancy data (or simulate input).
3. Display the number of occupied and vacant rooms per floor.

3D Array – Multiple Branches
The hotel chain has 3 branches, each with 5 floors and 10 rooms per floor.
1. Use a 3D array chain[3][5][10] to represent all branches.
2. Assign random occupancy (1 or 0) to each room.
3. Calculate and display the total number of occupied rooms across all branches
*/
#include <iostream>

int main() {
    // Part 1: 1D Array - Daily Revenue
    std::cout << "--- PART 1: 1D ARRAY (Daily Revenue) ---\n";

    // Manual initialization for 7 days
    double revenue[7] = {1200.50, 1450.00, 980.75, 1100.00, 1650.25, 2100.00, 1850.50};
    double totalRevenue = 0.0;

    for (int i = 0; i < 7; i++) {
        totalRevenue += revenue[i];
    }
    double averageRevenue = totalRevenue / 7;

    std::cout << "Total Weekly Revenue: $" << totalRevenue << "\n";
    std::cout << "Average Daily Revenue: $" << averageRevenue << "\n\n";

    // Part 2: 2D Array - Room Occupancy (One Branch)
    std::cout << "--- PART 2: 2D ARRAY (Floor Occupancy) ---\n";

    // Manual 5x10 initialization (5 floors, 10 rooms each)
    int occupancy[5][10] = {
        {1, 0, 1, 1, 0, 0, 1, 0, 1, 1}, // Floor 0
        {0, 0, 1, 0, 1, 1, 0, 0, 0, 1}, // Floor 1
        {1, 1, 1, 1, 1, 0, 0, 1, 0, 0}, // Floor 2
        {0, 1, 0, 1, 0, 1, 0, 1, 0, 1}, // Floor 3
        {1, 0, 0, 0, 1, 1, 1, 1, 1, 1}  // Floor 4
    };

    for (int floor = 0; floor < 5; floor++) {
        int occupiedCount = 0;
        int vacantCount = 0;

        for (int room = 0; room < 10; room++) {
            if (occupancy[floor][room] == 1) {
                occupiedCount++;
            } else {
                vacantCount++;
            }
        }
        std::cout << "Floor " << floor + 1 << " -> Occupied: " << occupiedCount
                  << " | Vacant: " << vacantCount << "\n";
    }
    std::cout << "\n";

    // Part 3: 3D Array - Multiple Branches
    std::cout << "--- PART 3: 3D ARRAY (Hotel Chain) ---\n";

    // Manual 3x5x10 initialization (3 branches, 5 floors, 10 rooms)
    int chain[3][5][10] = {
        // Branch 0
        {
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 1, 1, 1, 1, 0, 0, 0, 0, 0},
            {0, 0, 1, 1, 0, 0, 1, 1, 0, 0},
            {1, 1, 0, 0, 1, 1, 0, 0, 1, 1},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
        },
        // Branch 1
        {
            {0, 0, 0, 0, 0, 1, 1, 1, 1, 1},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {1, 1, 0, 0, 0, 0, 1, 1, 1, 1},
            {0, 1, 0, 1, 0, 1, 0, 1, 0, 1},
            {0, 0, 1, 1, 1, 1, 0, 0, 0, 0}
        },
        // Branch 2
        {
            {1, 1, 1, 0, 0, 0, 1, 1, 1, 0},
            {0, 0, 1, 1, 1, 0, 0, 1, 1, 1},
            {1, 0, 1, 0, 1, 0, 1, 0, 1, 0},
            {0, 0, 0, 0, 0, 0, 0, 0, 0, 0},
            {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}
        }
    };

    int totalChainOccupied = 0;

    for (int branch = 0; branch < 3; branch++) {
        for (int floor = 0; floor < 5; floor++) {
            for (int room = 0; room < 10; room++) {
                if (chain[branch][floor][room] == 1) {
                    totalChainOccupied++;
                }
            }
        }
    }

    std::cout << "Total occupied rooms across all 3 branches: " << totalChainOccupied << "\n";

    return 0;
}