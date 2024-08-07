#include<iostream>
using namespace std;

int main(){
int a[][2] = {{1,2},{3,4}};
int i, j;
for (i = 0; i < 2; i++)
for (j = 0; j < 2; j++)
cout << a[i][j];
return 0;
}

//output will be 1234, an endl inside the for loop containing i and " " in the cout would have showed it in matrix form