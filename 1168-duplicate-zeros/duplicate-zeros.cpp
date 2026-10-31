class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int n = arr.size();
        vector<int> ans;
        int count=0;
        for(int i=0;i<n;i++){
            int x = arr[i];
            if(x==0){
                ans.push_back(x);
                ans.push_back(x);
                count+=2;
            }else{
                ans.push_back(x);
                count++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i] = ans[i];
        }
    }
};