class Solution {
public:
    int tribonacci(int n) {
        if(n==0 || n==1) return n;
        if(n==2) return 1;
        int a = 0, b=1, c=1;
        while(n>=3){
            int d = a+b+c;
            a=b;
            b=c;
            c=d;
            n--;
        }
        return c;
    }
};