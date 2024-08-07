// Given a sorted array of n elements and a target ‘x’. Find the last occurrence of ‘x’ in the array. If
// ‘x’ does not exist return -1.
// Input 1: arr[] = {1,2,3,3,4,4,4,5} , x = 4
// Output 1: 6


#include <iostream>
#include<vector>
using namespace std;

 int main(){
    int arr[]={1,2,3,3,4,4,4,5};
    int n = 8;
    int target = 4;
    int lo = 0 , hi = n-1;
    int currentAns = -1;
        while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        if(arr[mid]==target){
           if(mid == n - 1 || arr[mid + 1] != target){
            currentAns = mid;
            break;
           }
           else{
            lo = mid + 1;
           }
        }
        else if(arr[mid]<target) lo = mid + 1;
        else hi = mid - 1;
       }
      cout<<currentAns; 
 }