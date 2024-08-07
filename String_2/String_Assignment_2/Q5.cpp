// Given a sentence ‘str’, return the word that is lexicographically maximum.
// Input : str = "proud to be pwians"
// Output : pwians
// Input : str = "decode dsa with pw"
// Output : with

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    cout<<"Input the sentence : ";
    string str;
    vector<string>v;
    getline(cin,str);
    stringstream ss(str);
    string temp;

    while(ss>>temp){
        v.push_back(temp);
    }
    sort(v.begin(),v.end());
    cout<<endl<<v[v.size()-1];
}