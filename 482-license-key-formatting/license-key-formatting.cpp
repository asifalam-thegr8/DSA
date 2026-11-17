class Solution {
public:
    string licenseKeyFormatting(string s, int k) {
        string clean = "";
        for (char c : s) {
            if (c != '-') {
                clean += toupper(c);
            }
        }
        
        int n = clean.length();
        if (n == 0) return "";
        
        int firstGroupLength = n % k;
        if (firstGroupLength == 0) firstGroupLength = k;
        
        string result = "";
        result += clean.substr(0, firstGroupLength);
        
        for (int i = firstGroupLength; i < n; i += k) {
            result += "-" + clean.substr(i, k);
        }
        
        return result;
    }
};