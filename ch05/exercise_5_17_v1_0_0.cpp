/**
 * File: exercise_5_17_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Prime Numbers) An integer is said to be prime if it’s divisible by only 1 and 
 *                 itself. For example, 2, 3, 5, and 7 are prime, but 4, 6, 8, and 9 are not.
 * 
 *                      a) Write a function that determines whether a number is prime.
 *                      b) Use this function in a program that determines and prints all the prime 
 *                         numbers between 2 and 10,000. How many of these numbers do you have to
 *                         test before being sure you’ve found all the primes?
 *                      c) Initially, you might think that n/2 is the upper limit for which you 
 *                         must test to see whether a number is prime, but you need only go as high
 *                         as the square root of n. Why? Rewrite the program, and run it both ways. 
 *                         Estimate the performance improvement.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 11-11-2025
 */

#include <iostream>
#include <format>
#include <cmath>
#include <chrono>

using namespace std;
using namespace std::chrono;

// function prototypes
bool isPrimeNaive(int number);           // tests divisors up to n/2
bool isPrimeOptimized(int number);       // tests divisors up to sqrt(n)
bool isPrimeBest(int number);            // optimized version with early checks
void demonstratePrimeChecking(int number);
void findAllPrimes(int limit, bool useOptimized = true);

int main() {
    cout << "Prime Number Analysis\n";
    cout << "=====================\n\n";
    
    // part (a): demonstrate prime checking function
    int number{0};
    demonstratePrimeChecking(number);
    
    // part (b): find all primes between 2 and 10,000
    cout << "-----------------------------------------------\n";
    cout << "Part B: Finding All Primes from 2 to 10,000\n";
    cout << "-----------------------------------------------\n\n";
    
    findAllPrimes(10000);
     
    return 0;
}

// function definitions
// see section 'Exercise 5.17' from ../INSIGHTS_ON_CHAPTER_SOLUTIONS.md
// for the mathematical theory backgoround required to understand why the upper
// limit must be sqrt(2) in the loop-continuation condition, defined in a 
// counter-controlled iteration, for the primality test in functions is 
// isPrimeOptimized() and isPrimeBest()
//──────────────────────────────────────────────────────────────────────────────────────────────
// naive implementation - checks divisors up to n/2
bool isPrimeNaive(int number) {
    if (number < 2) {
        return false;
    }
    
    // check divisibility up to n/2
    for (int divisor{2} ; divisor <= number / 2 ; ++divisor) {
        if (number % divisor == 0) {
            return false;
        }
    }
    
    return true;
}

// optimized implementation - checks divisors up to sqrt(n)
// 
bool isPrimeOptimized(int number) {
    if (number < 2) {
        return false;
    }
    
    // check divisibility up to sqrt(n)
    int limit = static_cast<int>(sqrt(number)); // truncate sqrt(number) to its 
                                                // integer part without rounding 
    for (int divisor{2} ; divisor <= limit ; ++divisor) {
        if (number % divisor == 0) {
            return false;
        }
    }

    return true;
}

// best implementation - with additional optimizations
bool isPrimeBest(int number) {
    if (number < 2) return false;
    if (number == 2) return true;       // 2 is prime
    if (number % 2 == 0) return false;  // even numbers > 2 are not prime
    
    // check only odd divisors from 3 to sqrt(n)
    int limit = static_cast<int>(sqrt(number));
    for (int divisor = 3 ; divisor <= limit ; divisor += 2) {
        if (number % divisor == 0) {
            return false;
        }
    }
    
    return true;
}

// demonstrate prime checking for individual numbers
void demonstratePrimeChecking(int number) {
    cout << "---------------------------------------------\n";
    cout << "Part A: Prime Checking Function Demonstration\n";
    cout << "---------------------------------------------\n\n";

    // input positive integer major to 1
    cout << "Enter a positive integer major or to 1: ";
    cin >> number;
    
    // display results
    cout << "\n------------------------------------------\n";
    cout << "isPrimeNaive(): " << number << (isPrimeNaive(number) ? " is prime.\n" 
                                                                  : " is not prime.\n");
    cout << "isPrimeOptimized(): " << number << (isPrimeOptimized(number) ? " is prime.\n" 
                                                                          : " is not prime.\n");
    cout << "isPrimeBest(): " << number << (isPrimeBest(number) ? " is prime.\n" 
                                                                : " is not prime.\n");
    cout << "------------------------------------------\n\n";
}

// find and display all prime numbers up to a limit
//      int limit: maximum limit for primality test
//      bool use_optimized: input to indicate which function 
//                          will be used: isPrimeBest() or isPrimeNaive()
//                              if true, use isPrimeBest() 
//                              if not, use isPrimeNaive() 
void findAllPrimes(int limit, bool use_optimized) {
    int tests_performed{0};     // counting of performed tests (i.e., numbers tested)
    int prime_numbers_count{0}; // counting of prime numbers

    auto start = high_resolution_clock::now();
    
    cout << "First primes beteween " << 2 << " and " << limit << "\n";
    cout << "-------------------------------------------------\n";
    for (int number = 2; number <= limit; ++number) {
        tests_performed++;
        if (use_optimized ? isPrimeBest(number) : isPrimeNaive(number)) {
            cout << number << " ";
            prime_numbers_count++;
        }
    }
    cout << "\n";
    
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    
    // display results
    cout << format("\nFound {} prime numbers between 2 and {}\n", prime_numbers_count, limit);
    cout << format("Numbers tested: {}\n", tests_performed);
    cout << format("Time taken: {} ms\n", duration.count());
}
//──────────────────────────────────────────────────────────────────────────────────────────────