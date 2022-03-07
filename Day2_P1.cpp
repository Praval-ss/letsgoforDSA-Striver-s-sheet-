// https://leetcode.com/problems/rotate-image/submissions/


// Approach 1 : O(N*N), O(N)

class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        vector<vector<int>> c=m;
        int x=m.size();
        int y=m[0].size();
        
        
        /*  0,0= 0,2
            0,1= 1,2
            0,2= 2,2
            
            1,0= 0,1
            1,1= 1,1
            1,2= 2,1
            
            2,0= 0,0
            2,1= 1,0
            2,2= 2,0  */
        
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                m[j][x-1-i]=c[i][j];
            }
        }
        
    }
};


// Approach 2: O(N*N), O(1)

class Solution {
public:
    void rotate(vector<vector<int>>& m) {
        int x=m.size();
        int y=m[0].size();
        
        for(int i=0;i<x;i++){
            for(int j=0;j<i;j++){
                swap(m[i][j],m[j][i]);
            }
        }
        
        for(int i=0;i<x;i++){
            reverse(m[i].begin(),m[i].end());
        }    
    }
};