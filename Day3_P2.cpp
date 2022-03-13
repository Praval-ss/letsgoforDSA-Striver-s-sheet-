// https://leetcode.com/problems/powx-n/

// Method 1 : O(log(n)),O(1);

class Solution {
public:
    double myPow(double a, int n) {
        double ans=1.0;
        long nn=n;
        if(nn<0) nn*=-1;
        while(nn>0){
            if(nn%2){
                ans=ans*a;
                nn--;
            }
            else{
                a*=a;
                nn/=2;
            }
        }
        if(n<0){
            ans=double(1.0)/double(ans);
        }
        return ans;
    }
};