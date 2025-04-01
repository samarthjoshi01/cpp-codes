#include <iostream>
#include <string>
using namespace std;

int main() {
    string input;
    int charCount[256] = {0};  
    int vowels = 0, uppercase = 0, lowercase = 0, digits = 0, totalChars = 0;
    cout << "Enter a string: ";
    getline(cin, input);
    for (char ch : input) {
        charCount[ch]++;  

        if (isalpha(ch)) {  
            totalChars++;
            if (isupper(ch)) {
                uppercase++;
            } else if (islower(ch)) {
                lowercase++;
            }
            if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' ||
                ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
                vowels++;
            }
        } else if (isdigit(ch)) {  
            digits++;
            totalChars++;
        }
    }

    cout << "\nCharacter Occurrences:\n";
    for (char ch : input) {
        if (charCount[ch] > 0) {
            cout << ch << ": " << charCount[ch] << endl;
            charCount[ch] = 0;  
        }
    }

    cout << "\nNumber of vowels: " << vowels << endl;
    cout << "Number of uppercase letters: " << uppercase << endl;
    cout << "Number of lowercase letters: " << lowercase << endl;
    cout << "Number of digits: " << digits << endl;
    cout << "Total number of characters: " << totalChars << endl;

    return 0;
}