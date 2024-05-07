#include <iostream>
#include <cstdlib> // Required for rand() and srand()
#include <ctime>   // Required for time()

int main() {
    // Initialize random seed
    srand(time(0));

    // Generate a random number between 0 and 11
    int daysUntilExpiration = rand() % 12;

    // Check the subscription status and print the appropriate message
    if (daysUntilExpiration == 0) {
        std::cout << "Your subscription has expired." << std::endl;
    } else if (daysUntilExpiration == 1) {
        std::cout << "Your subscription expires within a day!\nRenew now and save 20%!" << std::endl;
    } else if (daysUntilExpiration <= 5) {
        std::cout << "Your subscription expires in " << daysUntilExpiration << " days\nRenew now and save 10%!" << std::endl;
    } else if (daysUntilExpiration <= 10) {
        std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
    } else {
        std::cout << "You have an active subscription." << std::endl;
    }

    return 0;
}
