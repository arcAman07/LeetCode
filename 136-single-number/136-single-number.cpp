class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        if (nums.size()>=3)
        {
            for(int i=0;i<nums.size()-2;i+=2)
        {
            if (nums[i] != nums[i+1])
            {
                return nums[i];
            }
        }
        return nums[nums.size()-1];
    }
        return nums[nums.size()-1];
        }
        
};