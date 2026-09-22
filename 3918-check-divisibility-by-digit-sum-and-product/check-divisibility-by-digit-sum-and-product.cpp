class Solution {
public:
    bool checkDivisibility(int n) {
        long long num=n;
        long long sum=0,prod=1;
        while(num>0){
            long long r=num%10;
            sum+=r;
            prod=prod*r;
            num=num/10;
        }
        if(n%(sum+prod)==0){
            return true;
        }else{
            return false;
        }
    }
};