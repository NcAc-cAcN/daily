use std::io;

fn take_int() -> i8 {
    let mut input = String::new();
    let _ = io::stdin().read_line(&mut input);
    return input.trim().parse::<i8>().unwrap();
}
fn take_input() -> String {
    let mut input = String::new();
    let _ = io::stdin().read_line(&mut input);
    return input.trim_end().to_string();
}


fn main() {
    let _num = take_int();
    let input = take_input();
    let mut count = 0;
    for (p,n) in input.chars().zip(input.chars().skip(1)){
        if p==n {
            count += 1;
        }
    }
    println!("{}",count);
}
