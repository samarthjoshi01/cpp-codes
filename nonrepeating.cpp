#include <iostream>
#include <string>
using namespace std;
void findNonRepeatingCharacters(const string &str)
{
    for (int i = 0; i < str.length(); i++)
    {
        bool isRepeating = false;

        for (int j = i + 1; j < str.length(); j++)
        {
            if (str[i] == str[j] && str[i] != ' ')
            {
                isRepeating = true;
                break; // No need to check further if it's repeating
            }
        }

        // If it's not repeating, print the character
        if (!isRepeating && str[i] != ' ')
        {
            cout << str[i] << " ";
        }
    }
    cout << endl;
}
int main()
{
    string input;
    getline(cin, input);
    cout << "Non-repeating characters: ";
    findNonRepeatingCharacters(input);
    return 0;
}
