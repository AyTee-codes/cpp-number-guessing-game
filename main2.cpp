
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    srand(time(0));

    char playAgain;

    do {
        int num, guess, tries = 0;
        int maxRange, maxTries;
        int choice;

        // Difficulty selection
        cout << "\n========= SELECT DIFFICULTY =========\n";
        cout << "1. Easy   (1-50)   [10 Attempts]\n";
        cout << "2. Medium (1-100)  [7 Attempts]\n";
        cout << "3. Hard   (1-200)  [5 Attempts]\n";

        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                maxRange = 50;
                maxTries = 10;
                break;

            case 2:
                maxRange = 100;
                maxTries = 7;
                break;

            case 3:
                maxRange = 200;
                maxTries = 5;
                break;

            default:
                cout << "Invalid choice! Starting with Easy mode.\n";
                maxRange = 50;
                maxTries = 10;
                
        }

        // Generate random number
        num = rand() % maxRange + 1;

        cout << "\n========= NUMBER GUESSING GAME =========\n";
        cout << "Guess a number between 1 and " << maxRange << ".\n";

        // Guessing loop
        while (tries < maxTries) {
            cout << "\nEnter your guess: ";
            cin >> guess;

            // Input validation
            if (guess < 1 || guess > maxRange) {
                cout << "Invalid input! Enter between 1 and "
                     << maxRange << ".\n";
                continue;
            }

            tries++;

            if (guess > num) {
                cout << "Too high! Try again.\n";
            }
            else if (guess < num) {
                cout << "Too low! Try again.\n";
            }
            else {
                cout << "\nCorrect! You guessed the number in "
                     << tries << " attempts.\n";
                break;
            }
        }

        // Win or lose result
        if (guess != num) {
            cout << "\nGame over! The correct number was "
                 << num << ".\n";
        }

        // Replay option
        cout << "\nDo you want to play again? (Y/N): ";
        cin >> playAgain;

    } while (playAgain == 'Y' || playAgain == 'y');

    cout << "\n=========== THANKS FOR PLAYING ===========\n";

    return 0;
}
