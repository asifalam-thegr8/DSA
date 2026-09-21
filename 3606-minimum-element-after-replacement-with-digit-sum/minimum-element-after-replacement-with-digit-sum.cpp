class Solution {
public:
    int cal_dig_sum(int x){
        int sum=0;
        while(x>0){
            sum+=x%10;
            x=x/10;
        }
        return sum;
    }
    int minElement(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            nums[i]=cal_dig_sum(nums[i]);
        }
        int minVal=nums[0];
        for(int i=0;i<nums.size();i++){
            minVal=min(minVal,nums[i]);
        }
        return minVal;
    }
};