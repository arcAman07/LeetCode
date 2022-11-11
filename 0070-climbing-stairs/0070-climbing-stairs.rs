impl Solution {
    pub fn climb_stairs(n: i32) -> i32 {
        match n {
            0 | 1 | 2 => n,
            k => (2..k).fold((1, 2), |acc, __| (acc.1, acc.0 + acc.1)).1,
        }
    }
}