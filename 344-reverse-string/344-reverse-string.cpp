class Solution {
public:
    void reverseString(vector<char>& s) {
        int mid = s.size()/2;
        for(int i=0;i<mid;i++)
        {
            char ch = s[i];
            s[i] = s[s.size()-i-1];
            s[s.size()-i-1] = ch;
            
        }
    }
};