// Input a string and return the number of substrings that contain only vowels.
// Input : str = "abjkoe"
// Output : 4
// Explanation : The possible substrings that only contain vowels are "a" , "o" , "e" , "oe"
// Input : str = "hgdhpw"
// Output : 0

#include <iostream>
#include <string>

using namespace std;

bool isVowel(char c) {
    return c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u';
}

int countVowelSubstrings(const string& str) {
    int count = 0;
    
    for (size_t i = 0; i < str.size(); ++i) {
        if (isVowel(str[i])) {
            for (size_t j = i; j < str.size(); ++j) {
                if (isVowel(str[j])) {
                    count++;
                } else {
                    break;
                }
            }
        }
    }
    
    return count;
}

int main() {
    string str1 = "abjkoe";
    cout << countVowelSubstrings(str1) << endl;  // Output: 4

    string str2 = "hgdhpw";
    cout << countVowelSubstrings(str2) << endl;  // Output: 0

    return 0;
}
