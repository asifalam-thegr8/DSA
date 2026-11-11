class Solution {
public:
    vector<int> countServers(int n, vector<vector<int>>& logs, int x, vector<int>& queries) {
        int m = queries.size();
        vector<int> ans(m);
        
        vector<pair<int, int>> q(m);
        for (int i = 0; i < m; ++i) {
            q[i] = {queries[i], i};
        }
        sort(q.begin(), q.end());
        sort(logs.begin(), logs.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        
        unordered_map<int, int> serverCount;
        int l = 0, r = 0;
        int totalLogs = logs.size();
        
        for (int i = 0; i < m; ++i) {
            int timeLimit = q[i].first;
            int startTime = timeLimit - x;
            int originalIndex = q[i].second;
            
            while (r < totalLogs && logs[r][1] <= timeLimit) {
                serverCount[logs[r][0]]++;
                r++;
            }
            
            while (l < totalLogs && logs[l][1] < startTime) {
                serverCount[logs[l][0]]--;
                if (serverCount[logs[l][0]] == 0) {
                    serverCount.erase(logs[l][0]);
                }
                l++;
            }
            
            ans[originalIndex] = n - serverCount.size();
        }
        
        return ans;
    }
};