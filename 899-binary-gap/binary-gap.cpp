class Solution {
public:
    int binaryGap(int n) {
        int max_gap = 0;
        int last_pos = -1;
        int current_pos = 0;
        
        while (n > 0) {
            if (n & 1) {
                if (last_pos != -1) {
                    max_gap = max(max_gap, current_pos - last_pos);
                }
                last_pos = current_pos;
            }
            current_pos++;
            n >>= 1;
        }
        
        return max_gap;
    }
};