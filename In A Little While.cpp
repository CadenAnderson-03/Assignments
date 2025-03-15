#include <iostream>

#include <cstdlib> 

#include <ctime>   

int main() {
    // Part 1: Number Guessing Game
    std::srand(std::time(0)); // Seed random number generator
    int secretNumber = std::rand() % 10 + 1; // Generate random number between 1 and 10
    int userGuess;

    std::cout << "Guess the number (between 1 and 10): ";
    
    while (true) {
        std::cin >> userGuess;
        
        if (userGuess < secretNumber) {
            std::cout << "Too low. Try again: ";
        } else if (userGuess > secretNumber) {
            std::cout << "Too high. Try again: ";
        } else {
            std::cout << "Correct! The number was " << secretNumber << ".\n\n";
            break;
        }
    }

    // Part 2: Password Check
    std::string correctPassword = "C++Rocks"; // Set your secret password
    std::string userPassword;

    std::cout << "Enter the secret password: ";
    
    while (true) {
        std::cin >> userPassword;
        
        if (userPassword == correctPassword) {
            std::cout << "Access Granted!\n";
            break;
        } else {
            std::cout << "Incorrect. Try again: ";
        }
    }

    return 0;
}