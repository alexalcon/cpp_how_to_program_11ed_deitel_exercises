/**
 * File: exercise_5_35_v1_0_0.cpp
 * Author: Alex Alcón
 * GitHub: https://github.com/alexalcon
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Description: ✰ (Craps Game Modification) Modify the craps program of Fig. 5.5 
 *                 to allow wagering. Package as a function the portion of the 
 *                 program that runs one game of craps. Initialize variable 
 *                 bankBalance to 1000. Prompt the player to enter a wager. Use a 
 *                 while loop to check that wager is ≤ bankBalance; if not, prompt 
 *                 the user repeatedly until a valid wager is entered.
 *
 *                 After a valid wager is entered, run one game of craps. If the 
 *                 player wins, increase bankBalance by wager and print the new 
 *                 bankBalance. If the player loses, decrease bankBalance by wager 
 *                 and print the new bankBalance. Check whether bankBalance becomes 
 *                 zero, and if so, print "Sorry. You busted!".
 *
 *                 As the game progresses, print various “chatter” messages such as:
 *                      "Oh, you're going for broke, huh?", 
 *                      "Aw c’mon, take a chance!", 
 *                      "You're up big. Now's the time to cash in your chips!".
 * ━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━━
 * Created on: 02-12-2025
 */

#include <format>
#include <iostream>
#include <random>

using namespace std;

// scoped enumeration with constants that represent the game status
enum class Status {keepRolling, won,lost};

// function prototypes
bool playCrapsGame();                           // plays one game of craps; returns true if player wins
int rollDice();                                 // rolls dice, calculates and displays sum
void printChatter(int bank_balance, int wager); // prints “chatter” messages based on the situation

int main() {
    int bank_balance{1000};
    
    cout << format("Welcome to the craps table! Your starting bank balance is: ${}\n\n",
                   bank_balance);
    
    // play while the player still has money
    while (bank_balance > 0) {
        cout << format("Current bank balance: ${}\n", bank_balance);
        cout << "Enter your wager (must be between 1 and your current bank balance): ";
        
        int wager{};
        cin >> wager;
        
        // validate wager with a while loop
        while (wager <= 0 || wager > bank_balance) {
           	cout << format("Invalid wager. Your bank balance is ${}.\n", bank_balance);
           	cout << "Please enter a wager between 1 and your current bank balance: ";
           	cin >> wager;
        }
       
        // print chatter before the game based on wager and bank balance
        printChatter(bank_balance, wager);
       
        // play one game of craps
        const bool player_won{playCrapsGame()};
       
        if (player_won) {
           	bank_balance += wager;
           	cout << format("You won ${}! ", wager);
        }
        else {
           	bank_balance -= wager;
           	cout << format("You lost ${}. ", wager);
        }
       
        cout << format("New bank balance: ${}\n\n", bank_balance);
       
        if (bank_balance == 0) {
           	cout << "Sorry. You busted!\n";
        }
    }
}

// plays one game of craps; returns true if the player wins, false otherwise
bool playCrapsGame() {
   	int my_point{0};                               // point if no win or loss on first roll
   	Status game_status{Status::keepRolling};       // game is not over
	
   	// determine game status and point (if needed) based on first roll
   	switch (const int sum_of_dice{rollDice()}) {
   	   	case 7:   // win with 7 on first roll
   	   	case 11:  // win with 11 on first roll
   	   	   	game_status = Status::won;
   	   	   	break;
   	   	case 2:   // lose with 2 on first roll
   	   	case 3:   // lose with 3 on first roll
   	   	case 12:  // lose with 12 on first roll
   	   	   	game_status = Status::lost;
   	   	   	break;
   	   	default:  // did not win or lose, so remember point
   	   	   	my_point = sum_of_dice; // remember the point
   	   	   	cout << format("Point is {}\n", my_point);
   	   	   	break;
   	}
   
   	// while game is not complete
   	while (Status::keepRolling == game_status) { // not won or lost
   	   	// roll dice again and determine game status
   	   	if (const int sum_of_dice{rollDice()}; sum_of_dice == my_point) {
   	   	   	game_status = Status::won;
   	   	}
   	   	else if (sum_of_dice == 7) { // lose by rolling 7 before point
   	   	   	game_status = Status::lost;
   	   	}
   	}
   
   	// display won or lost message
   	if (Status::won == game_status) {
   	   	cout << "Player wins the game of craps.\n";
   	   	return true;
   	}
   	else {
   	   	cout << "Player loses the game of craps.\n";
   	   	return false;
   	}
}

// roll dice, calculate sum and display results
int rollDice() {
   	// set up random-number generation
   	static random_device rd;                    // used to seed the default_random_engine
   	static default_random_engine engine{rd()};  // rd() produces a seed
   	static uniform_int_distribution random_die{1, 6};

   	const int die_1{random_die(engine)}; // first die roll
   	const int die_2{random_die(engine)}; // second die roll
   	const int sum{die_1 + die_2};        // compute sum of die values

   	// display results of this roll
   	cout << format("Player rolled {} + {} = {}\n", die_1, die_2, sum);

   	return sum;
}

// print “chatter” messages depending on wager and bank balance
void printChatter(int bank_balance, int wager) {
   	if (wager > bank_balance / 2) {
   	   cout << "Oh, you're going for broke, huh?\n";
   	}
   	else if (bank_balance > 1500) {
   	   cout << "You're up big. Now's the time to cash in your chips!\n";
   	}
   	else {
   	   cout << "Aw c'mon, take a chance!\n";
   	}
}