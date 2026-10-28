class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        bool incr=false, decr=false,flag1=false,flag2=false;
        for(int i=1;i<nums.size();i++){
            if(nums[i]>nums[i-1]){
                incr=true;
            }else if(nums[i] < nums[i-1]){
                flag1=true;
                break;
            }
        }
        for(int i=1;i<nums.size();i++){
            if(nums[i]<nums[i-1]){
                decr=true;
            }else if(nums[i]>nums[i-1]){
                flag2=true;
                break;
            }
        }
        if(flag1==true && flag2==true){
            return false;
        }
        return true;
    }
};