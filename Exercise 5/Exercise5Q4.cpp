#include <iostream>
using namespace std;

int main() {
    int userValue;

    // Prompt the user for an integer value between 5 and 10
    while (true) {
        cout << "Enter an integer value between 5 and 10: ";
        cin >> userValue;

        if (cin.fail() || userValue < 5 || userValue > 10) {
            cin.clear(); // Clear error flags
            cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
            cout << "Invalid input. Please enter a value between 5 and 10." << endl;
        } else {
            break; // Valid input, exit the loop
        }
    }

    // Inform the user that their input value has been accepted
    cout << "Your input value (" << userValue << ") has been accepted." << endl;

    return 0;
}
\