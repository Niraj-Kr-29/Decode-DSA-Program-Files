// Given an array of strings. Check whether they are anagram or not.
// Input : s = "car" , t = "arc"
// Output : True
// Input : s = "book" , t = "hook"
// Output : False

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

bool areAnagrams(const string& s, const string& t) {
    if (s.length() != t.length()) {
        return false;
    }

    string sorted_s = s;
    string sorted_t = t;

    // Sort both strings
    sort(sorted_s.begin(), sorted_s.end());
    sort(sorted_t.begin(), sorted_t.end());

    // Compare sorted strings
    return sorted_s == sorted_t;
}

int main() {
    string s1 = "car";
    string s2 = "arc";

    if (areAnagrams(s1, s2)) {
        cout << "True" << endl;  // Output: True
    } else {
        cout << "False" << endl;
    }

    string s3 = "book";
    string s4 = "hook";

    if (areAnagrams(s3, s4)) {
        cout << "True" << endl;
    } else {
        cout << "False" << endl;  // Output: False
    }

    return 0;
}
