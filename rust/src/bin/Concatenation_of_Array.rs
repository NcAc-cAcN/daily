use core::num;
use std::collections::HashSet;

struct Solution;

impl Solution {
    pub fn get_concatenation(nums: Vec<i32>) -> Vec<i32> {
        [nums.as_slice(),nums.as_slice()].concat()
    }
}

fn main(){
    let nums = vec![1,2,1];
    Solution::get_concatenation(nums);
}