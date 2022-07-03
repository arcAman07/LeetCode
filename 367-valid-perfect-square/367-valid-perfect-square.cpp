class Solution {
public:
    bool isPerfectSquare(int num) {
        int a = pow(num,0.5);
        if(a*a == num)
        {
            return true;
        }
        return false;
    }
};