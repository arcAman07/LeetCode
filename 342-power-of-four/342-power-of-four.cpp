class Solution {
public:
    bool isPowerOfFour(int n) {
        if (n<=0)
        {
            return false;
        }
        else {
            
        
        float a = log(n)/log(4);
        if ((unsigned int)a == a)
        {
            return true;
        }
        return false;
        }
    }
};