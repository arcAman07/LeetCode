class Solution {
public:
    int tribonacci(int n) {
        int a1 = 0;
        int a2 = 1;
        int a3 = 1;
        int sum;
        if(n==0)
        {
            return 0;
        }
        else if(n==1 || n==2)
        {
            return 1;
        }
        for(int i=0;i<n-2;i++)
        {
            sum = a1+a2+a3;
            a1 = a2;
            a2 = a3;
            a3 = sum;
        }
        return sum;
    }
};