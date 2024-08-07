#include <iostream>
#include <vector>
using namespace std;

int main(){
    cout<<"Enter the size of matrix (odd number): ";
    int n;
    cin>>n;
    int arr[n][n];
 // Taking Input
    cout << "Enter the values of matrix :";
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int middle = n / 2;

    // Display the middle row
    cout << "Middle row: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[middle][i] << " ";
    }
    cout << endl;

    // Display the middle column
    cout << "Middle column: ";
    for (int i = 0; i < n; ++i) {
        cout << arr[i][middle] << " ";
    }
    cout << endl;
}