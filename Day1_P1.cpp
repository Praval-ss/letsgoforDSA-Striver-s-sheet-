//              https://leetcode.com/problems/set-matrix-zeroes/submissions/

class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        vector<pair<int,int>> vp;
        for (int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    for(int kr=0;kr<m;kr++){
                        vp.push_back({kr,j});
                    }
                    for(int kc=0;kc<n;kc++){
                        vp.push_back({i,kc});
                    }
                }
            }
        }
        
        for(auto el:vp){
            matrix[el.first][el.second]=0;
        }
    }
};