/**Input a string of length n and count all the consonants in the given string.
Input : "pwians"
Output : 4**/

#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string :";
    cin>>str;
    int n=str.size();
    int count = str.size();
    for(int i=0;i<n;i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'){
            count--;
        }
    }
    cout<<count;
}