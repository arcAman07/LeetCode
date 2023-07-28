class Solution {
public:
    int maximizeSum(vector<int>& nums, int k) {
        int max = *max_element(nums.begin(), nums.end());
        return ((2*max*k + k*k - k)/2);
    }
};