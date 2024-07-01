#include <iostream>
#include <cstdlib>
#include <ctime>

void guessTheNumber() 
{
    std::srand(std::time(0)); 
    int numberToGuess = std::rand() % 100 + 1; 
    int userGuess = 0;
    
    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I have selected a number between 1 and 100. Try to guess it!" << std::endl;
    
    while (userGuess != numberToGuess) {
        std::cout << "Enter your guess: ";
        std::cin >> userGuess;
        
        if (userGuess < numberToGuess) {
            std::cout << "Too low! Try again." << std::endl;
        } else if (userGuess > numberToGuess) {
            std::cout << "Too high! Try again." << std::endl;
        } else {
            std::cout << "Congratulations! You guessed the number!" << std::endl;
        }
    }
}

int main() {
    guessTheNumber();
    return 0;
}

