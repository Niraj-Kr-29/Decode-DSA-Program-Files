/**Input a string of length less than 10 and convert it into integer without using builtin function.
Input : "3244"
Output : 3244 */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string :";
    cin>>str;
    int n=str.size();
    int x=0;
    for(int i=0;i<n;i++){
        x *= 10;
        x += (str[i]-48); //s[i] is a character and ascii of '1' as a character is 49
    }
    cout<<x;
}    