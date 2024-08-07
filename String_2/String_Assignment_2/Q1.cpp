// Input a string and concatenate with its reverse string and print it.
// Input : str = "PWSkills"
// Output : "PWSkillssllikSWP"
// Input : str = "pw"
// Output : "pwwp"

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

string concatenateReverse(const string& str) {
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return str + reversedStr;
}

int main() {
    string str1 = "PWSkills";
    string str2 = "pw";
    
    cout << concatenateReverse(str1) << endl;  // Output: "PWSkillssllikSWP"
    cout << concatenateReverse(str2) << endl;  // Output: "pwwp"
    
    return 0;
}