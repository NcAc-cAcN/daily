use std::cmp::max;
use std::io;

fn take_int()->u32{
    let mut input = String::new();
    let _ = io::stdin().read_line(&mut input).unwrap();
    input.trim().parse().unwrap()
}
fn take_two()->[u32;2]{
    let mut input = String::new();
    let _ = io::stdin().read_line(&mut input).unwrap();
    let mut res= input.trim().split_whitespace().map(|x| x.parse::<u32>().unwrap());
    
    [res.next().unwrap(),res.next().unwrap()]
}
fn main(){
    let t = take_int();
    let mut cap:u32 = take_two().iter().sum();
    let mut sum = cap;

    for _i in 1..t{
        let tmp =take_two();
        sum -= tmp[0];
        sum += tmp[1];
        cap = max(cap, sum);
    }

    println!("{}", cap);

}