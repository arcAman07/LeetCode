class Solution {
public:
    int countSeniors(vector<string>& details) {
        int sum = 0;
        for(string &i:details)
        {
            int a = stoi(i.substr(11,2));
            if (a>60)
            {
                sum +=1;
            }
        }
        return sum;
        
    }
};