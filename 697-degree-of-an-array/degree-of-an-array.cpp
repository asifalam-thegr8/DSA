class Solution {
public:
    int findShortestSubArray(vector<int>& nums) {
        unordered_map<int, int> count;
        unordered_map<int, int> first;
        unordered_map<int, int> last;
        
        for (int i = 0; i < nums.size(); ++i) {
            int num = nums[i];
            if (first.find(num) == first.end()) {
                first[num] = i;
            }
            last[num] = i;
            count[num]++;
        }
        
        int degree = 0;
        for (auto& [num, freq] : count) {
            degree = max(degree, freq);
        }
        
        int min_len = nums.size();
        for (auto& [num, freq] : count) {
            if (freq == degree) {
                min_len = min(min_len, last[num] - first[num] + 1);
            }
        }
        
        return min_len;
    }
};