class Solution {
public:
    void backtracking(int open, int close, int n, string current, vector<string> &ans){
        if(open==n && close==n){
            ans.push_back(current);
            return;
        }
        if(open<n){
            backtracking(open+1, close, n, current+"(", ans);
        }
        if(close<open){
            backtracking(open, close+1, n, current+")", ans);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        backtracking(0,0,n,"",ans);
        return ans;
    }
};