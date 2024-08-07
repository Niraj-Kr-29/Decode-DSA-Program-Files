#include<iostream>
#include<vector>
using namespace std;

int matrixScore(vector<vector<int>>& grid) {
       int m=grid.size();
       int n=grid[0].size();
       for(int i=0;i<m;i++){
        //Making first column all 1's
        if(grid[i][0]==0){
            for(int j=0;j<n;j++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
            }
        }
       }
        //Maximizing 1's in columns
        for(int j=0;j<n;j++){
            int noz=0;
            int noo=0;
            for(int i=0;i<m;i++){
               if(grid[i][j]==0) noz++;
               else noo++; 
            }
            if(noz>noo){
              for(int i=0;i<m;i++){
                if(grid[i][j]==0) grid[i][j]=1;
                else grid[i][j]=0;
              }
            }
       }
       //Finding the score by binary conversion
       int sum =0;
       for(int i=0;i<m;i++){
        int x=1;
        for(int j=n-1;j>=0;j--){
         sum+=grid[i][j]*x;
         x*=2;
        }
       }
       cout<<sum;
      return sum;
    }

    int main(){
        int m,n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    vector< vector<int> >v(m,vector<int>(n));

    // Taking Input
    cout << "Enter the values of matrix :"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> v[i][j];
        }
    }
     matrixScore(v);
    }