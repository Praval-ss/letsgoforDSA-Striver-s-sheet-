// https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/

#include<bits/stdc++.h>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini=INT_MAX;
        int maxP=0;
        
        for(int i=0;i<prices.size();i++){
            mini=min(mini,prices[i]);
            maxP=max(maxP,prices[i]-mini);
        }
        return maxP;
    }
};