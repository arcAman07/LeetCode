class Solution {
public:
    int divisorSubstrings(int num, int k) {
        int count = 0;
        string b = to_string(num);
        if(b.length()>=2)
        {
            for(int i=0;i<=b.length()-k;i++)
        {
            int a = stoi(b.substr(i,k));
            if (a != 0)
            {
                if(num%a == 0)
                {
                    count +=1 ;
                }
            }
            cout << a<< endl;
            
            
        }
        return count;
            
        }
        else
        {
            if (num%k == 0)
            {
                return 1;
            }
            return 0;
        }
        
    }
};