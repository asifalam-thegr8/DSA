class Solution {
public:
    vector<int> findKDistantIndices(vector<int>& nums, int key, int k) {
        int n = nums.size();
        vector<int> result;
        int last_added = -1;
        
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (nums[j] == key && abs(i - j) <= k) {
                    if (i != last_added) {
                        result.push_back(i);
                        last_added = i;
                    }
                    break;
                }
            }
        }
        
        return result;
    }
};