class Solution {
public:
    int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
        int a = arrivalTime + delayedTime;
        return a%24;
    }
};