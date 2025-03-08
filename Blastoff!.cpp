#include <iostream>

using namespace std;

int main() 
{
    int startNumber;

    // Asking the user here to put their number. 
    cout << "Enter a number to start the countdown: ";

    cin >> startNumber;

    // Here we are counting down from the number the user put in.
    for (int i = startNumber; i >= 1; i--) 
   
    {cout << i << endl;
   
    }

    // Then in the end we put "Blast off!" to show that the countdown is over.
    cout << "Blast off!" << endl;

    return 0;
}