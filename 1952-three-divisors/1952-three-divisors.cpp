class Solution {
public:
    bool isThree(int n) {
        int total = 0;
        for(int i=2;i<n;i++)
        {
            if(n%i == 0)
            {
                total += 1;
            }
        }
        if (total == 1)
        {
            return true;
        }
        return false;
    }
};