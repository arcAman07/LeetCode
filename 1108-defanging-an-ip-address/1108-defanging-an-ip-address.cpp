class Solution {
public:
    string defangIPaddr(string address) {
        string final = "";
        for(int i=0;i<address.length();i++)
        {
            if (address[i] == '.')
            {
                final += "[.]";
            }
            else {
                final += address[i];
            }
            
        }
        return final;
    }
};