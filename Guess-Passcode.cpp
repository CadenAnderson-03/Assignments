#include <iostream>

#include <cstdlib>  

#include <ctime> 

#include <string>

int main() {

    // Here is the guessing game portion
    std::srand(std::time(0)); 
    int secretNumber = std::rand() % 10 + 1; 
    int userGuess;

    std::cout << "Guess the number (between 1 and 10): ";
    
    while (true) {
        std::cin >> userGuess;
        
        if (userGuess < secretNumber) {
            std::cout << "Too low. Try again: ";
        } else if (userGuess > secretNumber) {
            std::cout << "Too high. Try again: ";
        } else {
            std::cout << "Correct! The number was " << secretNumber << ".\n";
            break;
        }
    }

    // The pascode portion
    std::string correctPassword = "C++Rocks"; 
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