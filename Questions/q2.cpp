/*You are given two strings A and B.
You have to remove from A all the characters that are present in B.
The remaining characters form the answer C.
Print the remaining string. */

// You are using GCC
#include <bits/stdc++.h>
using namespace std;

int main() {
    string a, b;

    // Take input strings A and B
    cin >> a >> b;

    // Create a set to store characters of B
    set<char> s;

    // Take each character from B
    for (char c : b)
        // Add the character to the set
        s.insert(c);

    // Check each character of A
    for (char c : a) {

        // If character is not present in B
        if (s.find(c) == s.end())

            // Print that character
            cout << c;
    }

    return 0;
}