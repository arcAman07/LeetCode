impl Solution {
    pub fn average_value(nums: Vec<i32>) -> i32 {
        let total: i32 = nums.iter().filter(|&x| *x%6 == 0).sum();
        let values: Vec<i32> = nums.into_iter().filter(|x| x%6 == 0).collect();
        let tot_val = values.len() as i32;
        if tot_val == 0 {
            return 0;
        }
        let ans: i32 = total / tot_val;
        return ans
    }
}