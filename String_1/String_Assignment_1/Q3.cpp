/**Check whether the given string is palindrome or not.
Input : "abcde"
Output : No */

#include<iostream>
#include<string>
#include<algorithm>
#include <bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string :";
    cin>>str;
    int n=str.size();
    string revstr = str;
    reverse(revstr.begin(),revstr.end());
    if(revstr==str) cout<<"Yes";
    else cout<<"No";
}    