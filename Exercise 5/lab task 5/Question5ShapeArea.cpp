//QUESTION SIX


#include <iostream>
#include <cmath>


double squareArea(double side) {
    return side * side;
}
 
double rectangleArea(double length, double width) {
    return length * width;
}

double triangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int Selection;
    double base, height, length, width, side;

    while (true) {
        std::cout << "Select a shape to calculate the area for:" << std::endl;
        std::cout << "1. Square" << std::endl;
        std::cout << "2. Rectangle" << std::endl;
        std::cout << "3. Triangle" << std::endl;
        std::cout << "4. Quit Program " << std::endl;
        std::cout << "Enter Selection: ";
        std::cin >> Selection;

        if (Selection == 1) {
            std::cout << "Enter the side of the square: ";
            std::cin >> side;
            std::cout << "The area of the square is: " << squareArea(side) << std::endl;
        } else if (Selection == 2) {
            std::cout << "Enter the length of the rectangle: ";
            std::cin >> length;
            std::cout << "Enter the width of the rectangle: ";
            std::cin >> width;
            std::cout << "The area of the rectangle is: " << rectangleArea(length, width) << std::endl;
       } else if (Selection == 3) {
            std::cout << "Enter the base of the triangle: ";
            std::cin >> base;
            std::cout << "Enter the height of the triangle: ";
            std::cin >> height;
            std::cout << "The area of the triangle is: " << triangleArea(base, height) << std::endl;
      } else if (Selection == 4) {
            break;
        } else {
            std::cout <<"Your input was :" <<Selection<<" which is invalid input \nPlease enter a valid input!!! \n" << std::endl;
        }
    }

    return 0;
}

