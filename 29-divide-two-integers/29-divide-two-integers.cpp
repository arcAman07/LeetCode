class Solution {
public:
    int divide(int dividend, int divisor) {
        
        if ((long) dividend/divisor > pow(2,31)-1)
        {
            return pow(2,31)-1;
        }
        else if (dividend/divisor < -pow(2,31))
        {
            return -pow(2,31);
        }
        return (int)(dividend/divisor);
    }
};