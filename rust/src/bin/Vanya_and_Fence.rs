use std::io;

fn main() {
    let mut first_input = String::new();
    let mut second_input = String::new();

    let _ = io::stdin().read_line(&mut first_input);
    let _ = io::stdin().read_line(&mut second_input);

    let first_input: Vec<usize> = first_input.trim().split_whitespace().map(|x| x.parse().unwrap()).collect();
    let second_input: Vec<usize> = second_input.trim().split_whitespace().map(|x| x.parse().unwrap()).collect();

    let mut count = 0;

    for i in second_input{
        if i <= first_input[1]{
            count +=1;
        }
        else{
            count +=2;
        }
    }

    println!("{}", count);
}
