#include <iostream>
#include <cmath>

using namespace std;

// Function to calculate the area of a triangle
double calculateTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

// Function to calculate the area of a rectangle
double calculateRectangleArea(double length, double width) {
    return length * width;
}

// Function to calculate the area of a square
double calculateSquareArea(double side) {
    return side * side;
}

int main() {
    char choice;

    do {
        cout << "Select a shape to calculate the area:\n";
        cout << "1. Triangle\n";
        cout << "2. Rectangle\n";
        cout << "3. Square\n";
        cout << "Enter your choice (1, 2, or 3): ";
        cin >> choice;

        switch (choice) {
            case '1': {
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of the triangle: " << calculateTriangleArea(base, height) << endl;
                break;
            }
            case '2': {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of the rectangle: " << calculateRectangleArea(length, width) << endl;
                break;
            }
            case '3': {
                double side;
                cout << "Enter the side of the square: ";
                cin >> side;
                cout << "Area of the square: " << calculateSquareArea(side) << endl;
                break;
            }
            default:
                cout << "Invalid input. Please enter a valid choice (1, 2, or 3)." << endl;
                break;
        }

        cout << "Do you want to calculate the area of another shape? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Program exited." << endl;

    return 0;
}
