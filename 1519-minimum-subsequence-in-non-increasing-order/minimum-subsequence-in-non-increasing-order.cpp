class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.begin(), nums.end(), greater<int>());
        
        int totalSum = 0;
        for (int x : nums) {
            totalSum += x;
        }
        
        vector<int> ans;
        int currentSum = 0;
        
        for (int x : nums) {
            ans.push_back(x);
            currentSum += x;
            if (currentSum > totalSum - currentSum) {
                break;
            }
        }
        
        return ans;
    }
};