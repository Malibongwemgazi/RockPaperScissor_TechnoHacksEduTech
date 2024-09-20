#include<iostream>
#include<ctime>
#include<cctype>
using namespace std;

int main() {
    int userChoice;
    int computerChoice;
    int numberOfWins = 0;
    int numberOfLosses = 0;
    int numberOfTies = 0;

    srand(time(0)); // Seed the random number generator

    while (true) {
        cout << "Welcome to Rock, Paper, Scissors!\n";
        cout << "Enter your choice (1 for Rock, 2 for Paper, 3 for Scissors, 4 to quit): ";
        cin >> userChoice;

        if (userChoice == 4) {
            break; // Quit the game
        }

        // Generate the computer's choice
        computerChoice = rand() % 3 + 1;

        // Determine the winner
        if (userChoice == computerChoice) {
            cout << "It's a tie!\n";
            numberOfTies++;
        } else if ((userChoice == 1 && computerChoice == 3) ||
                   (userChoice == 2 && computerChoice == 1) ||
                   (userChoice == 3 && computerChoice == 2)) {
            cout << "You win!\n";
            numberOfWins++;
        } else {
            cout << "Computer wins!\n";
            numberOfLosses++;
        }

        // Display the score
        cout << "Score: You - " << numberOfWins << ", Computer - " << numberOfLosses << ", Ties - " << numberOfTies << "\n";
    }

    return 0;
}
