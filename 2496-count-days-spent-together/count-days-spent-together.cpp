class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> daysInMonths = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        
        auto getDayNumber = [&](string date) {
            int month = stoi(date.substr(0, 2));
            int day = stoi(date.substr(3, 2));
            int totalDays = day;
            for (int i = 0; i < month - 1; ++i) {
                totalDays += daysInMonths[i];
            }
            return totalDays;
        };
        
        int arriveA = getDayNumber(arriveAlice);
        int leaveA = getDayNumber(leaveAlice);
        int arriveB = getDayNumber(arriveBob);
        int leaveB = getDayNumber(leaveBob);
        
        int start = max(arriveA, arriveB);
        int end = min(leaveA, leaveB);
        
        return max(0, end - start + 1);
    }
};