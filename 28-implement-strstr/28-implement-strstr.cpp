class Solution {
public:
    int strStr(string haystack, string needle) {
        if (haystack.length() > needle.length())
        {
            for(int i=0; i<= haystack.length()-needle.length();i++)
        {
            if (haystack.substr(i,needle.length()) == needle)
            {
                return i;
            }
        }
        }
        else if (haystack == needle || needle == "")
        {
            return 0;
        }
        return -1;
    }
};