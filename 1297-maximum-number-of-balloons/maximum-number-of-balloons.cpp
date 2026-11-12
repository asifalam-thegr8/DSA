class Solution {
public:
    int maxNumberOfBalloons(string text) {
        unordered_map<char, int> counts;
        for (char c : text) {
            counts[c]++;
        }
        
        int b = counts['b'];
        int a = counts['a'];
        int l = counts['l'] / 2;
        int o = counts['o'] / 2;
        int n = counts['n'];
        
        return min({b, a, l, o, n});
    }
};