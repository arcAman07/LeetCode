class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total = numBottles;
        while(numBottles>=numExchange)
        {
            int b = numBottles%numExchange;
            int c = numBottles/numExchange;
            total += c;
            numBottles = c + b;
        }
        return total;
    }
};