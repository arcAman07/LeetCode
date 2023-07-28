class Solution {
public:
    int maxDivScore(vector<int>& nums, vector<int>& divisors) {
        int max = -1;
        int number;
        for(int &i:divisors)
        {
            int sum = 0;
            for(int &j:nums)
            {
                if(j%i == 0)
                {
                    sum += 1;
                }
            }
            if (sum>max)
            {
                max = sum;
                number = i;
            } else if (sum == max and i<number)
            {
                number = i;
            }
        }
        return number;
    }
};