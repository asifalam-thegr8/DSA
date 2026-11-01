class Solution {
public:
    vector<int> diStringMatch(string s) {
        int n = s.length();
        vector<int> perm;
        int low = 0;
        int high = n;

        for(int i=0;i<n;i++){
            if(s[i]=='I'){
                perm.push_back(low);
                low++;
            }else if(s[i]=='D'){
                perm.push_back(high);
                high--;
            }
            if(low==high){
                perm.push_back(high);
            }
        }
        return perm;   
    }
};