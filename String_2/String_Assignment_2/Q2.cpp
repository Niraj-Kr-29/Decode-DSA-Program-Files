// Find the second largest digit in the string consisting of digits from ‘0’ to ‘9’.
// Input : str = "2947578"
// Output : 8
// Input : str = "1241"
// Output : 2


#include <iostream>
#include <string>
#include <climits>

using namespace std;

int secondLargestDigit(const string& str) {
    int firstMax = INT_MIN;
    int secondMax = INT_MIN;
    
    for (char ch : str) {
        if (isdigit(ch)) {
            int digit = ch - '0';
            if (digit > firstMax) {
                secondMax = firstMax;
                firstMax = digit;
            } else if (digit > secondMax && digit < firstMax) {
                secondMax = digit;
            }
        }
    }
    
    // If there is no second largest digit, return -1 or appropriate value
    return (secondMax == INT_MIN) ? -1 : secondMax;
}

int main() {
    string str = "2947578";
    cout << secondLargestDigit(str) << endl;  // Output: 8
    
    str = "1241";
    cout << secondLargestDigit(str) << endl;  // Output: 2
    
    str = "9";  // Only one digit
    cout << secondLargestDigit(str) << endl;  // Output: -1
    
    str = "11111";  // All digits are the same
    cout << secondLargestDigit(str) << endl;  // Output: -1
    
    return 0;
}