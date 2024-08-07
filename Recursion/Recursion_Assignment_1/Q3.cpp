// Given a positive integer, return true if it is a power of  using recursion.

#include<iostream>
using namespace std;

bool PowerOf2(int initial,int num){
    if(initial == num) return true;
    return PowerOf2(initial*2,num);
}
int main(){
   cout<< PowerOf2(1,128);
}

