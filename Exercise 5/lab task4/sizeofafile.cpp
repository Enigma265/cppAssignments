#include <fstream>
#include <iostream> // 

using namespace std;

int main() {
    string filename;

    cout << "Enter the name of the file: ";
    getline(cin, filename);

    ifstream infile(filename, ios::binary); // Open in binary mode

    if (infile.is_open()) {
        // Move the file pointer to the end
        infile.seekg(0, ios::end);

        // Get the current position (which is the file size)
        streampos size = infile.tellg();

        // Reset the file pointer for potential future reads
        infile.seekg(0, ios::beg);

        cout << "The size of the file '" << filename << "' is "
             << size << " bytes." << endl;

        infile.close();
    } else {
        cerr << "Error: Could not open file '" << filename << "'." << endl;
    }

    return 0;
}
