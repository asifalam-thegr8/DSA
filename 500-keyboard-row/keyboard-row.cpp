class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        string r1 = "qwertyuiopQWERTYUIOP";
        string r2 = "asdfghjklASDFGHJKL";
        string r3 = "zxcvbnmZXCVBNM";
        vector<string> ans;

        for(string w:words){
            bool ok1 =true, ok2 = true, ok3 =true;
            for(char c : w){
                if(r1.find(c)==string::npos) ok1 = false;
                if(r2.find(c)==string::npos) ok2 = false;
                if(r3.find(c)==string::npos) ok3 = false;
            }
            if(ok1 || ok2 ||ok3) ans.push_back(w);
        }
        return ans;
    }
};