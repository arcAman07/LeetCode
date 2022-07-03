class Solution {
public:
    bool checkPerfectNumber(int num) {
        int a = pow(num,0.5);
        int total = 1;
        for(int i=2;i<=a;i++)
        {
            if(num%i == 0)
            {
                int a = num/i;
                if(a!=i)
                {
                    total += a+i;
                }
                else
                {
                    total += i;
                }
            }
        }
        if(total == num && num!=1)
        {
            return true;
        }
        return false;
    }
};