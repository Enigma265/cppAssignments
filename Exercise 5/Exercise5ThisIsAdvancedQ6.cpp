#include <iostream>
#include <fstream>
#include <string>
#include <sstream>

using namespace std;

// Function to calculate the number of vowels in a string
int countVowels(const string& str) {
    int count = 0;
    for(char c : str) {
        if(tolower(c) == 'a' || tolower(c) == 'e' || tolower(c) == 'i' || tolower(c) == 'o' || tolower(c) == 'u') {
            count++;
        }
    }
    return count;
}

// Function to calculate the number of words in a string
int countWords(const string& str) {
    stringstream ss(str);
    string word;
    int count = 0;
    while(ss >> word) {
        count++;
    }
    return count;
}

// Function to reverse a string
string reverse(const string& str) {
    return string(str.rbegin(), str.rend());
}

// Function to capitalize the second letter of each word
string capitalizeSecondLetter(const string& str) {
    string result = str;
    bool capitalize = false;
    for(char& c : result) {
        if(isalpha(c)) {
            if(capitalize) {
                c = toupper(c);
                capitalize = false;
            } else {
                capitalize = true;
            }
        } else {
            capitalize = false;
        }
    }
    return result;
}

int main() {
    // Open the text file
    ifstream file("textfile.txt");
    if(!file.is_open()) {
        cerr << "Error opening file!" << endl;
        return 1;
    }

    // Read the contents of the file into a string variable named fileData
    string fileData;
    getline(file, fileData);

    // Close the file
    file.close();

    // Calculate and output the number of vowels
    cout << "Number of vowels in the text file statement: " << countVowels(fileData) << endl;

    // Calculate and output the number of words
    cout << "Number of words in the text file statement: " << countWords(fileData) << endl;

    // Output the statement in reverse
    cout << "Statement in reverse: " << reverse(fileData) << endl;

    // Output the statement with the second letter of each word capitalized
    cout << "Statement with the second letter of each word capitalized: " << capitalizeSecondLetter(fileData) << endl;

    return 0;
}
