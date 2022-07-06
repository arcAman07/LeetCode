class Solution {
public:
    string convertToBase7(int num) {
        if(num < 0)return "-" + convertToBase7(-num);
    else if(num < 7) return to_string(num);
    else
        return convertToBase7(num/7) + convertToBase7(num%7);
    }
};