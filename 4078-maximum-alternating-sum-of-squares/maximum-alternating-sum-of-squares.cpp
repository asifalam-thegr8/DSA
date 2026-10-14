class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        for(int i=0;i<n;i++){
            if(nums[i]<0){
                nums[i] *= -1;
            }
        }
        sort(nums.begin(),nums.end());
        int i=0,j=n-1;
        long long sum=0;

        while(i<=j){
            sum += nums[j]*nums[j];
            if(i!=j){
                sum -= nums[i]*nums[i];
            }
            i++;
            j--;
        }
        return sum;
    }
};