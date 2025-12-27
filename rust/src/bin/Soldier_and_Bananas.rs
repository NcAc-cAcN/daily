use std::io;

fn main() {
    let mut nums = String::new();
    io::stdin().read_line(&mut nums).unwrap();
    let n: Vec<usize> = nums
        .trim()
        .split_whitespace()
        .map(|x| x.parse().unwrap())
        .collect();
    let cost: usize = (1..n[2] + 1).map(|x| n[0] * x).sum();
    let money = if n[1] > cost { 0 } else { cost-n[1] };
    println!("{}", money);
}
