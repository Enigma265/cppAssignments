#include <iostream>

using namespace std;

int main() {
    int num1, num2;
    double result;

    // Get user input for numbers
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second number: ";
    cin >> num2;

    // Perform arithmetic operations and store results
    result = num1 + num2;
    cout << num1 << " + " << num2 << " = " << result << endl;

    result = num1 - num2;
    cout << num1 << " - " << num2 << " = " << result << endl;

    result = num1 * num2;
    cout << num1 << " * " << num2 << " = " << result << endl;

    // Handle integer division for clarity
    if (num2 != 0) {
        result = static_cast<double>(num1) / num2; // Cast to double for floating-point division
        cout << num1 << " / " << num2 << " = " << result << endl;
    } else {
        cout << "Error: Division by zero." << endl;
    }

    result = num1 % num2;
    cout << num1 << " % " << num2 << " = " << result << endl;

    return 0;
}
