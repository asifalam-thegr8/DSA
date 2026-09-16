class Solution {
public:
    int digitsProd(int n){
        int prod=1;
        while(n>0){
            prod=prod*(n%10);
            n=n/10;
        }
        return prod;
    }
    int smallestNumber(int n, int t) {
        int ans=0;
        for(int i=n;i<500;i++){
            if(digitsProd(i)%t==0){
                ans=i;
                break;
            }
        }
        return ans;
    }
};