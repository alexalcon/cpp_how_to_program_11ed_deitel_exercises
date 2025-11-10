/**
 * File: exercise_5_13_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Calculating Number of Seconds) Write a function that takes the time as three 
 *                 integer arguments (hours, minutes, and seconds) and returns the number of seconds 
 *                 since the last time the clock "struck 12." Use this function to calculate the 
 *                 amount of time in seconds between two times, both of which are within one 
 *                 12-hour cycle of the clock.
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 10-11-2025
 */

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

// function prototypes
int secondsSince12(int hours, int minutes, int seconds);
int timeDifference(int hours1, int minutes1, int seconds1, 
                   int hours2, int minutes2, int seconds2);
void displayTime(int hours, int minutes, int seconds);
bool validateTime(int hours, int minutes, int seconds);

int main() {
    cout << "Time Calculator - 12-Hour Clock System\n";
    cout << "======================================\n\n";
    
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
    // test cases with predefined times
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━

    cout << "Test Cases:\n";
    cout << "-----------\n\n";
    
    // test case 1: time right after noon
    cout << "Test 1: 12:30:45 PM\n";
    int seconds1 = secondsSince12(12, 30, 45);
    cout << "Seconds since 12:00:00 = " << seconds1 << " seconds\n";
    cout << "Verification: 30*60 + 45 = " << 30*60 + 45 << " seconds\n\n";
    
    // test case 2: late morning
    cout << "Test 2: 11:45:30 AM\n";
    int seconds2 = secondsSince12(11, 45, 30);
    cout << "Seconds since 12:00:00 = " << seconds2 << " seconds\n";
    cout << "Verification: 11*3600 + 45*60 + 30 = " << 11*3600 + 45*60 + 30 << " seconds\n\n";
    
    // test case 3: early morning
    cout << "Test 3: 3:15:20 AM\n";
    int seconds3 = secondsSince12(3, 15, 20);
    cout << "Seconds since 12:00:00 = " << seconds3 << " seconds\n";
    cout << "Verification: 3*3600 + 15*60 + 20 = " << 3*3600 + 15*60 + 20 << " seconds\n\n";
    
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━
    // calculate time differences
    // ━━━━━━━━━━━━━━━━━━━━━━━━━━

    cout << "\nTime Differences:\n";
    cout << "-----------------\n\n";
    
    cout << "Between 3:15:20 and 5:30:10:\n";
    int diff1 = timeDifference(3, 15, 20, 5, 30, 10);
    cout << "Time difference = " << diff1 << " seconds\n";
    cout << "Which is " << diff1/3600 << " hours, " 
         << (diff1%3600)/60 << " minutes, " 
         << diff1%60 << " seconds\n\n";
    
    cout << "Between 11:45:30 and 12:30:45:\n";
    int diff2 = timeDifference(11, 45, 30, 12, 30, 45);
    cout << "Time difference = " << diff2 << " seconds\n";
    cout << "Which is " << diff2/3600 << " hours, " 
         << (diff2%3600)/60 << " minutes, " 
         << diff2%60 << " seconds\n\n";
    
    // ━━━━━━━━━━━━━━━━━━━
    // interactive section
    // ━━━━━━━━━━━━━━━━━━━
    
    cout << "\nInteractive Mode:\n";
    cout << "-----------------\n";
    cout << "Enter times in 12-hour format (use hours 1-12)\n\n";
    
    int h1, m1, s1, h2, m2, s2;
    
    cout << "Enter first time:\n";
    cout << "Hours (1-12): ";
    cin >> h1;
    cout << "Minutes (0-59): ";
    cin >> m1;
    cout << "Seconds (0-59): ";
    cin >> s1;
    
    if (!validateTime(h1, m1, s1)) {
        cout << "Invalid time entered!\n";
        return 1;
    }
    
    cout << "\nEnter second time:\n";
    cout << "Hours (1-12): ";
    cin >> h2;
    cout << "Minutes (0-59): ";
    cin >> m2;
    cout << "Seconds (0-59): ";
    cin >> s2;
    
    if (!validateTime(h2, m2, s2)) {
        cout << "Invalid time entered!\n";
        return 1;
    }
    
    cout << "\nResults:\n";
    cout << "--------\n";
    
    cout << "First time: ";
    displayTime(h1, m1, s1);
    cout << "\nSeconds since 12:00:00 = " << secondsSince12(h1, m1, s1) << "\n\n";
    
    cout << "Second time: ";
    displayTime(h2, m2, s2);
    cout << "\nSeconds since 12:00:00 = " << secondsSince12(h2, m2, s2) << "\n\n";
    
    int difference = timeDifference(h1, m1, s1, h2, m2, s2);
    cout << "Time difference = " << difference << " seconds\n";
    cout << "Which is " << difference/3600 << " hours, " 
         << (difference%3600)/60 << " minutes, " 
         << difference%60 << " seconds\n";
    
    return 0;
}

// calculate seconds since the clock struck 12 (noon or midnight)
int secondsSince12(int hours, int minutes, int seconds) {
    // convert 12-hour format to 0-based for calculation
    // 12:00:00 becomes 0, 1:00:00 stays 1, etc.
    int adjustedHours = (hours == 12) ? 0 : hours;
    
    // calculate total seconds
    return adjustedHours * 3600 + minutes * 60 + seconds;
}

// calculate time difference between two times in seconds
int timeDifference(int hours1, int minutes1, int seconds1,
                   int hours2, int minutes2, int seconds2) {
    int time1 = secondsSince12(hours1, minutes1, seconds1);
    int time2 = secondsSince12(hours2, minutes2, seconds2);
    
    // return absolute difference
    return abs(time2 - time1);
}

// display time in formatted way
void displayTime(int hours, int minutes, int seconds) {
    cout << setfill('0') << setw(2) << hours << ":"
         << setw(2) << minutes << ":"
         << setw(2) << seconds;
}

// validate time input
bool validateTime(int hours, int minutes, int seconds) {
    return (hours >= 1 && hours <= 12) &&
           (minutes >= 0 && minutes <= 59) &&
           (seconds >= 0 && seconds <= 59);
}