#include <iostream>
#include <cstdlib> // For rand() and srand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random integer between 0 and 11
    int daysUntilExpiration = rand() % 12; // Generates a value in the range [0, 11]

    // Check subscription status and display appropriate message
    if (daysUntilExpiration <= 10) {
        if (daysUntilExpiration <= 5) {
            if (daysUntilExpiration == 1) {
                cout << "Your subscription expires within a day!" << endl;
                cout << "Renew now and save 20%!" << endl;
            } else {
                cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
                cout << "Renew now and save 10%!" << endl;
            }
        } else {
            cout << "Your subscription will expire soon. Renew now!" << endl;
        }
    } else {
        cout << "You have an active subscription." << endl;
    }

    return 0;
}
