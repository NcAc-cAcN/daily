use std::io;

fn main() {
    let mut a = 0;
    let mut d = 0;
    
    let mut input = String::new();
    let _ = io::stdin().read_line(&mut input);

    let _ = io::stdin().read_line(&mut input);
    for c in input.chars() {
        if c == 'A' {
            a += 1;
        }else if c =='D'{
            d +=1;
        }
    }

    if d==a{
        print!("Friendship")
    }else if d>a{
        print!("Danik")
    }else{
        print!("Anton")
    }
}
