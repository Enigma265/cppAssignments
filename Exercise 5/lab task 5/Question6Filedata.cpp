
#include <iostream>
#include <fstream>
#include <string>

int countVowels(std::string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        char c = tolower(str[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

int countWords(std::string str) {
    int count = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ')
            count++;
    }
    return count + 1;
}

std::string reverse(std::string str) {
    std::string reversed = "";
    for (int i = str.length() - 1; i >= 0; i--) {
        reversed += str[i];
    }
    return reversed;
}

std::string capitalizeSecondLetter(std::string str) {
    std::string capitalized = "";
    int wordCount = 0;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == ' ') {
            wordCount++;
            capitalized += ' ';
        } else if (wordCount > 0 && str[i - 1] == ' ') {
            capitalized += toupper(str[i]);
        } else {
            capitalized += str[i];
        }
    }
    return capitalized;
}

int main() {
    std::ifstream file("textfile.txt");
    std::string fileData((std::istreambuf_iterator<char>(file)), std::istreambuf_iterator<char>());

    std::cout << "Number of vowels: " << countVowels(fileData) << std::endl;
    std::cout << "Number of words: " << countWords(fileData) << std::endl;
    std::cout << "Reversed: " << reverse(fileData) << std::endl;
    std::cout << "Capitalized second letter: " << capitalizeSecondLetter(fileData) << std::endl;

    return 0;
}
