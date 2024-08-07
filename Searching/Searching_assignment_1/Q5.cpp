//Solved on leetcode
class Solution {
public:
    bool isPerfectSquare(int num) {
        int lo = 0, hi = num;
        while(lo<=hi){
        int mid = lo + (hi-lo)/2;
        long m =(long long)mid;
        long y =(long long)num;
        if((m*m)==y) return true;
        else if((m*m)>y) hi = m-1;
        else lo = m+1;
        }
        return false;
    }
};