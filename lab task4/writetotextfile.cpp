#include <fstream>
#include <iostream>
#include <string>

using namespace std;

int main() {
    string filename, content;

    // Get filename from user
    cout << "Enter the filename (including extension): ";
    getline(cin, filename);

    // Get content to write from user
    cout << "Enter the content to write to the file:\n";
    getline(cin, content);

    ofstream myfile(filename);

    if (myfile.is_open()) {
        myfile << content << endl;
        cout << "Content written successfully to '" << filename << "'." << endl;
    } else {
        cerr << "Error: Could not open file '" << filename << "'." << endl;
    }

    myfile.close();
    return 0;
}
