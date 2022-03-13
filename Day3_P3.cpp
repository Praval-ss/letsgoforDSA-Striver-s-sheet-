// https://leetcode.com/problems/majority-element/submissions/


// Method 1: O(nlogn)

class Solution {
public:
    int majorityElement(vector<int>& nums) {

        map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        }
        
        int sol=0;
        int maxi=INT_MIN;
        for(auto el: mp){
            if(el.second>maxi){
                maxi=el.second;
                sol=el.first;
            }
        }
        return sol;
        
         
    }
};



// Method 2: O(n) Moore's Voting Algo

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int count=0;
        int x=0;
        for(auto el:nums){
            if(count==0){
                x=el;
            }
            if(x==el) {
                count++;
            }
            else count--;
        }
        return x;
        
        
         
    }
};
        
        