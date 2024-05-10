#include <fstream>
#include <iostream> // Include for error handling (optional)

using namespace std;

int main() {
    ofstream myfile("test.txt");

    if (myfile.is_open()) {
        // File opened successfully (optional actions here)
        myfile.close();
        cout << "File 'test.txt' created successfully." << endl;
    } else {
        cerr << "Error: Could not create file 'test.txt'." << endl;
    }

    return 0;
}
