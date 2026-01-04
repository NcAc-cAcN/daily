struct Solution;

impl Solution {

    pub fn sum_four_divisors(nums: Vec<i32>) -> i32 {
        let mut final_sum: i32 = 0;

        for n in nums{
            let mut divisions: Vec<i32> =Vec::new();
            for i in 1..n+1{
                if n%i == 0{
                    divisions.push(i);
                }
                if divisions.len() > 4{break}
            }
            if divisions.len() == 4{
                let sum:i32 = divisions.iter().sum();
                final_sum += sum;
            }

    
        }
        return final_sum;
    }
}

fn main() {
    let nums1 = vec![21,4,7];
    println!("{}",Solution::sum_four_divisors(nums1));
}