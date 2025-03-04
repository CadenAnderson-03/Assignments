#include <iostream>

#include <string>

using namespace std;

int main() {
    
    
    string day;
    
    // Prompt the user to enter a given day. 
    cout << "Enter a day of the week: \n";
    cin >> day;
    
    // Determine the message based on the day given. 
 
    if (day == "Saturday" || day == "Sunday") {
        cout << "It's the weekend!" << endl;

    } else if (day == "Wednesday") {
        cout << "Hump Daaaaay" << endl;

    } else if (day == "Friday") {
        cout << "TGIF!" << endl;

    } else {
        cout << "It's a weekday!" << endl;
    }
    
    return 0;
}
