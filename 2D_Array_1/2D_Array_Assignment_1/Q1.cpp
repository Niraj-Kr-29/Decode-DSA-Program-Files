#include<iostream>
#include<vector>
using namespace std;

int main(){
    int m=5,n=5;
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            arr[i][j]=10;
        }
    }
    //Printing the array
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
           cout<< arr[i][j] <<" ";
        }
        cout<<endl;
    }
}