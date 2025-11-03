/**
 * File: exercise_5_7_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Random Numbers) Write statements that print a number at random from each of the 
 *                 following sets:
 *                      
 *                      a) 2, 4, 6, 8, 10
 *                      b) 3, 5, 7, 9, 11
 *                      c) 6, 10, 14, 18, 22
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 03-11-2025
 */
 
#include <iostream>
#include <random>
#include <format>

using namespace std;

int randomFromSet(int base, int step);

int main() {
    int n{}; // random integer variable

    // a) 2, 4, 6, 8, 10
    // generating 10 random numbers from set {2, 4, 6, 8, 10}
    cout << format("a) Random integers from set {{2, 4, 6, 8, 10}}: {:>5}", "");
    for (int i{0} ; i < 10 ; ++i) {
        n = randomFromSet(2, 2);
        cout << format("{} ", n);
    }
    cout << "\n";
    
    // b) 3, 5, 7, 9, 11
    // generating 10 random numbers from set {3, 5, 7, 9, 11}
    cout << format("b) Random integers from set {{3, 5, 7, 9, 11}}: {:>5}", "");
    for (int i{0} ; i < 10 ; ++i) {
        n = randomFromSet(3, 2);
        cout << format("{} ", n);
    }
    cout << "\n";
    
    // c) 6, 10, 14, 18, 22
    // generating 10 random numbers from set {6, 10, 14, 18, 22}
    cout << "c) Random integers from set {{6, 10, 14, 18, 22}}: ";
    for (int i{0} ; i < 10 ; ++i) {
        n = randomFromSet(6, 4);
        cout << format("{} ", n);
    }
    cout << "\n";

    return 0;
}

int randomFromSet(int base, int step) {
    // set up random-number generation
    static random_device rd; // random device used to seed the generator
    static default_random_engine engine{rd()}; // default random engine seeded with rd()
    static uniform_int_distribution random_integer{0, 4}; // uniform integer distribution

    // arithmetic pattern: term = base + (index * step)
    return (base + ( (random_integer(engine)) * step ));
}