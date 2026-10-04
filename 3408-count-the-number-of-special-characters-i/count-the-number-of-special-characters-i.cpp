class Solution {
public:
    int numberOfSpecialChars(string word) {
        unordered_set<char> lower, upper;
        for (char c : word) {
            if (islower(c)) {
                lower.insert(c);
            } else if (isupper(c)) {
                upper.insert(c);
            }
        }
        
        int count = 0;
        for (char c : lower) {
            if (upper.count(toupper(c))) {
                count++;
            }
        }
        
        return count;
    }
};