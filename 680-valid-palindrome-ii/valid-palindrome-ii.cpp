class Solution {
public:
    bool checkPd(string s, int i, int j){
        while(i<j){
            if(s[i]!=s[j]) return false;
            i++;
            j--;
        }
        return true;
    }
    bool validPalindrome(string s) {
        int i=0,j=s.length()-1;
        while(i<j){
            if(s[i]==s[j]){
                i++;
                j--;
            }else{
                return checkPd(s,i+1,j) || checkPd(s,i,j-1);
            }
        }
        return true;
    }
};