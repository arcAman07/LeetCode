class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> vec;
        if (n == 0)
        {
            vec.push_back(0);
            return vec;
        }
        vec.push_back(0);
        vec.push_back(1);
        for(int i=2;i<n+1;i++)
        {
            int count = 0;
            int a = i;
            while(a!=0)
            {
                int m = a%2;
                a = a/2;
                if (m == 1)
                {
                    count += 1;
                }
            }
            vec.push_back(count);
        }
        return vec;
    }
};