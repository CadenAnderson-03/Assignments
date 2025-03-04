#include <iostream>

#include <string>

using namespace std;

int main() {
    
    int number;

    // Prompting the user for a given number. 
    cout << "Enter a number: \n"; 
 
    cin >> number;

    // Using the modulo operator now. 
    if (number % 2 == 0) {
        cout << "is an even number.\n";
    } 
    else {
        cout << "is an odd number.\n";
    }
    
    return 0;
}
