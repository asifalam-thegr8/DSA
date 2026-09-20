class Solution {
public:
    int reverseDegree(string s) {
        int sum=0;
        for(int i=0;i<s.length();i++){
            char c = tolower(s[i]);
            int val=27-(c-'a'+1);
            sum+=(val*(i+1));
        }
        return sum;
    }
};