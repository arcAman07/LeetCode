class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int diff = abs(nums[0]-target);
        int a = 0;
        for(int i=0;i<nums.size();i++)
        {
            int b = abs(nums[i]-target);
            if(nums[i] == target)
            {
                return i;
            }
            else {
                if ( b< diff )
                {
                    diff = b;
                    a = i;
                }
            }
        }
        if(target<nums[a] && a!=0)
        {
            return a;
        }
        if(target<nums[a] && a==0)
        {
            return 0;
        }
        else
        {
            return a+1;
        }
    }
    

};