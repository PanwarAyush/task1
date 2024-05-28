#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    srand(time(0));
    int randomNumber = rand() % 100 + 1;
    int guess;
    bool guessedCorrectly = false;
    cout << "I'm thinking of a number between 1 and 100. Can you guess it?" << endl;
    while (!guessedCorrectly) {
        cout << "Enter your guess: ";
        cin >> guess;
        if (guess == randomNumber) {
            cout << "Congratulations! You guessed the number!" << endl;
            guessedCorrectly = true;
        } else if (guess < randomNumber) {
            cout << "Too low. Try again!" << endl;
        } else {
            cout << "Too high. Try again!" << endl;
        }
    }
    return 0;
}
