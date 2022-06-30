class Solution {
public:
    int fib(int n) {
        int first = 0;
        int second = 1;
        if (n==0){
            return first;
        }
        else if (n ==1)
        {
            return second;
        }
        else {
            int third;
            for(int i=0;i<=n-2;i++)
            {
                third = first + second;
                first = second;
                second  =  third;
            }
            return third;
        }
    }
};