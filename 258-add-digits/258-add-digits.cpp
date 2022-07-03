class Solution {
public:
    int addDigits(int num) {
        while(num>=10)
        {
            int a = num;
            int total = 0;
            while(a!=0)
            {
                int b = a%10;
                total += b;
                a= a/10;
            }
            num = total;
        }
        return num;
    }
};