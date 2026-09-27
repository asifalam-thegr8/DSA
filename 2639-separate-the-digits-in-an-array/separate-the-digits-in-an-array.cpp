class Solution {
public:
    void sepadd(vector<int>& ans,int x){
        string s = to_string(x);
        for(char c:s){
            ans.push_back(c-'0');
        }
    }
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            sepadd(ans,nums[i]);
        }
        return ans;
    }
};