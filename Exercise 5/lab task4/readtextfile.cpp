#include <iostream>
#include <fstream>
#include <string> // Include for string manipulation

using namespace std;

int main() {
    string filename = "my_data.txt"; // Replace with your actual file name
    ifstream infile(filename);

    if (infile.is_open()) {
        string line;

        // Read the file line by line
        while (getline(infile, line)) {
            cout << line << endl; // Print each line to the console
        }

        infile.close();
    } else {
        cerr << "Error: Could not open file '" << filename << "'" << endl;
    }

    return 0;
}
