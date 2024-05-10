#include <iostream>
#include <random>
int main() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> dis(0, 11);
    int daysUntilExpiration = dis(gen);

    switch (daysUntilExpiration) {
        case 0:
            std::cout << "Your subscription has expired." << std::endl;
            break;
        case 1:
            std::cout << "Your subscription expires within a day! Renew now and save 20%!" << std::endl;
            break;
        default:
            if (daysUntilExpiration <= 5) {
                std::cout << "Your subscription expires in " << daysUntilExpiration << " days. Renew now and save 10%!" << std::endl;
            } else if (daysUntilExpiration <= 10) {
                std::cout << "Your subscription will expire soon. Renew now!" << std::endl;
            } else {
                std::cout << "You have an active subscription." << std::endl;
            }
    }

    return 0;
}

