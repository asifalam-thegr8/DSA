class Solution {
public:
    vector<int> findDiagonalOrder(vector<vector<int>>& mat) {
        if(mat.empty() || mat[0].empty()) return {};

        int m = mat.size();
        int n = mat[0].size();
        vector<int> result;

        int r=0,c=0;
        bool up = true;

        while(result.size()<m*n){
            result.push_back(mat[r][c]);

            if(up){
                if(c == n-1){
                    r++;
                    up = false;
                }else if(r==0){
                    c++;
                    up = false;
                }else{
                    r--;
                    c++;
                }
            }else{
                if(r==m-1){
                    c++;
                    up = true;
                }else if(c==0){
                    r++;
                    up = true;
                }else{
                    r++;
                    c--;
                }
            }
        }
        return result;
    }
};