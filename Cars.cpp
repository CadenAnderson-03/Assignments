#include <iostream> 
#include <string>
#include <vector>  // Needed for using std::vector

using namespace std; // Prevents us from having to use "std::"

// Defining a simple Car class
class Car {
public:
    // Public attributes for now; we will discuss "private" and "protected" next week
    string VIN;              // Vehicle Identification Number (should be unique for each car)
    string make;             // Car brand (e.g., Toyota, Ford)
    string model;            // Specific model (e.g., Corolla, Mustang)
    int year;                // Manufacturing year
    double mileage;          // Current mileage of the car
    vector<string> owners;   // List of previous and current owners

    // Constructor to initialize a Car object
    Car(string vin, string mk, string mdl, int yr, double miles, vector<string> ownerList) {
        VIN = vin;
        make = mk;
        model = mdl;
        year = yr;
        mileage = miles;
        owners = ownerList;
    }

    // Function to display car details
    void displayInfo() {
        cout << "VIN: " << VIN << endl;
        cout << "Make: " << make << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
        
        // Displaying owners
        cout << "Owners: ";
        for (const string& owner : owners) {
            cout << owner << " ";
        }
        cout << endl;
    }
};

    // Here is where I will put the main function for this code
int main() {
    // A list of the previous owners
    vector<string> previousOwners = {"Alex", "Bob", "Caden"};

    // Instantiating a Car object
    Car myCar("1HGCM82633A123456", "Chevrolet", "Corvette", 2020, 20000, previousOwners);

    // Calling displayInfo() to print the details
    myCar.displayInfo();

    return 0;
}

/*
Attributes that should be private:

1. The VIN - This is a unique identifier for the car, and modifying it could cause identity fraud or data inconsistency.
2. The mileage - Should not be directly modified to prevent fraudulent changes.
3. The list of owners - The ownership history should be controlled to maintain integrity.
4. The production year - This should not be modified after the car is created, as it is a fixed manufacturing detail.

Basically of these attributes need to be private, so they can only be modified through controlled methods 
*/