impl Solution {
    pub fn is_happy(n: i32) -> bool {
        let mut x: i32 = 10;
        let mut a: i32 = n;
        while x>9 {
            let mut sum = 0;
            while a!=0 {
                let b = a%10;
                sum += b*b;
                a = a/10;
            }
            a = sum;
            x = a;
        }
        if x == 1 || x == 7 {
            true
        } else {
            false
        }
    }
}