#include <iostream>

using namespace std;

// Here below is the prototype of the functions

double add(double a, double b) { return a + b; }
double subtract(double a, double b) { return a - b; }
double multiply(double a, double b) { return a * b; }
double divide(double a, double b)

// For the divide by zero error
{
 if (b == 0) {
        cout << "Error: Division by zero is not allowed." << endl;
 return 0;
}
 return a / b;
}

// For the modulo by zero error
int modulo(int a, int b) {
if (b == 0) {
        cout << "Error: Modulo by zero is not allowed." << endl;
 return 0;
}
return a % b;
}

// Display menu code
 int main() {
 int choice;
 do {
        cout << "\nCalculator Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Modulo" << endl;
        cout << "6. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

 if (choice >= 1 && choice <= 5) {
 double num1, num2;
        cout << "Enter first number: ";
        cin >> num1;
        cout << "Enter second number: ";
        cin >> num2;

//The switch statement to call the appropriate function. 
 switch (choice) {
 case 1:
        cout << "Result: " << add(num1, num2) << endl;
 break;
 case 2:
        cout << "Result: " << subtract(num1, num2) << endl;
 break;
 case 3:
        cout << "Result: " << multiply(num1, num2) << endl;
 break;
 case 4:
        cout << "Result: " << divide(num1, num2) << endl;
 break;
 case 5:
        cout << "Result: " << modulo(static_cast<int>(num1), static_cast<int>(num2)) << endl;
 break;
} } 

 // For the exit option and invalid choice. 
 else if (choice == 6) {
} 
 else if (choice != 6) {
        cout << "Invalid choice. Please select a valid option." << endl;
}
} while (choice != 6);
        cout << "Exiting the calculator. Goodbye!" << endl;
 return 0;
}