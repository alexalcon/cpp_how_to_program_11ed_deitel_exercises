/**
 * File: exercise_5_26_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Towers of Hanoi) Write a program to solve the Towers of Hanoi problem. Use a 
 *                 recursive function with four parameters:
 * 
 *                      a) The number of disks to be moved
 *                      b) The peg on which these disks are initially threaded
 *                      c) The peg to which this stack of disks is to be moved
 *                      d) The peg to be used as a temporary holding area
 * 
 *                 Display the precise instructions for moving the disks from the starting peg to 
 *                 the destination peg. To move a stack of three disks from peg 1 to peg 3, the 
 *                 program displays the following moves:
 * 
 *                      1 → 3   (This means move one disk from peg 1 to peg 3.)
 *                      1 → 2
 *                      3 → 2
 *                      1 → 3
 *                      2 → 1
 *                      2 → 3
 *                      1 → 3
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 17-11-2025
 */

#include <iostream>
#include <format>

using namespace std;

// function prototypes
void towersOfHanoi(int numberOfDisks, int sourcePeg, int destinationPeg, int auxiliaryPeg);
void testTowersOfHanoi();

int main() {
    cout << "==============================================\n";
    cout << "         TOWERS OF HANOI SOLUTION            \n";
    cout << "==============================================\n\n";

    // run test demonstrations
    testTowersOfHanoi();

    return 0;
}

/**
 * Solves the Towers of Hanoi problem recursively.
 * 
 * @param numberOfDisks The number of disks to be moved
 * @param sourcePeg The peg on which these disks are initially threaded
 * @param destinationPeg The peg to which this stack of disks is to be moved
 * @param auxiliaryPeg The peg to be used as a temporary holding area
 * 
 * Algorithm:
 *      - Base case: If only 1 disk, move it directly from source to destination
 *      - Recursive case for n disks:
 *              1. Move n-1 disks from source to auxiliary (using destination as temp)
 *              2. Move the largest disk from source to destination
 *              3. Move n-1 disks from auxiliary to destination (using source as temp)
 */
void towersOfHanoi(int numberOfDisks, int sourcePeg, int destinationPeg, int auxiliaryPeg) {
    // base case: only one disk to move
    if (numberOfDisks == 1) {
        cout << format("{} --> {}\n", sourcePeg, destinationPeg);
        return;
    }
    
    // recursive case: move n disks
    // algorithm main logic
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    // step 1: move n-1 disks from source to auxiliary peg
    // (using destination peg as temporary holding area)
    towersOfHanoi(numberOfDisks - 1, sourcePeg, auxiliaryPeg, destinationPeg);
    
    // step 2: move the largest disk from source to destination
    cout << format("{} --> {}\n", sourcePeg, destinationPeg);
    
    // step 3: move n-1 disks from auxiliary to destination peg
    // (using source peg as temporary holding area)
    towersOfHanoi(numberOfDisks - 1, auxiliaryPeg, destinationPeg, sourcePeg);
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
}

/**
 * test function demonstrating the Towers of Hanoi solution
 * with different numbers of disks
 */
void testTowersOfHanoi() {
    // test with 3 disks (as shown in the problem statement)
    cout << "Solution for 3 disks (moving from peg 1 to peg 3):\n";
    cout << "--------------------------------------------------\n";
    towersOfHanoi(3, 1, 3, 2);
    
    cout << "\n";
    
    // test with 4 disks (as shown in the diagram)
    cout << "Solution for 4 disks (moving from peg 1 to peg 3):\n";
    cout << "--------------------------------------------------\n";
    towersOfHanoi(4, 1, 3, 2);
    
    cout << "\n";
    
    // interactive mode
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    cout << "Interactive Mode:\n";
    cout << "-------------------------------------------\n";
    
    int disks;
    cout << "Enter the number of disks (1-10 recommended): ";
    cin >> disks;
    
    // input validation
    while (disks < 1 || disks > 20) {
        cout << "Please enter a number between 1 and 20: ";
        cin >> disks;
    }
   
    cout << format("\nSolution for {} disk{} (moving from peg 1 to peg 3):\n", 
                   disks, (disks == 1 ? "" : "s"));
    cout << "-------------------------------------------\n";
    towersOfHanoi(disks, 1, 3, 2);
    
    // calculate and display the total number of moves
    int totalMoves = (1 << disks) - 1; // 2^n - 1
    cout << format("\nTotal number of moves: {}\n", totalMoves);
    
    // fun fact about the 64-disk problem
    if (disks <= 10) {
        cout << "===============================================================\n";
        cout << "Fun Fact:\n";
        cout << "The original problem involves 64 disks.\n";
        cout << "This would require 2^64 - 1 = 18,446,744,073,709,551,615 moves!\n";
        cout << "At one move per second, it would take about 585 billion years.\n";
        cout << "===============================================================\n";
    }
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
}