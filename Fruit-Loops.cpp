#include <iostream>

#include <string>

int main() {

    // I will declare my five fruits here

    std::string fruits[5] = {"Apple", "Banana", "Cherry", "Grape", "Orange"};

    // This is what will print out the fruits in the list
    std::cout << "Here are the fruits in the list:\n";
    for (const std::string& fruit : fruits) {
        std::cout << fruit << std::endl;
    }

    // Bonus Portion
    std::cout << "\nBonus: Add two more fruits!" << std::endl;
    std::string newFruits[2];
    
    std::cout << "Enter a new fruit: ";
    std::cin >> newFruits[0];
    
    std::cout << "Enter another fruit: ";
    std::cin >> newFruits[1];

    // This is what will print out the new fruits in the list
    std::cout << "\nUpdated list of fruits:\n";
    
    // This will print the original fruits
    for (const std::string& fruit : fruits) {
        std::cout << fruit << std::endl;
    }

    // This will print the new fruits
    for (const std::string& fruit : newFruits) {
        std::cout << fruit << std::endl;
    }

    return 0;
}
