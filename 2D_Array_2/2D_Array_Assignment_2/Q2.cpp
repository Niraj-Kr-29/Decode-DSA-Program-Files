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

    //Transforming array to its transpose
    for (int i = 0; i < n; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            int temp = arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    //Reversing each column of the transformed matrix
    for(int j=0;j<n;j++){
        int i=0,k=n-1;
        while(i<=k){
            int temp = arr[i][j];
            arr[i][j]=arr[k][j];
            arr[k][j]=temp;
            i++;
            k--;
        }
    }
    //printing the resultant updated matrix
    cout<<endl;
     for (int i = 0; i < n; i++)
    {  
        for (int j = 0; j < n; j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    } 
}   