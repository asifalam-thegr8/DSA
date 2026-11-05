class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int count = 0;

        for(int x: arr1){
            auto it = lower_bound(arr2.begin(), arr2.end(), x);
            bool isValid = true;

            if(it != arr2.end()){
                if(abs(*it - x) <= d){
                    isValid = false;
                }
            }
            if(it != arr2.begin()){
                if(abs(*(it-1) - x) <= d){
                    isValid = false;
                }
            }

            if(isValid){
                count++;
            }
        }
        return count;
    }
};