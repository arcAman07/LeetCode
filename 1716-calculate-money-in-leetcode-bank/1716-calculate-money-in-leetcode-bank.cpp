class Solution {
public:
    int totalMoney(int n) {
        int mon = 1;
        int total = 0;
        int b =0;
        while(b!=n)
        {
            int a = (b)%7;
            if(a == 6)
            {
                total += (mon+a);
                mon =mon+1;
            }
            else 
            {
                total += (mon+a);
            }
            b = b+1;
        }
        return total;
    }
};