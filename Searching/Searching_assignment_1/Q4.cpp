// Given an array of integers nums containing n + 1 integers where each integer is in the range [1, n]
// inclusive in sorted order.
// There is only one repeated number in nums, return this repeated number.
// Input 1: arr[] = {1,2,3,3,4}
// Output 1: 3
// Input 2: arr[] = {1,2,2,3,4,5}
// Output 2: 2

#include<iostream>
using namespace std;
int main(){
   int arr[] = {1,2,2,3,4,5};
   int ans = -1;
   int lo = 0, hi = 5;
   while(lo<=hi){
    int mid = lo + (hi-lo)/2;
    if(arr[mid]!=mid+1){
        ans = arr[mid];
        hi = mid - 1;
    }
    else lo = mid + 1;
   }
   cout<<ans;
}