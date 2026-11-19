#include <algorithm>
#include <vector>

using namespace std;

class Solution {
public:
    int minimizeSum(vector<int>& nums) {
        int n = nums.size();
        
        sort(nums.begin(), nums.end());
        
        int changeTwoLargest = nums[n - 3] - nums[0];
        int changeTwoSmallest = nums[n - 1] - nums[2];
        int changeSmallestAndLargest = nums[n - 2] - nums[1];
        
        return min({changeTwoLargest, changeTwoSmallest, changeSmallestAndLargest});
    }
};