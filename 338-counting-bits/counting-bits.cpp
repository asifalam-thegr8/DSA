class Solution {
public:
    int count_ones(unsigned int n){
        int count=0;
        while(n>0){
            n&=n-1;
            count++;
        }
        return count;
    }
    vector<int> countBits(int n) {
        vector<int> ans;
        for(int i=0;i<=n;i++){
            unsigned int bin = i;
            int count = count_ones(i);
            ans.push_back(count);
        }
        return ans;
    }
};