class Solution {
public:
    string toLowerCase(string s) {
        string a = "";
        for(int i=0;i<s.length();i++)
        {
            if ((int)s[i]>=65 && (int)s[i]<=90)
            {
                a += (char)((int)s[i]+32);
            }
            else
            {
                a += s[i];
            }
            
        }
        return a;
    }
};