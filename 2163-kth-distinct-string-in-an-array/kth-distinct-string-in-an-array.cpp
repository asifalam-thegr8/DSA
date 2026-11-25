class Solution {
public:
    string kthDistinct(vector<string>& arr, int k) {
        unordered_map <string,int> map;
        for(int i=0;i<arr.size();i++){
            map[arr[i]]++;
        }

        for(int i=0;i<arr.size();i++){
            string s = arr[i];
            if(map[s]==1){
                k--;
                if(k==0){
                    return s;
                }
            }
        }
        return "";
    }
};