#include <iostream>

#include <vector>

int main() {

    // Part 1: Arrays

    int arr[5] = {10, 20, 30, 40, 50};
    
    // My original array

    std::cout << "Original array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    // Modifications

    arr[1] = 25;
    arr[3] = 45;
    
    // Updated array

    std::cout << "Updated array: ";
    for (int i = 0; i < 5; i++) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
    
    // Part 2: Vectors

    std::vector<int> vec = {5, 10, 15};
    
    // My original vector

    std::cout << "Original vector: ";
    for (int num : vec) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
    
    // My functions

    vec.push_back(20); 

    std::cout << "After push_back(20): ";
    for (int num : vec) std::cout << num << " ";
    std::cout << std::endl;
    
    vec.pop_back(); 

    std::cout << "After pop_back(): ";
    for (int num : vec) std::cout << num << " ";
    std::cout << std::endl;
    
    vec.insert(vec.begin() + 1, 8); 

    std::cout << "After insert(1, 8): ";
    for (int num : vec) std::cout << num << " ";
    std::cout << std::endl;
    
    vec.erase(vec.begin()); 
    
    std::cout << "After erase(begin()): ";
    for (int num : vec) std::cout << num << " ";
    std::cout << std::endl;
    
    // Printing the final vector size

    std::cout << "Final vector size: " << vec.size() << std::endl;
    
    return 0;
}
