#include <iostream>
#include <string>
int main() {
    // Declare and initialize the array
    std::string elements[] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};
    
    // Iterate through each element of the array
    for (const std::string& element : elements) {
        // Check if the element starts with the letter "B"
        if (element[0] == 'B') {
            // Output the element starting with "B"
            std::cout << element << std::endl;
        }
    }
    return 0;
}
