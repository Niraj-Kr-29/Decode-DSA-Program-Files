#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the number of rows or columns: ";
    cin >> n;
    int matrix[n][n];
    int minr=0,maxr=n-1,minc=0,maxc=n-1,count=1,total=n*n;
    while(count<=total){
        //right
        for(int i=minc;i<=maxc;i++){
            matrix[minr][i]=count;
            count++;
        }
        minr++;
        //down
        for(int i=minr;i<=maxr;i++){
         matrix[i][maxc]=count;
         count++;
        }
        maxc--;
        //left
        for(int i=maxc;i>=minc;i--){
            matrix[maxr][i]=count;
            count++;
        }
        maxr--;
        //up
        for(int i=maxr;i>=minr;i--){
            matrix[i][minc]=count;
            count++;
        }
        minc++;
    }
    //printing the matrix
    cout<<endl;
     for (int i = 0; i < n; i++)
    {  
        for (int j = 0; j < n; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    } 
}    