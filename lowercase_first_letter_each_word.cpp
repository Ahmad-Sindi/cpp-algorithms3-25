#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/*
 * Algorithm Challenge & Problem Solving Level 3 - Challenge #25 Lowercase First Letter of Each Word
 *
 * This program reads a line of text and converts the first letter of each word to lowercase.
 *
 * Engineering Concept:
 * - Safe in-place string modification
 * - Word boundary detection using state tracking
 * - Character case manipulation
 * - Attention to edge cases in loop design
 */

string ReadString()
{
    string Text;
    cout << "Enter your text:\n";
    getline(cin, Text);
    return Text;
}

string LowerFirstLetterOfEachWord(string Text)
{
    bool IsFirstLetter = true;

    // Traverse the string safely
    for (int i = 0; i < Text.length(); i++)
    {
        // Convert to lowercase only if it's the first letter of a word
        if (Text[i] != ' ' && IsFirstLetter)
        {
            Text[i] = tolower(Text[i]);
        }

        // Update state when a space is found
        IsFirstLetter = (Text[i] == ' ');
    }

    return Text;
}

int main()
{
    string Text = ReadString();

    cout << "\nString after conversion:\n";

    Text = LowerFirstLetterOfEachWord(Text);

    cout << Text;

    return 0;
}
