#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows or columns: ";
    cin >> n;
    int arr[n][n];

    // Taking Input
    cout << "Enter the values of matrix :"<<endl;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    //Printing the diagonals
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(i==j || (i+j)==n-1){
                cout<<arr[i][j]<<" ";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
}