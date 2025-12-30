use std::io;

fn main(){
    let mut input = String::new();
    let _ =io::stdin().read_line(&mut input);
    let count: usize =input.trim().chars().filter(|x|(*x=='7')|| (*x=='4')).count();
    if count == 4 || count == 7{
        print!("YES")
    }
    else{
        print!("NO")
    }
}