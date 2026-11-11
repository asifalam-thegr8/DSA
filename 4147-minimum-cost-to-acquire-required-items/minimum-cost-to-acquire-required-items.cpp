class Solution {
public:
    long long minimumCost(int cost1, int cost2, int costBoth, int need1, int need2) {
        long long c1 = cost1, c2 = cost2, cCB = costBoth;
        long long n1 = need1, n2 = need2;
        
        long long effectiveCB = min(cCB, c1 + c2);
        
        long long common = min(n1, n2);
        long long totalCost = common * effectiveCB;
        
        n1 -= common;
        n2 -= common;
        
        long long rem1Cost = min(c1, cCB);
        totalCost += n1 * rem1Cost;
        
        long long rem2Cost = min(c2, cCB);
        totalCost += n2 * rem2Cost;
        
        return totalCost;
    }
};