class Solution {
public:
    bool canAliceWin(int n) {
        bool ans = false;
        int k = 10;
        while (n >= k && k > 0) {
            n = n - k;
            k--;
            ans = !ans;
        }
        return ans;
    }
};