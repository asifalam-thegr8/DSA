class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.length();
        int left=0;
        int max_len=0;
        vector<int> charIndex(256,-1);

        for(int right=0;right<n;right++){
            char c = s[right];
            if(charIndex[c]>=left){
                left = charIndex[c]+1;
            }

            charIndex[c] = right;
            max_len = max(max_len,right-left+1);
        }
        return max_len;
    }
};