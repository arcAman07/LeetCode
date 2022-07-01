class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        for(int i=left;i<=right;i++)
        {
            int a = i;
            int flag = 0;
            while(a!=0)
            {
                int b = a%10;
                a = a/10;
                if(b == 0)
                {
                    flag = 1;
                    break;
                }
                if(i%b != 0)
                {
                    flag = 1;
                    break;
                }
            }
            if(flag == 0)
            {
                vec.push_back(i);
            }
        }
        return vec;
    }
};