#include <iostream>
#include <climits>

using namespace std;
int main(){
    int arr[6] = {1,5,4,-3,2,1};
    for(int i=0; i<6-1; i++){
        int min = INT_MAX;
        int minIdx = -1;
        for(int j=i; j<6; j++){
           if(arr[j]<=min){
            min = arr[j];
            minIdx = j;
           }
        }
        swap(arr[i],arr[minIdx]);
    }
    for(int ele : arr){
    cout<<ele<<" ";
    }
}
 