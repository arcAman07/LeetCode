class Solution {
public:
    int singleNumber(vector<int>& nums) {
        std::sort(nums.begin(),nums.end());
        if (nums.size() >= 4)
        {
            for(int i=0;i<nums.size()-3;i+=3)
            {
                if (nums[i] != nums[i+1] && nums[i] != nums[i+2])
                {
                    return nums[i];
                }
            }
            return nums[nums.size()-1];
        }
        else {
            return nums[nums.size()-1];
        }
        
    }
};