#include <fstream>
#include <iostream>
#include <string> // For string manipulation

using namespace std;

int main() {
    string filename = "data.txt";  // Replace with your desired filename

    // Open file for reading
    ifstream infile(filename);

    if (infile.is_open()) {
        string line;

        // Read and print contents line by line
        while (getline(infile, line)) {
            cout << line << endl;
        }

        infile.close();  // Close file after reading
    } else {
        cerr << "Error: Could not open file '" << filename << "' for reading." << endl;
    }

    // Open file for writing (truncates existing content)
    ofstream outfile(filename);

    if (outfile.is_open()) {
        string dataToWrite;

        // Get data to write from user
        cout << "Enter data to write to the file: ";
        getline(cin, dataToWrite);

        outfile << dataToWrite << endl;  // Write data with a newline character

        outfile.close();  // Close file after writing
        cout << "Data written to '" << filename << "' successfully." << endl;
    } else {
        cerr << "Error: Could not open file '" << filename << "' for writing." << endl;
    }

    return 0;
}
