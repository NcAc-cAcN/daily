use std::io;

fn take_int() -> i16 {
    let mut input = String::new();
    let _ = io::stdin().read_line(&mut input).unwrap();
    let input = input.trim().parse::<i16>().unwrap();
    input
}

fn all_uniqe(digits: i16) -> bool {
    let vector: Vec<i16> = digits.to_string().chars().map(|x| x as i16).collect();
    let first_uniqe = vector[0] == vector[1] || vector[0] == vector[2] || vector[0] == vector[3];
    let second_uniqe = vector[1] == vector[2] || vector[1] == vector[3];
    let thirth_uniqe = vector[2] == vector[3];

    return !(first_uniqe || second_uniqe || thirth_uniqe);
}

fn main() {
    let mut num = take_int()+1;
    while !all_uniqe(num) {
        num +=1;
    }
    println!("{}", num)
}
