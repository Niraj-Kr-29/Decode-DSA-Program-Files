// There are n stairs, and a person standing at the bottom wants to climb the stairs to
// reach the nth stair. The person can climb either 1, , or  stairs at a time. Write a
// program to count the number of ways the person can reach the top using recursion.

#include<iostream>
using namespace std;

 int findStep(int n)
    {
        if (n == 0)
            return 1;
        else if (n < 0)
            return 0;
 
        else
            return findStep(n - 3) + findStep(n - 2)
                   + findStep(n - 1);
    }


int main(){
   cout<<findStep(4);
}
