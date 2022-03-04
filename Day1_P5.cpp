class Solution {
public:
    void sortColors(vector<int>& nums) {

        // Method 1
        // O(n),O(N)


        vector<int> v;
        int cnt0,cnt1,cnt2;
        cnt0=cnt1=cnt2=0;
        for(auto el:nums){
            if(el==0) cnt0++;
            else if(el==1) cnt1++;
            else cnt2++;
        }
        
        for(int i=0;i<cnt0;i++){
            v.push_back(0);
        }
        
        for(int i=0;i<cnt1;i++){
            v.push_back(1);
        }
        
        for(int i=0;i<cnt2;i++){
            v.push_back(2);
        }
        
        nums=v;


        
      //////////////////////////////////////////////////////////////////////////////////////

      // Method 2     O(n),O(1);
        
        int n=nums.size();
        int l=0;
        int m=0;
        int h=n-1;
        
        while(m<=h){
            if(nums[m]==0){
                swap(nums[l],nums[m]);
                l++;m++;
            }
            else if(nums[m]==1){
                m++;
            }
            else{
                swap(nums[m],nums[h]);
                h--;
            }
        }
        
        
    }
};