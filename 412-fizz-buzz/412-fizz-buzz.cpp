class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> vect;
        for(int i=1;i<=n;i++)
        {
            if(i%15==0)
            {
                vect.push_back("FizzBuzz");
                continue;
            }
            else if(i%5 == 0)
            {
                vect.push_back("Buzz");
                continue;
            }
            else if(i%3 == 0)
            {
                vect.push_back("Fizz");
                continue;   
            }
            else
            {
                vect.push_back(to_string(i));
            }
        }
        return vect;
    }
};