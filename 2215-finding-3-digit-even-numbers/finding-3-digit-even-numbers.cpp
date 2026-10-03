class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        vector<int> count(10, 0);
        for (int d : digits) {
            count[d]++;
        }
        
        vector<int> result;
        for (int num = 100; num < 1000; num += 2) {
            int d1 = num / 100;
            int d2 = (num / 10) % 10;
            int d3 = num % 10;
            
            vector<int> current_count(10, 0);
            current_count[d1]++;
            current_count[d2]++;
            current_count[d3]++;
            
            if (current_count[d1] <= count[d1] &&
                current_count[d2] <= count[d2] &&
                current_count[d3] <= count[d3]) {
                result.push_back(num);
            }
        }
        
        return result;
    }
};