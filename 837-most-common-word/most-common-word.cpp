class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string> bannedSet(banned.begin(), banned.end());
        unordered_map<string, int> wordCount;
        
        string word = "";
        int maxCount = 0;
        string result = "";
        
        for (int i = 0; i <= paragraph.length(); ++i) {
            if (i < paragraph.length() &&isalpha(paragraph[i])) {
                word += tolower(paragraph[i]);
            } else {
                if (!word.empty()) {
                    if (bannedSet.find(word) == bannedSet.end()) {
                        wordCount[word]++;
                        if (wordCount[word] > maxCount) {
                            maxCount = wordCount[word];
                            result = word;
                        }
                    }
                    word = "";
                }
            }
        }
        
        return result;
    }
};