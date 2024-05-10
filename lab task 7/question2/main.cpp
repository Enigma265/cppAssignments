#include <iostream>
#include "shapes/Square.h"
#include "shapes/Triangle.h"
#include "shapes/Circle.h"
#include "shapes/Area.h"

using namespace std;
using namespace shapes;

int main() {
  int choice;

  do {
    cout << "\n** Shape Area Calculator **\n";
    cout << "1. Calculate area of Square\n";
    cout << "2. Calculate area of Triangle\n";
    cout << "3. Calculate area of Circle\n";
    cout << "4. Quit\n";
    cout << "Enter your choice: ";
    cin >> choice;

    switch (choice) {
      case 1: {
        float sideLength;
        cout << "Enter side length of square: ";
        cin >> sideLength;

        Square square(sideLength);
        float area = Area::calculateArea(square);
        cout << "Area of square: " << area << endl;
        break;
      }
      case 2: {
        float base, height;
        cout << "Enter base of triangle: ";
        cin >> base;
        cout << "Enter height of triangle: ";
        cin >> height;

        Triangle triangle(base, height);
        float area = Area::calculateArea(triangle);
        cout << "Area of triangle: " << area << endl;
        break;
      }
      case 3: {
        float radius;
        cout << "Enter radius of circle: ";
        cin >> radius;

        Circle circle(radius);
        float area = Area::calculateArea(circle);
        cout << "Area of circle: " << area << endl;
        break;
      }
      case 4:
        cout << "Exiting program...\n";
        break;
      default:
        cout << "Invalid choice. Please try again.\n";
    }

  } while (choice != 4);

  return 0;
}
