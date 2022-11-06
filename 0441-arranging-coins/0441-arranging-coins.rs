impl Solution {
    pub fn arrange_coins(n: i32) -> i32 {
        let mut a :i32= 0;
        let mut x: i32 = n;
        let mut i:i32= 1;
        let mut b :i32= 0;
        while x>=0 {
            x -= i;
            a += 1;
            i += 1;
        }
        a-1
    }
}