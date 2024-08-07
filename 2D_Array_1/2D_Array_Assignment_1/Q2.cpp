#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int m, n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    int arr[m][n], brr[m][n];

    // Taking Input
    cout << "Enter the values of matrix 1 :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    cout << "Enter the values of matrix 2 :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> brr[i][j];
        }
    }
    // Storing the sum into matrix 1 or arr[m][n]
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr[i][j] += brr[i][j];
        }
    }
    // Printing the resultant
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}