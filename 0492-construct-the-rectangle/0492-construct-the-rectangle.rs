impl Solution {
    pub fn construct_rectangle(area: i32) -> Vec<i32> {
        let x: i32 = (area as f32).sqrt() as i32;
        let mut vec : Vec<i32> = Vec::new();
        for i in (1..x+1).rev() {
            if (area%i == 0) {
                vec.push(area/i);
                vec.push(i);
                break;
            }
        }
        vec
    }
}