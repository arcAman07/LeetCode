class Solution {
public:
    unordered_map<char, int> symbols = {{'{',-1},{'[',-2},{'(',-3},{'}',1},{']',2},{')',3}};
    bool isValid(string s) {
        stack<int> s1;
        for(char ch:s)
        {
            if (symbols[ch] < 0)
            {
                s1.push(symbols[ch]);
            } else {
                if (s1.empty()) {
                    return false;
                }
                int top_elem = s1.top();
                if (symbols[ch] + top_elem == 0) {
                    s1.pop();
                } else {
                    return false;
                }
            }
            
        }
        if (s1.empty()) {
            return true;
        }
        return false;
    }
};