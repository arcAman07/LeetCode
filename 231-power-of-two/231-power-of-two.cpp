class Solution {
public:
    bool isPowerOfTwo(int n) {
        if (n<1)
        {
            return false;
        }
        else
        {
            while(n!=1)
            {
                int m = n%2;
                if ( m != 0)
                {
                    return false;
                }
                n = n/2;
            }
            return true;
        }
    }
};