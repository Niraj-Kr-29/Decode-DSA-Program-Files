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
    int arr[m][n];

    // Taking Input
    cout << "Enter the values of matrix 1 :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
   int max=arr[0][0];
   for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
           if(max<arr[i][j]){
            max=arr[i][j];
           }
        }
    }
    cout<<"The largest element is "<<max;
}