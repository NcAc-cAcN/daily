use std::collections::HashSet;
struct Solution;
impl Solution {
    pub fn find_error_nums(nums: Vec<i32>) -> Vec<i32> {

        let mut uniq:HashSet<i32> = HashSet::new();
        let mut dup = 0;
        let mut missing = 0;
        let lenght = nums.len() as i32;
        for i in nums{
            if !uniq.insert(i){
                dup= i;
            }
        }

        for i in 1..lenght+1{
            if !uniq.contains(&i){
                missing = i;       
            }
        }

        vec![dup,missing]

    }
}
fn main() {
    let nums = vec![1,4,2,3,2,6,5];

    println!("{:?}", Solution::find_error_nums(nums));
}
