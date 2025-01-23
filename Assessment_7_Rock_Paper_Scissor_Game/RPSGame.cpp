#include <iostream> // For input and output
#include <cstdlib>  // For srand and rand
#include <ctime>    // For time
using namespace std;

// Function to display the menu and play the game
void playRockPaperScissors() {
    // Variables to store player name, choice, computer choice, scores, and replay decision
    string playerName;
    int playerChoice, computerChoice, totalRounds, currentRound;
    int playerScore = 0, computerScore = 0;

    // Accept the player's name
    cout << "Enter your name: ";
    cin >> playerName;

    do {
        // Reset scores for a new game
        playerScore = 0;
        computerScore = 0;

        // Accept the number of rounds to play
        cout << "\nHello, " << playerName << "! How many rounds do you want to play? ";
        cin >> totalRounds;

        // Validate the number of rounds
        if (totalRounds <= 0) {
            cout << "Invalid number of rounds. Please enter a positive number.\n";
            continue;
        }

        for (currentRound = 1; currentRound <= totalRounds; ++currentRound) {
            // Display the round number
            cout << "\nRound " << currentRound << "/" << totalRounds << "\n";

            // Display the menu
            cout << "1. Rock\n2. Paper\n3. Scissors\n";
            cout << "Enter your choice (1-3): ";

            // Get the player's choice
            cin >> playerChoice;

            // Validate player input
            if (playerChoice < 1 || playerChoice > 3) {
                cout << "Invalid choice. Please choose 1, 2, or 3.\n";
                --currentRound; // Repeat the round
                continue;
            }

            // Generate computer's choice
            srand(time(0) + currentRound); // Seed the random number generator with a unique seed
            computerChoice = (rand() % 3) + 1;

            // Display choices
            cout << "You chose: " << (playerChoice == 1 ? "Rock" : playerChoice == 2 ? "Paper" : "Scissors") << "\n";
            cout << "Computer chose: " << (computerChoice == 1 ? "Rock" : computerChoice == 2 ? "Paper" : "Scissors") << "\n";

            // Determine the winner
            if (playerChoice == computerChoice) {
                cout << "It's a tie!\n";
            } else if ((playerChoice == 1 && computerChoice == 3) || // Rock beats Scissors
                       (playerChoice == 2 && computerChoice == 1) || // Paper beats Rock
                       (playerChoice == 3 && computerChoice == 2)) { // Scissors beats Paper
                cout << "You win this round!\n";
                ++playerScore;
            } else {
                cout << "Computer wins this round!\n";
                ++computerScore;
            }

            // Display current scores
            cout << "Player's Score: " << playerScore << "\n";
            cout << "Computer's Score: " << computerScore << "\n";
        }

        // Display final results
        cout << "\nGame Over!\n";
        cout << "Final Scores:\n";
        cout << "Player's Score: " << playerScore << "\n";
        cout << "Computer's Score: " << computerScore << "\n";

        if (playerScore > computerScore) {
            cout << "Congratulations, " << playerName << "! You win the game!\n";
        } else if (playerScore < computerScore) {
            cout << "Computer wins the game! Better luck next time, " << playerName << "!\n";
        } else {
            cout << "It's a tie game! Well played, " << playerName << "!\n";
        }

        // Ask if the player wants to play again
        char playAgain;
        cout << "\nDo you want to play again, " << playerName << "? (y/n): ";
        cin >> playAgain;

        if (playAgain != 'y' && playAgain != 'Y') {
            cout << "Thank you for playing Rock-Paper-Scissors, " << playerName << "! Goodbye!\n";
            break;
        }

    } while (true);
}

// Main function
int main() {
    // Invoke the game function through an object
    playRockPaperScissors();
    return 0;
}