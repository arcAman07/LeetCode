class Solution {
public:
    int missingNumber(vector<int>& nums) {
        for(int i=0;i<=nums.size();i++)
        {
            if (std::find(nums.begin(),nums.end(),i)!= nums.end())
            {
                continue;
            }
            else
            {
                return i;
            }
        }
        return 0;
    }
};