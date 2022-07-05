class Solution {
public:
    int countEven(int num) {
        int total = 0;
        for(int i=2;i<num+1;i++)
        {
            int a = i;
            int sum =0;
            while(a!=0)
            {
                int b = a%10;
                sum += b;
                a = a/10;
            }
            if (sum%2 == 0)
            {
                total += 1;
            }
        }
        return total;
    }
};