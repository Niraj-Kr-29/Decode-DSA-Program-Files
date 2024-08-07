/**Input a string of even length and reverse the second half of the string.
Input : str = "abcdefgh"
Output : abcdhgfe */
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string :";
    cin>>str;
    int n=str.size();
    reverse(str.begin()+(n/2),str.end());
    cout<<str;

}