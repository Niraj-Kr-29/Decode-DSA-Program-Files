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
    cout << "Enter the values of matrix :";
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int max=0;
    int count=0;
    int sum;
    //Calculating sum of each row
    for (int i = 0; i < m; i++)
    {
        sum =0;
        for (int j = 0; j < n; j++)
        {
            sum += arr[i][j];
        }
        if(sum>max){
                max=sum;
                count=i;
            }
    }
  cout<<"The "<<count+1<<"th row has the maximum sum equal to "<<max;
  //(count+1) to increase readability as human bcz we generally start counting with 1 not 0
}