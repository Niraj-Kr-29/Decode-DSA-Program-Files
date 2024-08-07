#include<iostream>
#include<vector>
using namespace std;
void setZeroes(vector<vector<int>>& matrix){
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int>col_track(n,false);
        vector<int>row_track(m,false);
        //Filling the tracking vectors
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    col_track[j]=true;
                    row_track[i]=true;
                }
            }
        }
        //Traversing through row_track vector
        for(int i=0;i<m;i++){
            if(row_track[i]==true){
                for(int j=0;j<n;j++){
                    matrix[i][j]=0;
                }
            }
        }
        //Traversing through col_track vector
        for(int j=0;j<n;j++){
            if(col_track[j]==true){
                for(int i=0;i<m;i++){
                    matrix[i][j]=0;
                }
            }
        }
    }
int main(){
    int m,n;
    cout << "Enter the number of rows: ";
    cin >> m;
    cout << "Enter the number of columns: ";
    cin >> n;
    vector< vector<int> >arr(m,vector<int>(n));

    // Taking Input
    cout << "Enter the values of matrix :"<<endl;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
   setZeroes(arr);
   //printing the transformed matrix
   for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;
    }
}    