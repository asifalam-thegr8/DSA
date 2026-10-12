class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int k) {
        int n = nums.size();
        vector<int> ans;
        for(int i=0;i<k;i++){
            ans.push_back(nums[i]);
            ans.push_back(nums[i+k]);
        }
        return ans;
    }
};