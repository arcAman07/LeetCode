impl Solution {
    pub fn total_cost(costs: Vec<i32>, k: i32, candidates: i32) -> i64 {
        let mut tot_cost : i32 = 0;
        let mut vec = costs.clone();
        let b : usize = candidates as usize;
        let c = 0;
        for i in 0..k {
            let a :i32 = vec.len() as i32;
            if candidates <= a {
                let mut x = vec![0; candidates as usize];
                let mut y = vec![0; candidates as usize];
                let index;
                x.clone_from_slice(&vec[0..b]);
                y.clone_from_slice(&vec[a as usize-b..]);
                let mut x_iter = x.iter();
                let mut y_iter = y.iter();
                let minValue_1 = match x.iter().min() {
                    Some(min) => min,
                    _ => &c,
                };
                let minValue_2 = match y.iter().min() {
                    Some(min) => min,
                    _ => &c,
                };
                if minValue_1 <= minValue_2 {
                    tot_cost += *minValue_1;
                    index = x_iter.position(|&r| r == *minValue_1).unwrap();
                }
                else {
                    tot_cost += *minValue_2;
                    index = (a as usize-b) + y_iter.position(|&r| r == *minValue_2).unwrap();
                }
                vec.remove(index);
            } else {
                let mut x = vec![0; a as usize];
                let index;
                x.clone_from_slice(&vec[0..a as usize]);
                let mut x_iter = x.iter();
                let minValue_1 = match x.iter().min() {
                    Some(min) => min,
                    _ => &c,
                };
                tot_cost += *minValue_1;
                index = x_iter.position(|&r| r == *minValue_1).unwrap();
                vec.remove(index);
            }
        }
        tot_cost as i64
    }
}
