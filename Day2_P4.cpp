// https://leetcode.com/problems/find-the-duplicate-number/submissions/

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       set<int> s;
        s.insert(nums[0]);
        int ans=0;
        for(int i=1;i<nums.size();i++){
            if(s.count(nums[i])){
                ans=nums[i];
                break;
            }
            else {
                s.insert(nums[i]);
            }
        }
        return ans;
    }
};

// Method 2: O(N),O(1);

class Solution {
public:
    int findDuplicate(vector<int>& nums) {
       vector<int> v(nums.size(),0);
        int sol=0;
        
        for(int i=0;i<nums.size();i++){
            if(v[nums[i]]==0) v[nums[i]]++;
            else sol= nums[i];
        }
        
        return sol;
    }
};