class Solution {
public:
    int leftSum(vector<int>& nums, int b){
        if(b==0){
            return 0;
        }
        int sum=0;
        for(int i=0;i<b;i++){
            sum+=nums[i];
        }
        return sum;
        
    }
    int rightSum(vector<int>& nums, int a){
        int sum=0;
        if(a==nums.size()-1){
            return 0;
        }
        for(int i=a+1;i<nums.size();i++){
            sum+=nums[i];
        }
        return sum;
        
    }
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int> ans;
        for(int i=0;i<nums.size();i++){
            int diff = max(rightSum(nums, i), leftSum(nums, i)) - min(rightSum(nums, i), leftSum(nums, i));
            ans.push_back(diff);
        }
        return ans;
    }
};