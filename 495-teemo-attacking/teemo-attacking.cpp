class Solution {
public:
    int findPoisonedDuration(vector<int>& timeSeries, int duration) {
        if(timeSeries.empty() || duration==0) return 0;

        int totalPoisoned = 0;
        for(int i=0;i<timeSeries.size()-1;i++){
            totalPoisoned += min(duration, timeSeries[i+1]-timeSeries[i]);
        }
        totalPoisoned +=duration;
        return totalPoisoned;
    }
};