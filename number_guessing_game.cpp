#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;


int main() {
    std::srand(std::time(0));

    int secretNumber = std::rand() % 100 + 1;
    int guess;
    int attempts = 0;

    cout << "Welcome to the Guess the Number game!" << endl;

    while (true) {
        cout << "Guess the secret number (between 1 and 100): ";
        cin >> guess;
        attempts++;

        if (guess == secretNumber) {
            cout << "Congratulations! You guessed the secret number " << secretNumber
                << " in " << attempts << " attempts." << std::endl;
            break;
        } else if (guess < secretNumber) {
            cout << "Too low! Try again." << endl;
        } else {
            cout << "Too high! Try again." << endl;
        }
    }

    return 0;
}

