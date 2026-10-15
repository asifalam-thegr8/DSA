class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            unordered_set<int> dist;
            for(int j=i;j<n;j++){
                dist.insert(nums[j]);
                int count = dist.size();
                ans+=count*count;
            }
        }
        return ans;
    }
};