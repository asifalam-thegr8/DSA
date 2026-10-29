class Solution {
public:
    string truncateSentence(string s, int k) {
        char space = ' ';
        string str="";
        for(int i=0;i<s.length();i++){
            if(s[i]==space){
                k--;
            }
            if(k==0){
                break;
            }
            str+=s[i];
        }
        return str;
    }
};