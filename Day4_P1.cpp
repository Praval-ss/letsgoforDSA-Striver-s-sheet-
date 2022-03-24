// https://leetcode.com/problems/two-sum/submissions/

// method 1 : O(n)

#include<bits/stdc++.h>
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> sol;
        unordered_map<int,int> mp;
        for(int i=0;i<nums.size();i++){
            int req=target-nums[i];
            if(mp.find(req)!=mp.end()){
                sol.push_back(i);
                sol.push_back(mp[req]);
                break;
            }
            mp.insert({nums[i],i});
                
        }
        return sol;
    }
};