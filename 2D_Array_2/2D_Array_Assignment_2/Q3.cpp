#include<iostream>
using namespace std;
int main(){
    int m,n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    int arr[m][n];

    // Taking Input
    cout << "Enter the values of matrix :"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    for(int j=0;j<n;j++){
        if(j%2!=0){
            for(int i=0;i<n;i++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int i=m-1;i>=0;i--){
                cout<<arr[i][j]<<" ";
            }
        }
    } 
}   