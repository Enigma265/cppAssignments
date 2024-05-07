#include <iostream>
#include <string> // For using strings

using namespace std;

int main() {
    // Declare and initialize an array of strings
    string myArray[] = {"B123","C234","A345","C15","B117","G3003","C235","B179"};
// Get the size of the array
    int arraySize = sizeof(myArray) / sizeof(myArray[0]);
 // Iterate through each element
    for (int i = 0; i < arraySize; ++i) {
        // Check if the element starts with the letter "B"
        if (myArray[i][0] == 'B') {
            cout << myArray[i] << endl;}
    }
 return 0;
}
