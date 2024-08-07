// Print an increasing-decreasing sequence using recursion
// Example:
// I" n = 5, the output should be:
// 1   4 5 4   6

#include<iostream>
using namespace std;
void PrintNandReverse(int i,int n){
    if(i==n+1) return;
    else{
        cout<<i<<" ";
        PrintNandReverse(i+1,n);
        if(i == 1) return;
        cout<<i-1<<" ";
    }
}
int main(){
   PrintNandReverse(1,5);
}
