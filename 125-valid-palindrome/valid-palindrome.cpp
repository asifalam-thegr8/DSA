class Solution {
public:
    bool checkP(string s1){
        int size = s1.length();
        int j=size-1;
        for(int i=0;i<size;i++){
            if(s1[i]!=s1[j]){
                return false;
            }
            j--;
        }
        return true;
    }
    bool isPalindrome(string s) {
        string s1="";
        for (char c:s){
            if(isalpha(c) || (c>='0' && c<='9')){
                s1 += tolower(c);
            }
        }
        if(checkP(s1)){
            return true;
        }else{
            return false;
        }
    }
};