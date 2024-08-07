#include<iostream>
#include<vector>
using namespace std;

int main(){
     int m, n;
    cout << "Enter the number of rows of 1st matrix: ";
    cin >> m;
    cout << "Enter the number of columns of 1st matrix: ";
    cin >> n;
    int arr[m][n];

    // Taking Input
    cout << "Enter the values of 1st matrix :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    //  int p, q;
    // cout << "Enter the number of rows of 2nd matrix: ";
    // cin >> p;
    // cout << "Enter the number of columns of 2nd matrix: ";
    // cin >> q;
    // int brr[p][q];

    // cout << "Enter the values of 2nd matrix :";
    // for (int i = 0; i < p; i++)
    // {
    //     for (int j = 0; j < q; j++)
    //     {
    //         cin >> brr[i][j];
    //     }
    // }
    
    for(int i=0;i<m;i++){
        if(i%2==0){
            for(int j=0;j<n;j++){
                cout<<arr[i][j]<<" ";
            }
        }
        else{
            for(int j=n-1;j>=0;j--){
                cout<<arr[i][j]<<" ";
            }
        }
    }

}