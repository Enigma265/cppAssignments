#include <iostream>
#include <cstdlib> // For rand()
#include <ctime>   // For time()

using namespace std;

int main() {
    // Seed the random number generator
    srand(time(NULL));

    // Generate a random integer between 0 and 11
    int daysUntilExpiration = rand() % 12; // Generates a value in the range [0, 11]

    // Check subscription status and display appropriate message using switch
    switch (daysUntilExpiration) {
        case 0:
        case 1:
            cout << "Your subscription expires within a day!" << endl;
            cout << "Renew now and save 20%!" << endl;
            break;
        case 2:
        case 3:
        case 4:
        case 5:
            cout << "Your subscription expires in " << daysUntilExpiration << " days" << endl;
            cout << "Renew now and save 10%!" << endl;
            break;
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
            cout << "Your subscription will expire soon. Renew now!" << endl;
            break;
        case 11:
            cout << "Your subscription has expired." << endl;
            break;
        default:
            cout << "You have an active subscription." << endl;
    }

    return 0;
}
