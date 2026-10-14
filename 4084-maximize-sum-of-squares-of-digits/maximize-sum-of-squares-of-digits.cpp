class Solution {
public:
    int digSum(int x){
        int sum=0;
        while(x>0){
            sum += x%10;
            x=x/10;
        }
        return sum;
    }
    int sumOfDigSq(int x){
        int sum=0;
        while(x>0){
            int r=x%10;
            sum += r*r;
            x=x/10;
        }
        return sum;
    }
    string maxSumOfSquares(int num, int sum) {
        if (sum < 1 || sum > num * 9) return "";

        string ans = "";
        
        for (int i = 0; i < num; i++) {
            for (int d = 9; d >= 0; d--) {
                if (sum - d >= 0 && sum - d <= (num - i - 1) * 9) {
                    ans += char('0' + d);
                    sum -= d;
                    break;
                }
            }
        }

        return sum == 0 ? ans : "";
    }
};