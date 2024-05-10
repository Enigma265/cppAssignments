#include <fstream>
#include <iostream> // Optional for error handling

using namespace std;

int main() {
    // Data to write to the file (replace with your actual data)
    int age = 30;
    double pi = 3.14159;
    string name = "John Doe";

    // Open the file in binary mode for writing
    ofstream binaryFile("data.bin", ios::binary);

    if (binaryFile.is_open()) {
        // Write data to the file
        binaryFile.write(reinterpret_cast<char*>(&age), sizeof(age));
        binaryFile.write(reinterpret_cast<char*>(&pi), sizeof(pi));

        // Write a string as a null-terminated character array
        binaryFile.write(name.c_str(), name.length() + 1); // Include null terminator

        binaryFile.close();
        cout << "Data written to 'data.bin' successfully." << endl;
    } else {
        cerr << "Error: Could not create file 'data.bin'." << endl;
    }

    return 0;
}
