class Solution {
public:
    bool areNumbersAscending(string s) {
        vector<int> arr;
        int num = 0;

        for (int i = 0; i < s.size(); i++) {
            if (isdigit(s[i])) {
                num = 0;

                while (i < s.size() && isdigit(s[i])) {
                    num = num * 10 + (s[i] - '0');
                    i++;
                }

                arr.push_back(num);
            }
        }

        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] <= arr[i - 1]) {
                return false;
            }
        }

        return true;
    }
};