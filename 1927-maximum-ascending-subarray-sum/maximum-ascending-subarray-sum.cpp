class Solution {
public:
    int maxAscendingSum(vector<int>& nums) {
        int sum = nums[0],maxsum=nums[0];
        int n = nums.size();
        for(int i=0;i<n-1;i++){
            if(nums[i+1]>nums[i]){
                sum+=nums[i+1];
            }else{
                maxsum = max(maxsum, sum);
                sum=nums[i+1];
            }
        }
        return max(maxsum, sum);
    }
};