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
    cout << "Enter the values of matrix:";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
  cout << "Enter the values of first coordinate(l1,r1): ";
  int l1,r1;
  cin>>l1;
  cin>>r1;
  cout << "Enter the values of second coordinate(l2,r2): ";
  int l2,r2;
  cin>>l2;
  cin>>r2;

  //Addition
  int sum=0;
    for (int i = l1; i <= l2; i++)
    {
        for (int j = r1; j <= r2; j++)
        {
            sum += arr[i][j];
        }
    }
  
    cout<<"The sum is : "<<sum;
}