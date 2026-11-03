class Solution {
public:
    int minMoves(vector<int>& nums) {
        int largest = INT_MIN;
        for(int x : nums){
            largest = max(largest, x);
        }
        int ans = 0;
        for(int x: nums){
            ans += largest - x;
        }
        return ans;
    }
};