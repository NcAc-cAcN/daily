use std::cmp;

struct Solution;
impl Solution {
    pub fn find_max_consecutive_ones(nums: Vec<i32>) -> i32 {
        let mut tmp = 0;
        let mut res= 0;
        for n in nums{
            if n ==0{
                tmp = 0;
            }else{
                tmp +=1;
            }
            res = res.max(tmp);
        }
        res
    }
}

fn main(){
    let nums = vec![1,1,0,1,1,1];
    
    println!("{}",Solution::find_max_consecutive_ones(nums));
}