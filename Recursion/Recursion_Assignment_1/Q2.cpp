// Write a program to print the sum of all odd numbers from a to b (inclusive) using
// recursion

#include<iostream>
using namespace std;

void SumOdd(int start,int end,int sum){
    if(start > end){
      cout<<"The required sum is : "<<sum;
      return;
    } 
    else if(start%2 != 0){
        sum += start;
        SumOdd(start+2, end, sum);
    }
    else {
        start = start + 1;
        sum += start;
        SumOdd(start+2, end, sum);
    }
}
int main(){
   SumOdd(2,8,0);
}