class Solution {
public:
    int maxDepth(string s) {
        int maxD=0,count=0;
        for(char c: s){
            if(c=='('){
                count++;
                maxD=max(maxD,count);
            }
            else if(c==')'){
                count--;
            }
        }
        return maxD;
        
    }
};