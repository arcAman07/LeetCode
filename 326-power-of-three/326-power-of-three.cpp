class Solution {
public:
    bool isPowerOfThree(int n) {
        if (n<1)
        {
            return false;
        }
        else
        {
            while(n!=1)
            {
                int m = n%3;
                if ( m != 0)
                {
                    return false;
                }
                n = n/3;
            }
            return true;
        }
    }
};