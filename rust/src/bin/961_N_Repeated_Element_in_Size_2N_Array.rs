use std::collections::HashSet;

struct Solution;

impl Solution {
    pub fn repeated_n_times(nums: Vec<i32>) -> i32 {
      let mut num_set: HashSet<i32> = HashSet::new();

    for n in nums{
        if !num_set.insert(n){
            return n;
        }
    } 
    return 0;     
    }
}

fn main() {
    let nums1 = vec![1, 2, 3, 3];
    println!("{}",Solution::repeated_n_times(nums1));
}