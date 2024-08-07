/**Input a string of size n and update all the odd positions in the string to character ‘#’. Consider
0-based indexing.
Input : str = "Pbwcshkuiglhlds"
Output : "P#w#s#k#i#l#l#s"**/
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the string :";
    cin>>str;
    int n=str.size();
    for(int i=0;i<n;i++){
        if(i%2!=0){
            str[i]='#';
        }
    }
    //printing the string
     for(int i=0;i<n;i++){
            cout<<str[i];
        }
}
