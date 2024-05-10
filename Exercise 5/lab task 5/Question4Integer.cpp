#include <iostream>

int main() {
    int num;

    while (true) {
        std::cout << "Enter an integer value between 5 and 10:\n ";
        if (std::cin >> num) {
            if (num >= 5 && num <= 10) {
                break;
            } else {
                std::cout << "Sorry, you entered Invalid number, please try again\n" << std::endl;
            }
        } else {
            std::cout << "You entered ("<<num<< ") Please enter a number between 5 and 10.\n" << std::endl;
            std::cin.clear();
            std::cin.ignore(10000, '\n');
        }
    }


    std::cout << "Your input value ("<<num<< ") has been accepted." << std::endl;

    return 0;
}
