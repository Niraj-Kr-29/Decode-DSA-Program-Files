#include<iostream>
using namespace std;
int main(){
    int arr[5][5]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25};
    int m=5,n=5;
    int minr=0,maxr=m-1,minc=0,maxc=n-1;
    while(minr<=maxr && minc<=maxc){
        //right
        for(int i=minc;i<=maxc;i++){
            cout<<arr[minr][i]<<" ";
        }
        minr++;
        if(minr>maxr || minc>maxc) break;
        //down
        for(int i=minr;i<=maxr;i++){
            cout<<arr[i][maxc]<<" ";
        }
        maxc--;
        if(minr>maxr || minc>maxc) break;
        //left
        for(int i=maxc;i>=minc;i--){
            cout<<arr[maxr][i]<<" ";
        }
        maxr--;
        if(minr>maxr || minc>maxc) break;
        //up
        for(int i=maxr;i>=minr;i--){
            cout<<arr[i][minc]<<" ";
        }
        minc++;
    }
}
//if condition is to eliminate extra printing of elements for example {1 2 3 4 5 6 7 8 9 10 11 12} will print 13 elements, 
//6 will be printed twice if we don't use the if condition. 
//other than the if condition, we can also use a count variable in the for loops, we'll increase count after every element printed
//for(int i=maxc;i>=minc;i-- && count<tne) tne=total no of elements